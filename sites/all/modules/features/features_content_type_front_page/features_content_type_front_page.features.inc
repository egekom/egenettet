<?php
/**
 * @file
 * features_content_type_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_front_page_node_info() {
  $items = array(
    'front_page' => array(
      'name' => t('Front page'),
      'base' => 'node_content',
      'description' => t('The <em>Front page</em> is used as first entry on the intranet, but can also be used as a front page for a department. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
