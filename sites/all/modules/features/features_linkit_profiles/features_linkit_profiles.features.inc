<?php
/**
 * @file
 * features_linkit_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_linkit_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
