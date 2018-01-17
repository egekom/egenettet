<?php
/**
 * @file
 * features_link_list_pane.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_link_list_pane_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_fieldable_panels_pane_link_list_pane';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_fieldable_panels_pane_link_list_pane'] = $strongarm;

  return $export;
}
