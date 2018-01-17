<?php
/**
 * @file
 * features_content_type_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_webform_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webformular'),
      'base' => 'node_content',
      'description' => t('Opret en ny formular eller et nyt spørgeskema. Resultater og statistik gemmes og er tilgængelige for priviligerede brugere.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
