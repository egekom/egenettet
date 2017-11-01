<?php
/**
 * @file
 * features_content_type_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_faq_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_faq_node_info() {
  $items = array(
    'faq_qa' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Use FAQ to create questions and answers. The element can for example be used on subpage.'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
