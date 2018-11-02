<?php

/**
 * @file
 * CMIS extra helpers
 */


/**
 * Human time diff
 *
 * @param $a
 * @param $b
 *
 * @return string
 */
function cmis_extra_human_time_diff($a, $b) {
  if ($a > $b) {
    $c = $a;
    $a = $b;
    $b = $c;
  }
  $diff = $b - $a;
  $units = array(
    31556926 => array(t('%s year'), t('%s years')),
    2592000 => array(t('%s month'), t('%s months')),
    604800 => array(t('%s week'), t('%s weeks')),
    86400 => array(t('%s day'), t('%s days')),
    3600 => array(t('%s hour'), t('%s hours')),
    60 => array(t('%s minute'), t('%s minutes')),
    1 => array(t('%s second'), t('%s seconds')),
  );
  $result = array();
  $utime_diff = $diff;
  $precision = NULL;
  foreach ($units as $utime => $tr) {
    if ($utime_diff >= $utime) {
      $utime_n = round($utime_diff/$utime);
      $utime_diff -= $utime_n*$utime;
      $result[] = sprintf($utime_n > 1 ? $tr[1] : $tr[0], $utime_n);
      if ($precision === NULL) {
        $precision = 2;
      }
    }
    if ($precision !== NULL && --$precision == 0) {
      break;
    }
  }
  return implode($result, t(' and '));
}

/**
 * Mappings between slingshot and cmis object model
 *
 * @return array
 */
function cmis_extra_slingshot_mapping($singular_name = '') {

  $fields = array(
    'content.mimetype' => 'cmis:contentStreamMimeType',

    'creator' => 'cmis:createdBy',
    'modifier' => 'cmis:lastModifiedBy',

    'created' => 'cmis:creationDate',
    'modified' => 'cmis:lastModificationDate',

    'content.size' => 'cmis:contentStreamLength',
  );

  if ($singular_name) {
    if (!empty($fields[$singular_name])) {
      return $fields[$singular_name];
    }
    else {
      return NULL;
    }
  }
  else {
    return $fields;
  }
}

/**
 * Do data info request
 */
function cmis_extra_slingshot_info_query($keyword = '*', $filters = array(), $facet_field = array(), $root_folder = '', $repository = 'default') {

  global $conf;
  $repository_conf = $conf['cmis_repositories'][$repository];

  $info = array(
    'facets' => array(),
  );

  if (empty($repository_conf)) {
    watchdog('CMIS_EXTRA', 'Unknown repository: :repository', array(':repository' => $repository));
    return $info;
  }

  if (empty($repository_conf['url'])) {
    watchdog('CMIS_EXTRA', 'Unknown repository url.');
    return $info;
  }

  // Build the url
  if (!empty($repository_conf['user'])) {
    $userpass = array();
    $userpass[] = $repository_conf['user'];
    if (!empty($repository_conf['password'])) {
      $userpass[] = $repository_conf['password'];
    }
    $userpass = implode(':', $userpass) . '@';
  }
  else {
    $userpass = '';
  }

  $cmis_url_part = parse_url($repository_conf['url']);
  if (empty($cmis_url_part['port']))
      $cmis_url_part['port'] = '80';
  $cmis_url = sprintf('%s://%s%s%s/%s/search',
    $cmis_url_part['scheme'],
    $userpass,
    $cmis_url_part['host'],
    ($cmis_url_part['port'] == '80' ? '' : ':' . $cmis_url_part['port']),
    CMIS_EXTRA_ALFRESCO_SLINGSHOT_URL);

  $query_data = array(
    'term' => $keyword,
    'maxResults' => 0,
    'pageSize' => 0,
    'startIndex' => 0,
    'repo' => 'true',
  );

  if ($facet_field) {
    $query_data['facetFields'] = implode(',', $facet_field);
  }

  if (!empty($root_folder)) {
    $query_data['rootNode'] = 'workspace://SpacesStore/' . $root_folder;
  } elseif (variable_get('rootfolder') != '') {
    $query_data['rootNode'] = variable_get('rootfolder');
  }

  $cmis_url .= '?' . drupal_http_build_query($query_data);

  $options = array();

  $x_alfersco_pass = '';
  if (isset($repository_conf['X-Alfresco-Run-As-Password']))
      $x_alfersco_pass = $repository_conf['X-Alfresco-Run-As-Password'];

  if ($x_alfersco_pass) {
    $options = array(
      'headers' => array(
        'X-Alfresco-Remote-User' => $GLOBALS['user']->name,
        'X-Alfresco-Run-As-Password' => $x_alfersco_pass,
      ),
    );
  }

  $response = drupal_http_request($cmis_url, $options);

  if ($response && !empty($response->data) && $response->code == 200) {
    $response_data = json_decode($response->data, TRUE);
    $info['numberFound'] = $response_data['numberFound'];
    $info['totalRecords'] = $response_data['totalRecords'];
    $info['totalRecordsUpper'] = $response_data['totalRecordsUpper'];
    foreach ($response_data['facets'] as $facet_name => $facet_terms) {
      $facet_name_safe = strtr($facet_name, array(
        '@' => '',
        '{http://www.alfresco.org/model/content/1.0}' => ''
      ));
      if (empty($facets[$facet_name_safe])) {
        $info['facets'][$facet_name_safe] = $facet_terms;
      }
    }
  }
  else if ($response && $response->code == 404) {
      watchdog('CMIS_EXTRA', 'Access denied for http request: ' . $cmis_url . '.', array(), WATCHDOG_ERROR);
  }

  return $info;

}

/**
 * Singleton function to get the search page results.
 *
 * We use singleton so we can use panes to build the search page and not
 * make more than one (ok, two) request(s) to build the whole page.
 */
function cmis_extra_search_singleton($query) {
  $result = &drupal_static(__FUNCTION__);
  if (!isset($result)) {
    $page = pager_find_page();

    $sort = '';
    if (!empty($_GET['sort'])) {
      $sort = $_GET['sort'];
    }
    elseif (!empty($_GET['solrsort'])) {
      $sort = $_GET['solrsort'];
      $sort = explode(' ', $sort);
      $sort = trim(array_shift($sort));
      $solrsearch_fields_map = array(
        'sort_label' => '',
        'bundle' => 'content.mimetype',
        'sort_name' => 'creator',
        'ds_created' => 'created',
      );
      if (!empty($solrsearch_fields_map[$sort])) {
        $sort = $solrsearch_fields_map[$sort];
      }
      else {
        $sort = '';
      }
    }

    $num_per_page = variable_get('cmis_search_num_per_page', 10);

    if (!empty($_REQUEST['rootfolder'])) {
      $root_node = 'workspace://SpacesStore/' . $_REQUEST['rootfolder'];
    } elseif (variable_get('rootfolder') != ''){
      $root_node = variable_get('rootfolder');
    } else {
      $root_node = NULL;
    }

    $ss_query = new SlingshotQuery('default', $num_per_page);

    // NOTE: the facets definition with the model prepended is getting proper
    // facet values.
    $result = $ss_query->execute($query, $page, '{http://www.alfresco.org/model/content/1.0}creator,{http://www.alfresco.org/model/content/1.0}content.mimetype', $root_node, $sort);

  }
  return $result;
}

/**
 * Page callback.
 *
 * @param string $query
 *   The search query string.
 *
 * @return null|string
 *   The rendered page.
 */
function cmis_extra_search_view($query) {
  $results = cmis_extra_search_singleton($query);

  $contents = theme('cmis_search_results', array('rows' => $results['items'], 'keys' => $query, 'total' => $results['found'] ));

  return $contents;
}

/**
 * Adds labels to the terms using the rewrite_rules array (file pattern matching).
 *
 * @param  array $terms
 *    The initial terms array as returned from the slingshot library.
 * @param  array $rewrite_rules [description]
 *    The rewrite rules and the corresponding lables.
 * @return array
 *    The terms with the proper labels.
 */
function cmis_extra_group_and_label_terms($terms, $rewrite_rules) {
  if (!empty($rewrite_rules)) {
    $_terms = array();
    foreach ($rewrite_rules as $group_term) {
      if ($group_term['pattern']) {
        $group_term['terms'] = array();
        $group_term['hits'] = 0;
        $group_term['index'] = NULL;
        $group_term_pattern = preg_split('#[\s,;]+#', $group_term['pattern'], -1, PREG_SPLIT_NO_EMPTY);
        $group_term['value'] = implode(',', $group_term_pattern);
        foreach ($terms as $term_key => $term) {
          foreach ($group_term_pattern as $pattern) {
            $term['value'] = trim($term['value']);
            if (fnmatch($pattern, $term['value'])) {
              $group_term['terms'][] = $term['value'];
              $group_term['hits'] += $term['hits'];
              if ($group_term['index'] === NULL || $group_term['index'] > $term['index']) {
                $group_term['index'] = $term['index'];
              }
              unset($terms[$term_key]);
            }
          }
        }
        if ($group_term['terms']) {
          $_terms[] = $group_term;
        }
      }
    }
    $terms = array_merge($_terms, $terms);
  }
  return $terms;
}

/**
 * Build the proper URL depending on the content type of the object
 * @param string $object_id The object id
 * @param string $mime_type The object MIME type
 * @return array Array of 2 elements - object url and url type
 */
function cmis_extra_build_url_target($object_id, $mime_type) {
  $preview_mime_types = variable_get('cmis_html_preview_mime_types', array(
    'application/java-archive',
    'application/msword',
    'application/ogg',
    'application/pdf',
    'application/rss+xml',
    'application/rtf',
    'application/vnd.apple.keynote',
    'application/vnd.apple.numbers',
    'application/vnd.apple.pages',
    'application/vnd.ms-excel',
    'application/vnd.ms-excel.addin.macroenabled.12',
    'application/vnd.ms-excel.sheet.binary.macroenabled.12',
    'application/vnd.ms-excel.sheet.macroenabled.12',
    'application/vnd.ms-excel.template.macroenabled.12',
    'application/vnd.ms-outlook',
    'application/vnd.ms-powerpoint',
    'application/vnd.ms-powerpoint.addin.macroenabled.12',
    'application/vnd.ms-powerpoint.presentation.macroenabled.12',
    'application/vnd.ms-powerpoint.slide.macroenabled.12',
    'application/vnd.ms-powerpoint.slideshow.macroenabled.12',
    'application/vnd.ms-powerpoint.template.macroenabled.12',
    'application/vnd.ms-project',
    'application/vnd.ms-word.document.macroenabled.12',
    'application/vnd.ms-word.template.macroenabled.12',
    'application/vnd.oasis.opendocument.chart',
    'application/vnd.oasis.opendocument.graphics',
    'application/vnd.oasis.opendocument.image',
    'application/vnd.oasis.opendocument.presentation',
    'application/vnd.oasis.opendocument.presentation-template',
    'application/vnd.oasis.opendocument.spreadsheet',
    'application/vnd.oasis.opendocument.spreadsheet-template',
    'application/vnd.oasis.opendocument.text',
    'application/vnd.oasis.opendocument.text-master',
    'application/vnd.oasis.opendocument.text-template',
    'application/vnd.oasis.opendocument.text-web',
    'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    'application/vnd.openxmlformats-officedocument.presentationml.slide',
    'application/vnd.openxmlformats-officedocument.presentationml.slideshow',
    'application/vnd.openxmlformats-officedocument.presentationml.template',
    'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    'application/vnd.openxmlformats-officedocument.spreadsheetml.template',
    'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
    'application/vnd.openxmlformats-officedocument.wordprocessingml.template',
    'application/vnd.sun.xml.calc',
    'application/vnd.sun.xml.calc.template',
    'application/vnd.sun.xml.impress',
    'application/vnd.sun.xml.impress.template',
    'application/vnd.sun.xml.writer',
    'application/vnd.sun.xml.writer.template',
    'application/vnd.visio',
    'application/wordperfect',
    'application/x-cpio',
    'application/x-gzip',
    'application/x-hdf',
    'application/x-netcdf',
    'application/x-tar',
    'application/xhtml+xml',
    'application/zip',
    'text/mediawiki',
    'text/plain',
    'text/x-java-source',
    'text/xml',

    // image/audio/video previews
    'video/mp4',
    'video/m4v',
    'video/x-flv',
    'video/quicktime',
    'video/ogg',
    'video/webm',
    'audio/mpeg',
    'audio/x-wav',
    'image/jpeg',
    'image/png',
    'image/gif',
  ));

  $download_url_template = variable_get('cmis_download_link_pattern', 'cmis/views/[document_id]');

  $preview_url_template = variable_get('cmis_extra_link_pattern', 'http://intradok.roskilde.local/alfresco/wcservice/api/node/workspace/SpacesStore/[document_id]/content/thumbnails/iframe/html?c=force');

  $mime_type = trim(strtolower($mime_type));

  $return_url = $download_url_template;
  $type = 'download';

  if (in_array($mime_type, $preview_mime_types)) {
    $return_url = $preview_url_template;
    $type = 'preview';
  }

  $return_url = str_replace('[document_id]', $object_id, $return_url);
  $options['absolute'] = TRUE;

  return array(url($return_url, $options), $type);
}
