<?php
/**
 * @file
 * features_banner_link_pane.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function features_banner_link_pane_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'banner_link';
  $fieldable_panels_pane_type->title = 'Action link';
  $fieldable_panels_pane_type->description = '';
  $export['banner_link'] = $fieldable_panels_pane_type;

  return $export;
}
