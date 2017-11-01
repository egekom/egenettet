<?php
/**
 * @file
 * features_content_type_unit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_unit_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_unit_node_info() {
  $items = array(
    'unit' => array(
      'name' => t('Organisatorisk Enhed'),
      'base' => 'node_content',
      'description' => t('Bruges som enhedsside'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
