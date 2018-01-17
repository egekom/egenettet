<?php

/**
 * @file
 * Theme callbacks for the cmis_extra module.
 */
function theme_cmis_extra_browse_children($variables) {

  // Include cmis helpers.
  module_load_include('inc', 'cmis_search', 'cmis_search.utils');

  drupal_add_css(drupal_get_path('module', 'cmis_browser') . '/css/cmis_browser.css');

  // Prepare a list of local variable names that will displayed based on configuration.
  $header = array();
  $columns = isset($variables['columns']) ? $variables['columns'] : array('name', 'mimetype', 'size', 'author', 'updated', 'actions');
  foreach ($columns as $column) {
    $header[] = t($column);
  }

  $rows = array();
  foreach ($variables['context'] as $child) {
    $author = $child->properties['cmis:createdBy'];
    $updated = date_format(date_create($child->properties['cmis:lastModificationDate']), 'n/j/Y g:i A');
    $actions = array();

    if (!empty($_GET['type']) && $_GET['type'] == 'popup') {
      if ($_GET['caller'] == 'settings') {
        if (!empty($child->properties['cmis:path'])) {
          $actions = array(
            l('Choose', $child->properties['cmis:path'], array(
              'attributes' => array(
                'class' => 'cmis-field-insert',
                'id' => $child->id,
                'name' => $child->properties['cmis:name'],
              ),
            )),
          );
        }
      }
      else {
        if (empty($child->properties['cmis:path'])) {
          $actions = array(
            l('Choose', '', array(
              'attributes' => array(
                'class' => 'cmis-field-insert',
                'id' => $child->id,
                'name' => $child->properties['cmis:name'],
              ),
            )),
          );
        }
      }
    }
    else {
      $actions = array(
        l(t('properties'), 'cmis/properties', array(
          'attributes' => array('class' => 'action properties'),
          'query' => array('id' => $child->id),
        )),
        l(t('delete'), 'cmis/delete', array(
          'query' => array('id' => $child->id, 'return_url' => current_path()),
        )),
      );
    }

    switch ($child->properties['cmis:baseTypeId']) {
      case 'cmis:folder':
        $size = '';
        $mimetype = 'Space';
        $options = array();
        if (!empty($_GET['type']) && $_GET['type'] == 'popup') {
          $options = array(
            'query' => array(
              'type' => 'popup',
              'caller' => $_GET['caller'],
            ),
          );
        }
        $link = l($child->properties['cmis:name'], 'cmis/browser' . $child->properties['cmis:path'], $options);
        $icon = theme('image', array(
          'path' => drupal_get_path('theme', 'egedal') . '/images/cmis_browser/space.gif',
        ));
        break;
      default:
        $mimetype = $child->properties['cmis:contentStreamMimeType'];
        $cmis_icon_data = _cmis_search_tidyMime($mimetype);
        $icon = theme('image', array(
          'path' => drupal_get_path('theme', 'egedal') . '/images/cmis_views/' . $cmis_icon_data['image'],
        ));
        $options = array(
          'query' => array('id' => $child->id),
          'attributes' => array(
            'data-document_id' => array_shift(explode(';', $child->id)),
          ),
        );
        if (!empty($_GET['type']) && $_GET['type'] == 'popup') {
          $options['query']['type'] = 'popup';
          $options['query']['caller'] = $_GET['caller'];
        }
        $link = l($child->properties['cmis:name'], 'cmis/browser', $options);
        $size = number_format($child->properties['cmis:contentStreamLength'] / 1000, 2, '.', ',') . ' K';
        break;
    }
    $item = array();

    $name = $icon . ' ' . $link;
    if (in_array('actions', $columns)) {

      $actions = theme('item_list', array(
        'items' => $actions,
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array('class' => 'actions'),
      ));
    }
    // Reuse the defined scope variables, see beggining of the method.
    foreach ($columns as $column) {
      $item[] = $$column;
    }

    $rows[] = $item;
  }

  return theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array(
      'class' => array('cmis_browser_browse_children'),
      'data-cmis_view_iframe_name' => $variables['iframe_name'],
    ),
  ));
}

function theme_cmis_extra_search_results($variables) {
  module_load_include('utils.inc', 'cmis_search');
  drupal_add_css(drupal_get_path('module', 'cmis_search') . '/cmis_search.css', array('group' => CSS_THEME, 'weight' => 999));

  $num_per_page = variable_get('cmis_search_num_per_page', 10);

  // Now that we have the total number of results, initialize the pager.
  pager_default_initialize($variables['total'], $num_per_page);

  $output = '';
  if ($variables['rows']) {
    $output .= '<ul class="posts cmisposts">';
    foreach ($variables['rows'] as $child) {
      $filetypearray = (_cmis_search_tidyMime($child["mimetype"]));

      preg_match('/SpacesStore\/(.*)$/', $child['nodeRef'], $res);
      $preview_url = cmis_extra_build_url_target($res[1], $child['mimetype']);
      $target = '';
      if ($preview_url[1] == 'preview') {
        $target = ' target="_blank"';
      }

      $output .= '<li>';
      $output .= '<article class="block-post">';
      $output .= '<a id="' . $child['name'] . '" class="left cmislink" href="' . $preview_url[0] . '"' . $target . '>';
      // TODO: maybe we should replace nodeRef with objectId?
      $output .= '<img width="64" height="64" alt="' . $child['name'] . '" src="/' . drupal_get_path('theme', 'egedal') . '/images/cmis_views/' . $filetypearray['image'] . '" class="alignleft"></a>';
      $title = '';

      if (!empty($child['name'])) {
        $title = $child['name'];
      }
      else {
        $title = $child['title'];
      }
      if (!empty($variables['keys'])) {
        $title = preg_replace('#' . preg_quote($variables['keys']) . '#i', '<em>\\0</em>', $title);
      }
      $output .= '<div class="cmisdetails">';
       // TODO: maybe we should replace nodeRef with objectId?
      $output .= '<strong class="title"><a id="' . $child['name'] . '" class="cmislink" href="' . $preview_url[0] . '"' . $target . '>' . $title . '</a></strong>';

//      $time = cmis_extra_human_time_diff(strtotime($child['modifiedOn']), time());
      $time = date_format_date(new DateObject(strtotime($child['modifiedOn'])));
      $user = l($child['modifiedBy'], 'users/' . $child['modifiedByUser']);

      if (arg(0) != 'search' || (arg(0) == 'search' && arg(1) == 'documents')) {
        $output .= '<div class="modified">' . str_replace(':user', $user, t('Last modified <span class="danish-date-format">:time</span> from <em class="placeholder">:user</em>', array(':time' => $time))) . '</div>';
      }

      //$path = trim(dirname(preg_replace('#(\w+\:\/\/)#', '', $child->properties['alfcmis:nodeRef'])), '/');
      $path = isset($child['path']) ? $child['path'] : '';
      $output .= '<div class="path"> /' . $path . '/</div>';

      if (arg(0) != 'search' || (arg(0) == 'search' && arg(1) == 'documents')) {
        $output .= '<div class="size">' . t('Size: :size', array(':size' => format_size($child['size']))) . '</div>';
      }

      $output .= '</article>';
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  else {
    $output = '<p>' . variable_get('noresultstext') . '</p>';
  }
  $output .= theme('pager');
  return $output;
}

/**
 * Theme handler: Override cmis_browser theme.
 *
 * @see theme_cmis_browser
 */
function theme_cmis_extra_browser($variables) {
  // Render output
  drupal_add_css(drupal_get_path('module', 'cmis_browser') .'/css/cmis_browser.css');
  $contents = '';
  // Excludes cmis browser forms for authenticated only user.
  if ($variables['type'] != 'popup' && !cmis_extra_is_user_authenticated_only()) {
    $contents = drupal_render((drupal_get_form('cmis_browser_browse_form')));
    $contents .= drupal_render((drupal_get_form('cmis_browser_actions_form')));
  }
  $contents .= theme('cmis_browser_browse_breadcrumb', array('bcarray' => $variables['bcarray']));
  $contents .= theme('cmis_browser_browse_children', array('context' => $variables['children']));

  return $contents;
}
