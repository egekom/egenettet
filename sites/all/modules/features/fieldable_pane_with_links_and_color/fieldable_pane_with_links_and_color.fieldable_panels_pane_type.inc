<?php
/**
 * @file
 * fieldable_pane_with_links_and_color.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function fieldable_pane_with_links_and_color_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'banner_link_element';
  $fieldable_panels_pane_type->title = 'Banner link';
  $fieldable_panels_pane_type->description = '';
  $export['banner_link_element'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'custom_block_with_links_and_color';
  $fieldable_panels_pane_type->title = 'Custom block with text/links and color';
  $fieldable_panels_pane_type->description = '';
  $export['custom_block_with_links_and_color'] = $fieldable_panels_pane_type;

  return $export;
}
