<?php
/**
 * @file
 * features_user_fields.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function features_user_fields_default_cer() {
  $items = array();
  $items['node:phonebook:field_user*user:user:field_phonebook'] = entity_import('cer', '{
    "identifier" : "node:phonebook:field_user*user:user:field_phonebook",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:phonebook:field_user" } ] },
    "cer_right" : { "und" : [ { "path" : "user:user:field_phonebook" } ] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function features_user_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
