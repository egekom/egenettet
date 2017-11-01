<?php
/**
 * @file
 * features_content_type_agreements.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_agreements_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agreements|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agreements';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_qa',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_qa' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|agreements|full'] = $ds_layout;

  return $export;
}
