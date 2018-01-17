<?php
/**
 * @file
 * features_content_type_html_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_html_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_html_block_node_info() {
  $items = array(
    'html_block' => array(
      'name' => t('HTML block'),
      'base' => 'node_content',
      'description' => t('A simple tekst field, where Roskilde can type any information'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
