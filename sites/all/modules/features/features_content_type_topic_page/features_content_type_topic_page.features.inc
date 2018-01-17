<?php
/**
 * @file
 * features_content_type_topic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_topic_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_topic_page_node_info() {
  $items = array(
    'topic_page' => array(
      'name' => t('Topic page'),
      'base' => 'node_content',
      'description' => t('Use <em>Topic page</em> to create content for a topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
