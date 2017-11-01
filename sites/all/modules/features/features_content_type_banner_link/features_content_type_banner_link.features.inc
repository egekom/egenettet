<?php
/**
 * @file
 * features_content_type_banner_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_banner_link_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_banner_link_node_info() {
  $items = array(
    'banner_link' => array(
      'name' => t('Banner link'),
      'base' => 'node_content',
      'description' => t('Banner links are used to promote content on the site. '),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
