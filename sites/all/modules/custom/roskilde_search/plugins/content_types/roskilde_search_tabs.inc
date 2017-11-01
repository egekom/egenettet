<?php
/**
 * @file
 * Imitate facets for Alfresco search
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Roskilde search pages tabs'),
  'description' => t(''),
  'category' => t('Menus'),
  'edit form' => 'roskilde_search_pages_tabs_settings',
  'render callback' => 'roskilde_search_pages_tabs_render',
  'defaults' => array(
    'transport_search_query' => TRUE,
    'show_counters' => FALSE,
  ),
  'all contexts' => TRUE,
);


/**
 * An edit form for the pane's settings.
 */
function roskilde_search_pages_tabs_settings($form, &$form_state) {

  $form['transport_search_query'] = array(
    '#title' => t('Transport search query'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['transport_search_query'],
  );

  $form['show_counters'] = array(
    '#title' => t('Show counts'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['show_counters'],
  );

  return $form;
}

/**
 * Submit handler for roskilde_search_pages_tabs_settings.
 */
function roskilde_search_pages_tabs_settings_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}

/**
 * Render tabs
 */
function roskilde_search_pages_tabs_render($subtype, $conf, $args, $contexts) {

  $block = new stdClass();
  $block->title = (empty($conf['override_title']) ? NULL : $conf['override_title_text']);
  $content = '';

  // Add required JavaScript and Stylesheet.
  drupal_add_library('field_group', 'horizontal-tabs');

  $menu_items_tree = menu_tree_all_data('menu-search-pages', NULL, 1);
  foreach ($menu_items_tree as $key => $data) {
    if (!empty($data['link']['hidden']) || empty($data['link']['href'])) {
      unset($menu_items_tree[$key]);
    }
  }

  $content .= '
  <div class="horizontal-tabs clearfix">
    <ul class="horizontal-tabs-list">';


  // Transporting the search query.
  $query_string = '';
  if (!empty($conf['transport_search_query'])) {
    foreach ($menu_items_tree as $menu_item) {
      if (strpos(current_path(), $menu_item['link']['href']) === 0) {
        $query_string = substr(current_path(), strlen($menu_item['link']['href']));
        break;
      }
    }
    if (!$query_string) {
      $query_string = '';
    }
  }
  $query_string_safe = trim($query_string, '/ ');
  if (!$query_string) {
    $query_string_safe = '*';
  }

  $sub_menu = array();
  $current_menu_item = NULL;
  $i = 0;
  foreach ($menu_items_tree as $menu_item) {
    $current_flag = FALSE;
    $classes = array(
      'horizontal-tab-button',
      'horizontal-tab-button-' . $i++,
    );
    if (strpos(current_path(), $menu_item['link']['href']) === 0) {
      $classes[] = 'selected';
      $current_menu_item = $menu_item;
      $current_flag = TRUE;
    }
    $link_href = $menu_item['link']['href'] . $query_string;
    $title = $menu_item['link']['title'];

    if (!empty($conf['show_counters'])) {
      $count = _roskilde_search_tabs_counters($query_string_safe, $menu_item['link']['link_path'], $current_flag);
      if ($count) {
        $title .= ' (' . $count . ')';
      }
    }

    $content .= '<li class="' . implode(' ', $classes) . '" tabindex="-1">' . l($title, $link_href) . '</li>';
  }

  $content .= '
    </ul>
  </div>';

  $sub_menu_filters = array();
  if ($current_menu_item) {

    if ($current_menu_item['link']['link_path'] == 'search/news') {
      $sub_menu_filters = array(
        array(
          'title' => t('Active'),
          'param' => 'news-type',
          'value' => ''
        ),
        array(
          'title' => t('Archive'),
          'param' => 'news-type',
          'value' => 'archive'
        ),
      );
    }
    elseif ($current_menu_item['link']['link_path'] == 'search/events') {
      $sub_menu_filters = array(
        array(
          'title' => t('Upcomming'),
          'param' => 'events-type',
          'value' => ''
        ),
        array(
          'title' => t('Previous'),
          'param' => 'events-type',
          'value' => 'previous'
        ),
      );
    }

    // Do the subtabs
    $get_params = drupal_get_query_parameters();
    if ($sub_menu_filters) {
      $content .= '<ul class="menu">';
      foreach ($sub_menu_filters as $i => $menu_item) {
        // Keep the menu classes
        $classes = array(
          'leaf',
          'menu__item',
        );
        $link_attributes = array(
          'attributes' => array(
            'class' => array(),
          ),
          'query' => array(
          ),
        );
        if (!empty($menu_item['value'])) {
          $link_attributes['query'][$menu_item['param']] = $menu_item['value'];
        }
        else {
          unset($link_attributes['query'][$menu_item['param']]);
        }
        if (!empty($_GET['f'])) {
          $link_attributes['query']['f'] = $_GET['f'];
        }
        if ((empty($get_params[$menu_item['param']]) && empty($menu_item['value'])) || (!empty($get_params[$menu_item['param']]) && $get_params[$menu_item['param']] == $menu_item['value'])) {
          $classes[] = 'active-trail';
          $link_attributes['attributes']['class'][] = 'active';
        }
        $link_href = $current_menu_item['link']['href'] . $query_string;
        $content .= '<li class="' . implode(' ', $classes) . '">';
        $content .= sprintf('<a href="%s" class="%s">%s</a>', url($link_href, $link_attributes), implode(' ', $link_attributes['attributes']['class']), $menu_item['title']);
        $content .= '</li>';
      }
      $content .= '</ul>';
    }
  }

  $block->content = $content;

  return $block;

}

/**
 * Tab counters
 *
 * @param $keyword
 * @param string $path
 *
 * @return array|int|number
 *
 * @throws \Exception
 */
function _roskilde_search_tabs_counters($keyword, $path = '', $flag = FALSE) {
  static $cache = array();

  if (!$flag && isset($cache[$keyword])) {
    $counts = $cache[$keyword];
  }
  else {

    $params = array(
      'q' => $keyword,
      'group' => 'true',
      'group.ngroups' => 'false',
      'group.field' => 'bundle',
      'group.limit' => 0,
      'group.facet' => 'true',
      'rows' => 20,
      'mm' => ROSKILDE_MIN_SERACH_WORD
    );

    $solr = apachesolr_get_solr();
    $query = apachesolr_drupal_query('search_tabs', $params, NULL, $path, $solr);

    // Add facets if exist.
    if (!empty($_GET['f']) && $flag) {
      $filter = array();
      foreach ($_GET['f'] as $facet) {
        $parse = explode(':', $facet, 2);
        if (!empty($parse[1])) {
          $filter[$parse[0]][] = $parse[1];
        }
      }
      foreach ($filter as $k => $v) {
        $query->addParam('fq', $k . ':(' . implode(' OR ', $v) . ')');
      }
    }

    if ($query->getParam('q')) {
      apachesolr_search_add_spellcheck_params($query);
    }
    apachesolr_search_add_boost_params($query);

    $resp = $query->search();

    $counts = array();
    if ($resp && $resp->grouped) {
      foreach ($resp->grouped->bundle->groups as $bundle) {
        $counts[$bundle->groupValue] = $bundle->doclist->numFound;
      }
    }
    $cmis_info = cmis_extra_search_singleton($keyword);
    $counts['alfresco'] = empty($cmis_info['found']) ? 0 : $cmis_info['found'];

    $cache[$keyword] = $counts;
  }

  if ($path == 'search/news') {
    return array_sum(array_intersect_key($counts, drupal_map_assoc(array('editorial_news', 'short_news'))));
  }
  elseif ($path == 'search/events') {
    return array_sum(array_intersect_key($counts, drupal_map_assoc(array('event', 'short_event'))));
  }
  elseif ($path == 'search/pages') {
    return array_sum(array_intersect_key($counts, drupal_map_assoc(array('article','unit', 'topic_frontpage', 'topic_page'))));
  }
  elseif ($path == 'search/faq') {
    return array_sum(array_intersect_key($counts, drupal_map_assoc(array('faq_qa'))));
  }
  elseif ($path == 'search/agreements') {
    return array_sum(array_intersect_key($counts, drupal_map_assoc(array('agreements'))));
  }
  elseif ($path == 'search/documents') {
    return $counts['alfresco'];
  }
  elseif ($path == 'search/global') {
    $sum_of = array('article', 'editorial_news', 'short_news', 'event', 'short_event', 'subpage', 'unit', 'topic_frontpage', 'topic_page', 'alfresco','promoted_search_results','faq_qa','agreements');
    return array_sum(array_intersect_key($counts, drupal_map_assoc($sum_of)));
  }
  elseif ($path) {
    return 0;
  }

  return $counts;

}
