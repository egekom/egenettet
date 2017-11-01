<?php
/**
 * @file
 * features_content_type_link_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_link_list_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_link_list_node_info() {
  $items = array(
    'link_list' => array(
      'name' => t('Link liste'),
      'base' => 'node_content',
      'description' => t('En liste af links bruges på panel sider'),
      'has_title' => '1',
      'title_label' => t('Administrationstitel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
