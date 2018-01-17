<?php
/**
 * @file
 * features_content_type_banner_link.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_banner_link_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner_link|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner_link';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subheader',
        1 => 'field_link',
        2 => 'field_color',
      ),
    ),
    'fields' => array(
      'field_subheader' => 'ds_content',
      'field_link' => 'ds_content',
      'field_color' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '[node:field_link]',
  );
  $export['node|banner_link|full'] = $ds_layout;

  return $export;
}
