<?php
/**
 * @file
 * features_content_type_feed_item.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_feed_item_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|feed_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'feed_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_link',
        1 => 'field_feed_item_description',
        2 => 'field_category',
      ),
    ),
    'fields' => array(
      'field_link' => 'ds_content',
      'field_feed_item_description' => 'ds_content',
      'field_category' => 'ds_content',
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
  $export['node|feed_item|default'] = $ds_layout;

  return $export;
}
