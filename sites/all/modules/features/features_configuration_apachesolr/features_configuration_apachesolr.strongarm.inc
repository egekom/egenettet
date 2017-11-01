<?php
/**
 * @file
 * features_configuration_apachesolr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_configuration_apachesolr_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_counts';
  $strongarm->value = 0;
  $export['apachesolr_autocomplete_counts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_keywords';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_keywords'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_spellcheck';
  $strongarm->value = 0;
  $export['apachesolr_autocomplete_suggest_spellcheck'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_widget';
  $strongarm->value = 'custom';
  $export['apachesolr_autocomplete_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'node' => 'node',
    'file_entity' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  return $export;
}
