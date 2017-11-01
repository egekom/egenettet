<?php
/**
 * @file
 * features_phonebook_department_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function features_phonebook_department_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_to_phonebook_department_tax_import-center-copy';
  $feeds_tamper->importer = 'csv_to_phonebook_department_tax_import';
  $feeds_tamper->source = 'Center';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'center_id',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['csv_to_phonebook_department_tax_import-center-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_to_phonebook_department_tax_import-center-php';
  $feeds_tamper->importer = 'csv_to_phonebook_department_tax_import';
  $feeds_tamper->source = 'Center';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if (function_exists(\'__feeds_import_taxonomy_term_id_by_term_field\') && is_callable(\'__feeds_import_taxonomy_term_id_by_term_field\')) {
  $terms = __feeds_import_taxonomy_term_id_by_term_field(\'organisational_unit\', \'field_phonebook_tax_center_id\', $field);
  return !empty($terms) ? array_shift($terms) : NULL;
}
return NULL;',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['csv_to_phonebook_department_tax_import-center-php'] = $feeds_tamper;

  return $export;
}
