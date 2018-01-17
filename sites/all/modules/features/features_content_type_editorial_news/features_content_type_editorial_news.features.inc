<?php
/**
 * @file
 * features_content_type_editorial_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_editorial_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function features_content_type_editorial_news_node_info() {
  $items = array(
    'editorial_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Avanceret indholdstype til redaktionelle nyhedsartikler'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
