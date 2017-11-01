<?php
/**
 * @file
 * features_content_type_topic_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_topic_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_topic_frontpage_node_info() {
  $items = array(
    'topic_frontpage' => array(
      'name' => t('Topic frontpage'),
      'base' => 'node_content',
      'description' => t('Use <em>Topic frontpage</em> to create a topic area. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
