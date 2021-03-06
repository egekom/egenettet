<?php
/**
 * @file
 * features_content_type_banner_element.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_banner_element_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_banner_element_node_info() {
  $items = array(
    'banner_element' => array(
      'name' => t('Banner element'),
      'base' => 'node_content',
      'description' => t('Image banners are used to promote content on panelized pages.'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
