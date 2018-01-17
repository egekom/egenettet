<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  STARTERKIT_preprocess_html($variables, $hook);
  STARTERKIT_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function egedal_preprocess_page(&$variables, $hook) {
    /* Create theme suggestions for 403 and 404 errors
    Values returned: '403 Forbidden' or '404 Not Found' */
    $status = drupal_get_http_header("status");
    if ($status == '404 Not Found') {
      $variables['theme_hook_suggestions'][] = 'page__404';
    }
    if ($status == '403 Forbidden') {
      $variables['theme_hook_suggestions'][] = 'page__403';
    }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function egedal_preprocess_node(&$variables, $hook) {
  if( $variables['type'] == 'banner_element'
      && ( empty($variables['field_image'])) ){
      $variables['classes_array'][] = 'banner-link';
  } else if($variables['type'] == 'banner_element') {
      $variables['classes_array'][] = 'banner-element';
  }

  if( $variables['type'] == 'link_list'){
    $variables['attributes_array']['id'][] = 'link-list-' . $variables['nid'];
  }

  /* Adding class for recognizing the different colors in Front End */
  $color = "";
  if($variables['type'] == 'link_list' || $variables['type'] == 'banner_element'){
    $color = $variables['elements']['#node']->field_color['und']['0']['rgb'];
    if( $color == '#5c94b9' ||
        $color == '#d01c60' ) {
      $variables['classes_array'][] = 'color-box';
    }
    if( $color == '#333333' ) {
      $variables['classes_array'][] = 'dark-box';
    }

  }
}


/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */
function egedal_preprocess_cmis_views_detail(&$variables) {
  global $base_url;

  foreach($variables['rows'] as $row) {

    $path_info = pathinfo($filetypeImg = $row->properties['cmis:filetypeimg']);
    $new_icon_url = $base_url . '/sites/all/themes/egedal/images/cmis_views/' . $path_info['basename'];

    $row->properties['cmis:link-image'] = str_replace($row->properties['cmis:filetypeimg'],$new_icon_url , $row->properties['cmis:link-image']);
    $row->properties['cmis:filetypeimg'] = $new_icon_url;
  }
}

function egedal_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $dev = ' ';

  //if (!empty($breadcrumb)) {
  if (count($breadcrumb) > 0) {
    $output = '<nav role="navigation" class="breadcrumb">';
    $output .= '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<ol class="awesome-class"><li>' . implode($dev, $breadcrumb) . '</li></ol>';
    $output .= '</nav>';
    return $output;
  }
  else {
    return t("Home");
  }
}

function egedal_select($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select'));

  if ($element['#multiple']) {
    return '<div class="multiple select-wrapper"><select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select></div>';
  } else {
    return '<div class="select-wrapper"><select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select></div>';
  }

}


function egedal_checkbox($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'checkbox';
  element_set_attributes($element, array('id', 'name', '#return_value' => 'value'));

  // Unchecked checkbox has #value of integer 0.
  if (!empty($element['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }
  _form_set_class($element, array('form-checkbox'));

  return '<div class="checkbox-wrapper"><input' . drupal_attributes($element['#attributes']) . ' /><label for="' . (isset($element['#id']) ? $element['#id'] : '') . '"></label></div>';
}

function egedal_table($variables) {
  $header = $variables['header'];
  $rows = $variables['rows'];
  $attributes = $variables['attributes'];
  $caption = $variables['caption'];
  $colgroups = $variables['colgroups'];
  $sticky = $variables['sticky'];
  $empty = $variables['empty'];

  // Add sticky headers, if applicable.
  if (count($header) && $sticky) {
    drupal_add_js('misc/tableheader.js');
    // Add 'sticky-enabled' class to the table to identify it for JS.
    // This is needed to target tables constructed by this function.
    $attributes['class'][] = 'sticky-enabled';
  }

  $output = '<table' . drupal_attributes($attributes) . ">\n";

  if (isset($caption)) {
    $output .= '<caption>' . $caption . "</caption>\n";
  }

  // Format the table columns:
  if (count($colgroups)) {
    foreach ($colgroups as $number => $colgroup) {
      $attributes = array();

      // Check if we're dealing with a simple or complex column
      if (isset($colgroup['data'])) {
        foreach ($colgroup as $key => $value) {
          if ($key == 'data') {
            $cols = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $cols = $colgroup;
      }

      // Build colgroup
      if (is_array($cols) && count($cols)) {
        $output .= ' <colgroup' . drupal_attributes($attributes) . '>';
        $i = 0;
        foreach ($cols as $col) {
          $output .= ' <col' . drupal_attributes($col) . ' />';
        }
        $output .= " </colgroup>\n";
      }
      else {
        $output .= ' <colgroup' . drupal_attributes($attributes) . " />\n";
      }
    }
  }

  // Add the 'empty' row message if available.
  if (!count($rows) && $empty) {
    $header_count = 0;
    foreach ($header as $header_cell) {
      if (is_array($header_cell)) {
        $header_count += isset($header_cell['colspan']) ? $header_cell['colspan'] : 1;
      }
      else {
        $header_count++;
      }
    }
    $rows[] = array(array('data' => $empty, 'colspan' => $header_count, 'class' => array('empty', 'message')));
  }

  // Format the table header:
  if (count($header)) {
    $ts = tablesort_init($header);
    // HTML requires that the thead tag has tr tags in it followed by tbody
    // tags. Using ternary operator to check and see if we have any rows.
    $output .= (count($rows) ? ' <thead><tr>' : ' <tr>');
    foreach ($header as $cell) {
      $cell = tablesort_header($cell, $header, $ts);
      $output .= _theme_table_cell($cell, TRUE);
    }
    // Using ternary operator to close the tags based on whether or not there are rows
    $output .= (count($rows) ? " </tr></thead>\n" : "</tr>\n");
  }
  else {
    $ts = array();
  }

  // Format the table rows:
  if (count($rows)) {
    $output .= "<tbody>\n";
    $flip = array('even' => 'odd', 'odd' => 'even');
    $class = 'even';
    foreach ($rows as $number => $row) {
      // Check if we're dealing with a simple or complex row
      if (isset($row['data'])) {
        $cells = $row['data'];
        $no_striping = isset($row['no_striping']) ? $row['no_striping'] : FALSE;

        // Set the attributes array and exclude 'data' and 'no_striping'.
        $attributes = $row;
        unset($attributes['data']);
        unset($attributes['no_striping']);
      }
      else {
        $cells = $row;
        $attributes = array();
        $no_striping = FALSE;
      }
      if (count($cells)) {
        // Add odd/even class
        if (!$no_striping) {
          $class = $flip[$class];
          $attributes['class'][] = $class;
        }

        // Build row
        $output .= ' <tr' . drupal_attributes($attributes) . '>';
        $i = 0;
        foreach ($cells as $cell) {
          $cell = tablesort_cell($cell, $header, $ts, $i++);
          $output .= _theme_table_cell($cell);
        }
        $output .= " </tr>\n";
      }
    }
    $output .= "</tbody>\n";
  }

  $output .= "</table>\n";
  return '<div class="table-wrapper">' . $output . '</div>';
}

/**
 * Implements theme_menu_tree().
 */
function egedal_menu_tree__user_dashboard_menu($variables) {
  return '<ul class="menu user-dashboard-secondary-menu">' . $variables['tree'] . '</ul>';
}

/**
 * Override theme function for hook_apachesolr_sort_link().
 *
 * @param $vars
 *
 * @return string
 *
 * @throws \Exception
 */
function egedal_apachesolr_sort_link($vars) {
  $icon = '';
  if ($vars['direction']) {
    $icon = ' ' . theme('tablesort_indicator', array('style' => $vars['direction']));
    $vars['options']['html'] = TRUE;
  }
  if ($vars['active']) {
    if (isset($vars['options']['attributes']['class'])) {
      $vars['options']['attributes']['class'] .= ' active';
    }
    else {
      $vars['options']['attributes']['class'] = 'active';
    }
  }
  return apachesolr_l($vars['text'] . $icon, $vars['path'], $vars['options']);
}

/**
 * Returns HTML for a sort icon.
 *
 * @param $variables
 *   An associative array containing:
 *   - style: Set to either 'asc' or 'desc', this determines which icon to
 *     show.
 * @return string
 */
function egedal_tablesort_indicator($variables) {
  if ($variables['style'] == "asc") {
    return theme('image', array('path' => drupal_get_path('theme', 'egedal') . '/images/arrow-asc.png', 'width' => 13, 'height' => 13, 'alt' => t('sort ascending'), 'title' => t('sort ascending')));
  }
  elseif ($variables['style'] == 'desc') {
    return theme('image', array('path' => drupal_get_path('theme', 'egedal') . '/images/arrow-desc.png', 'width' => 13, 'height' => 13, 'alt' => t('sort descending'), 'title' => t('sort descending')));
  }
  elseif ($variables['style'] == 'ascdesc') {
    return theme('image', array('path' => drupal_get_path('theme', 'egedal') . '/images/arrow-ascdesc.png', 'width' => 13, 'height' => 13, 'alt' => t('sort descending'), 'title' => t('sort descending')));
  }
}

/**
 * Output a form element in plain text format.
 *
 * @see theme_webform_element_text()
 */
function egedal_webform_element_text($variables) {
  $element = $variables['element'];
  $value = $variables['element']['#children'];

  $output = '';
  $is_group = webform_component_feature($element['#webform_component']['type'], 'group');

  // Output the element title.
  if (isset($element['#title'])) {
    if ($is_group) {
      $output .= '==' . $element['#title'] . '==' . "\n\n";
    }
    elseif (!in_array(drupal_substr($element['#title'], -1), array('?', ':', '!', '%', ';', '@'))) {
      $output .= $element['#title'] . ':' . "\n";
    }
    else {
      $output .= $element['#title'] . "\n";
    }
  }

  // Wrap long values at 65 characters, allowing for a few fieldset indents.
  // It's common courtesy to wrap at 75 characters in e-mails.
  if ($is_group && drupal_strlen($value) > 65) {
    $value = wordwrap($value, 65, "\n");
    $lines = explode("\n", $value);
    foreach ($lines as $key => $line) {
      $lines[$key] = '  ' . $line;
    }
    $value = implode("\n", $lines);
  }

  // Add the value to the output. Add a newline before the response if needed.
  $output .= (strpos($value, "\n") === FALSE ? ' ' : "\n") . $value;

  // Indent fieldsets.
  if ($is_group) {
    $lines = explode("\n", $output);
    foreach ($lines as $number => $line) {
      if (strlen($line)) {
        $lines[$number] = '  ' . $line;
      }
    }
    $output = implode("\n\n", $lines);
    $output .= "\n";
  }

  if ($output) {
    $output .= "\n\n";
  }

  return $output;
}

/**
 * Format the text output data for this component.
 *
 * @see theme_webform_display_pagebreak()
 */
function egedal_webform_display_pagebreak($variables) {
  $element = $variables['element'];

  return $element['#format'] == 'html' ? '<h2 class="webform-page">' . check_plain($element['#title']) . '</h2>' : "\n==" . $element['#title'] . "==\n";
}

/**
 * Implements preprocess_panels_pane().
 */
function egedal_preprocess_panels_pane(&$vars){
  if ($vars['pane']->subtype == "node_comment_form") {
    $new_title = '<span class="egedal-node-comment-count">';
    $new_title .= count(comment_get_thread($vars['content']['#node'], COMMENT_MODE_THREADED, 99999));
    $new_title .= '</span>';
    $new_title .= $vars['title'];
    $vars['title'] = $new_title;
  }


  if($vars['content']['#field_name'] == 'field_related_faq') {
    $vars['title'] = '<span class="pane-title-inner">'.$vars['title'].'</span>';
  }

  if($vars['content']['#field_name'] == 'field_related_agreements') {
    $vars['title'] = '<span class="pane-title-inner">'.$vars['title'].'</span>';
  }
  // EG-45 - looks like leftover from the roskilde template. Removed by FE suggestion.
  //  if ($variables['type'] == 'story') {
  //    $variables['content']['field_story_page_title'][0]['#prefix'] = '<a href="' . url('node/' . $variables['node']->nid) . '">';
  //    $variables['content']['field_story_page_title'][0]['#suffix'] = '</a>';
  //  }

  if(isset($vars['content']['cmis_browser2_treeview'] )){
    // Adding a scrollbar lib only for CMIS treeview
    drupal_add_js(path_to_theme() . '/js/jquery.mCustomScrollbar.concat.min.js');
    drupal_add_css(path_to_theme() . '/css/components/jquery.mCustomScrollbar.css');
  }

  if ( isset($vars['pane']) &&
       $vars['pane']->type == 'node_title' &&
        $vars['display']->context['panelizer']->restrictions['type']['0'] != 'topic_frontpage') {
    if(isset($vars['display']->context['panelizer'])){
      $node_nid = $vars['display']->context['panelizer']->data->nid;
    } else {
      $node_nid = $vars['display']->context['argument_entity_id:node_1']->data->nid;
    }

    // Adding a bookmark link next to the title
    $bookmark_link =  flag_create_link('bookmarks', $node_nid);
    $new_title = $vars['content'] . $bookmark_link;
    $vars['content'] = $new_title;
  }
}

/**
 * Returns HTML for a date element formatted as a single date (overridden).
 *
 * @see theme_date_display_single().
 */
function egedal_date_display_single($variables) {
  $date = $variables['date'];
  $timezone = $variables['timezone'];
  $attributes = $variables['attributes'];

  // Wrap the result with the attributes.
  if (isset($variables['dates']['value']['#danish_date'])) {
    list($start_hour, $end_hour) = _egedal_get_date_time($variables['dates']);
    $output = '<span class="date-display-single danish-date-format"' . drupal_attributes($attributes) . '>' . $date . $timezone;
    if (!empty($start_hour) && !empty($end_hour)) {
      $output .= ' ' . substr($start_hour, 0, 5) . '-' . substr($end_hour, 0, 5);
    }
    $output .= '</span>';
  }
  else {
    $output = '<span class="date-display-single"' . drupal_attributes($attributes) . '>' . $date . $timezone . '</span>';
  }

  if (!empty($variables['add_microdata'])) {
    $output .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
  }

  return $output;
}

/**
 * Returns HTML for a date element formatted as a range (overridden).
 *
 * @see theme_date_display_range().
 */
function egedal_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  if (isset($variables['dates']['value']['#danish_date'])) {
    list($start_hour, $end_hour) = _egedal_get_date_time($variables['dates']);
    $start_date = '<span class="date-display-start  danish-date-format"' . drupal_attributes($attributes_start) . '>' . $date1;
    if (!empty($start_hour)) {
      $start_date .= ' ' . substr($start_hour, 0, 5);
    }
    $start_date .= '</span>';
    $end_date = '<span class="date-display-end  danish-date-format"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone;
    if (!empty($end_hour)) {
      $end_date .= ' ' . substr($end_hour, 0, 5);
    }
    $end_date .= '</span>';
  }
  else {
    $start_date = '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>';
    $end_date = '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>';
  }

  // If microdata attributes for the start date property have been passed in,
  // add the microdata in meta tags.
  if (!empty($variables['add_microdata'])) {
    $start_date .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
    $end_date .= '<meta' . drupal_attributes($variables['microdata']['value2']['#attributes']) . '/>';
  }

  // Wrap the result with the attributes.
  return t('!start-date to !end-date', array(
    '!start-date' => $start_date,
    '!end-date' => $end_date,
  ));
}

function _egedal_get_date_time($dates) {
    if (isset($dates['value']['#time_exclude'])) {
      return array(NULL, NULL);
    }

    $date_time = explode(' ', $dates['value']['db']['object']);
    array_shift($date_time);
    $start_hour = !empty($date_time) ? array_shift($date_time) : '';
    $date_time = explode(' ', $dates['value2']['db']['object']);
    array_shift($date_time);
    $end_hour = !empty($date_time) ? array_shift($date_time) : '';

    return array(trim($start_hour), trim($end_hour));
}

function egedal_date_popup_process_alter(&$element, &$form_state, $context) {
  if($element['#name'] == 'start' && isset($element['time'])){
    $element['time']['#attributes']['placeholder'] = '12:00';
  } else {
    $element['time']['#attributes']['placeholder'] = '13:00';
  }
}

function egedal_preprocess_homebox(&$vars){
  if(isset($vars['page']->settings['blocks']['homebox_custom'])) {
    drupal_add_js(path_to_theme() . '/js/jquery.mCustomScrollbar.concat.min.js');
    drupal_add_css(path_to_theme() . '/css/components/jquery.mCustomScrollbar.css');
  }
}


