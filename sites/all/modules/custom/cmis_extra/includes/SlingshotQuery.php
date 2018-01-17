<?php

class SlingshotQuery {
  public function __construct($repo, $page_size) {
    $this->base_url = $this->buildSlingshotBaseUrl($repo);
    $this->page_size = $page_size;
  }

  public function execute($query, $start_page, $facets, $root_node, $sort) {

    // Do not search in the following types
    $query = '-TYPE:\'folder\' AND -TYPE:\'lnk:link\' AND -TYPE:\'dl:issue\' AND -TYPE:\'fm:topic\' AND -TYPE:\'fm:post\' AND (' . $query . ')';

    // validate sort param
    $params = array(
      'term' => $query,
      'pageSize' => $this->page_size,
      'startIndex' => $this->page_size * $start_page,
      'repo' => 'true',
      'facetFields' => $facets,
      'rootNode' => $root_node,
      'sort' => $sort,
    );

    // copy params for the list result
    $list_params = $params;
    $list_params['term'] = $this->prepareFacetQuery($query);
    unset($list_params['facetFields']);

    // copy params for the facet result
    $facet_params = $params;
    $facet_params['maxResults'] = 0;
    $facet_params['startIndex'] = 0;
    $facet_params['pageSize'] = 0;
    unset($facet_params['sort']);

    $list_response = $this->makeSlingshotRequest($list_params);
    $facet_response = $this->makeSlingshotRequest($facet_params);

    return array(
      'items' => $list_response['items'],
      'found' => $list_response['numberFound'],
      'page_count' => $list_response['totalRecords'],
      'facets' => isset($facet_response['facets']) ? $this->processFacetResponse($facet_response['facets']) : array(),
    );
  }

  public function makeSlingshotRequest($params) {
    global $conf;
    $url = $this->base_url . '?' . drupal_http_build_query($params);

    $options = array();

    if (isset($conf['cmis_repositories']['default']['X-Alfresco-Run-As-Password'])) {
      $options = array(
        'headers' => array(
          'X-Alfresco-Remote-User' => $GLOBALS['user']->name,
          'X-Alfresco-Run-As-Password' => $conf['cmis_repositories']['default']['X-Alfresco-Run-As-Password'],
        ),
      );
    }

    $response = drupal_http_request($url, $options);

    watchdog('cmis_slingshot', 'Alfresco slingshot API request %url responded %response_code', array('%url' => $url, '%response_code' => $response->code));

    if ($response && !empty($response->data) && $response->code == 200) {
      return json_decode($response->data, TRUE);
    }
    return FALSE;
  }

  private function prepareFacetQuery($query) {
    $query_full = '(' . $query . ')';

    $filters = $this->buildFacetsQuery();
    if ($filters) {
      $query_full .= ' and ' . $filters;
    }

    return $query_full;
  }

  private function processFacetResponse($facet_response) {
    $facets = array();
    foreach ($facet_response as $facet_name => $facet_terms) {
      $facet_name_safe = strtr($facet_name, array(
        '@' => '',
        '{http://www.alfresco.org/model/content/1.0}' => ''
      ));
      if (empty($facets[$facet_name_safe])) {
        $facets[$facet_name_safe] = $facet_terms;
      }
    }
    return $facets;
  }

  private function buildSlingshotBaseUrl($repository) {
    $repos = variable_get('cmis_repositories', array());
    if (empty($repos[$repository])) {
      watchdog('cmis_slingshot', 'Unknown repository: :repository', array(':repository' => $repository));
      return NULL;
    }

    if (empty($repos[$repository]['url'])) {
      watchdog('cmis_slingshot', 'Unknown repository url.');
      return NULL;
    }

    // Build the url
    if (!empty($repos[$repository]['user'])) {
      $auth_str = $repos[$repository]['user'];
      if (!empty($repos[$repository]['password'])) {
        $auth_str .= ':' . $repos[$repository]['password'];
      }
      $auth_str .= '@';
    }
    else {
      $auth_str = '';
    }

    $url_parts = parse_url($repos[$repository]['url']);

    $url_parts['port'] = empty($url_parts['port']) ? '80' : $url_parts['port'];

    $slingshot_url = sprintf('%s://%s%s%s/%s/search',
      $url_parts['scheme'],
      $auth_str,
      $url_parts['host'],
      ($url_parts['port'] == '80' ? '' : ':' . $url_parts['port']),
      CMIS_EXTRA_ALFRESCO_SLINGSHOT_URL);

    return $slingshot_url;
  }

  private function formatMatchFilter($field_name, $values) {
    // NOTE: Field name dots should be escaped with slashs in filters field.
    return '{http://www.alfresco.org/model/content/1.0}' . $field_name . '|' . implode('|', $values);
  }

  private function formatRangeFilter($field, $from, $to) {
    return '{http://www.alfresco.org/model/content/1.0}' . $field_name . '|' . $from . '".."' . $to;
  }

  private function buildFacetsQuery() {
    $query_args = drupal_get_query_parameters();
    $faceted_query = array();

    foreach ($query_args as $name => $val)  {

      if (strpos($name, 'cmis-field:') === 0 && is_scalar($val)) {
        // TODO: add valid facet check here
        $field_name = substr(str_replace('%dot%', '.', $name), 11);

        if (!$field_name) {
          continue;
        }

        $val = filter_xss(strtr(check_plain($val), array(
          // '*' => '%',
          '?' => '_',
          '`' => ''
        )));

        $val = array_map('addslashes', explode(',', $val));
        $faceted_query[$field_name] = $val;
      }

    }

    $all_queries = array();
    foreach($faceted_query as $field_name => $values) {
      $field_query = array();
      foreach($values as $value) {
        $field_query[] = $field_name . ':' . $value;
      }
      $all_queries[] = '(' . implode(' or ', $field_query) . ')';
    }
    return implode(' and ', $all_queries);

  }
}


