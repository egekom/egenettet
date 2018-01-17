<?php
/**
 * @file
 * features_ldap_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ldap_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ldap_authorization" && $api == "ldap_authorization") {
    return array("version" => "1");
  }
  if ($module == "ldap_query" && $api == "ldap_query") {
    return array("version" => "1");
  }
  if ($module == "ldap_servers" && $api == "ldap_servers") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
