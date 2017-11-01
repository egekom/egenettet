<?php
/**
 * @file
 * feature_mini_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_mini_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
