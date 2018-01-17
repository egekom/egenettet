<?php
/**
 * @file
 * features_content_type_warning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_warning_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_warning_node_info() {
  $items = array(
    'warning' => array(
      'name' => t('Warning'),
      'base' => 'node_content',
      'description' => t('Used for adding a warning / emergency message on the frontpage.'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
