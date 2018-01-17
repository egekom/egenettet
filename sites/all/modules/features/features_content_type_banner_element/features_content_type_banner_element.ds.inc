<?php
/**
 * @file
 * features_content_type_banner_element.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_banner_element_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner_element|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner_element';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'title',
        2 => 'field_link',
        3 => 'field_image',
        4 => 'field_color',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'title' => 'ds_content',
      'field_link' => 'ds_content',
      'field_image' => 'ds_content',
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
    'layout_link_custom' => '',
  );
  $export['node|banner_element|teaser'] = $ds_layout;

  return $export;
}
