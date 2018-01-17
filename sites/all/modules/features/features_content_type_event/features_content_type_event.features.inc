<?php
/**
 * @file
 * features_content_type_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function features_content_type_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Editorial event'),
      'base' => 'node_content',
      'description' => t('Advanced content type for editorial events. The events can contain image, bannerlinks FAQ etc. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
