<?php
/**
 * @file
 * features_content_type_short_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_short_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_short_event_node_info() {
  $items = array(
    'short_event' => array(
      'name' => t('Local event'),
      'base' => 'node_content',
      'description' => t('Short event with title and body.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
