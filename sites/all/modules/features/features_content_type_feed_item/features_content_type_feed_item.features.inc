<?php
/**
 * @file
 * features_content_type_feed_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_feed_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_feed_item_node_info() {
  $items = array(
    'feed_item' => array(
      'name' => t('Feed indhold'),
      'base' => 'node_content',
      'description' => t('Denne indholdstype anvendes til automatisk oprettelse af indhold fra feeds.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
