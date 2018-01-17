<?php
/**
 * @file
 * features_phonebook_work_place_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function features_phonebook_work_place_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_to_phonebook_work_place_tax_import-country_code-rewrite';
  $feeds_tamper->importer = 'csv_to_phonebook_work_place_tax_import';
  $feeds_tamper->source = 'country_code';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'DK',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['csv_to_phonebook_work_place_tax_import-country_code-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_to_phonebook_work_place_tax_import-telefon-php';
  $feeds_tamper->importer = 'csv_to_phonebook_work_place_tax_import';
  $feeds_tamper->source = 'Telefon';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return str_replace(\' \', \'\', $field);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['csv_to_phonebook_work_place_tax_import-telefon-php'] = $feeds_tamper;

  return $export;
}
