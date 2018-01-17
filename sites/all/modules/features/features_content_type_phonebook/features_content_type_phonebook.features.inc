<?php
/**
 * @file
 * features_content_type_phonebook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_phonebook_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_phonebook_node_info() {
  $items = array(
    'phonebook' => array(
      'name' => t('Telefonbog'),
      'base' => 'node_content',
      'description' => t('Telefonbog data manuelt oprettet eller importeret fra eksterne XML-fil eller feeds.'),
      'has_title' => '1',
      'title_label' => t('Fuldt navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
