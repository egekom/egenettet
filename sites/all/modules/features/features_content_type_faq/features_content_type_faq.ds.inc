<?php
/**
 * @file
 * features_content_type_faq.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_faq_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faq_qa|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faq_qa';
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
  $export['node|faq_qa|full'] = $ds_layout;

  return $export;
}
