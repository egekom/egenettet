<?php
/**
 * @file
 * features_content_type_agreements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_agreements_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_agreements_node_info() {
  $items = array(
    'agreements' => array(
      'name' => t('Aftaler'),
      'base' => 'node_content',
      'description' => t('Cloned FAQ content type.'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
