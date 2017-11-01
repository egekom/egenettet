<?php
/**
 * @file
 * features_content_type_personal_note.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_personal_note_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_personal_note_node_info() {
  $items = array(
    'personal_note' => array(
      'name' => t('Personal note'),
      'base' => 'node_content',
      'description' => t('Personal note can be used to write a personal note on your page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
