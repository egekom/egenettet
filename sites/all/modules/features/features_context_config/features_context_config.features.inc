<?php
/**
 * @file
 * features_context_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_context_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
