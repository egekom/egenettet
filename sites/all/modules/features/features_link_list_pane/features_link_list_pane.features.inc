<?php
/**
 * @file
 * features_link_list_pane.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_link_list_pane_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
