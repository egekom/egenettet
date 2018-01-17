<?php
/**
 * @file
 * features_content_type_short_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_short_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
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
function features_content_type_short_news_node_info() {
  $items = array(
    'short_news' => array(
      'name' => t('Bullitin board'),
      'base' => 'node_content',
      'description' => t('Short news articles with title and body.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
