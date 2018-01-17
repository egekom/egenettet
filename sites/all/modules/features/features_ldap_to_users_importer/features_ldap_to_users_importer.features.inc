<?php
/**
 * @file
 * features_ldap_to_users_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ldap_to_users_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "ldap_query" && $api == "ldap_query") {
    return array("version" => "1");
  }
}
