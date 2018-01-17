<?php
/**
 * @file
 * feature_content_type_promoted_search_results.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_content_type_promoted_search_results_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_content_type_promoted_search_results_node_info() {
  $items = array(
    'promoted_search_results' => array(
      'name' => t('Promoted search results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
