<?php
/**
 * @file
 * features_phonebook_department_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function features_phonebook_department_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_to_phonebook_department_tax_import';
  $feeds_importer->config = array(
    'name' => 'CSV to Phonebook - Department tax import',
    'description' => 'Imports terms into the \'Phonebook - Department\' vacabulary.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Card_ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Card_ID',
            'target' => 'field_phonebook_tax_card_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Navn',
            'target' => 'name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Arbejdssted_ID',
            'target' => 'field_phonebook_tax_workplace_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'SD_ID',
            'target' => 'field_phonebook_tax_sd_id',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Center_ID',
            'target' => 'field_phonebook_tax_center_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Leder',
            'target' => 'field_phonebook_tax_manager',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'EAN',
            'target' => 'field_phonebook_tax_ean',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'AfdelingsMail',
            'target' => 'field_phonebook_tax_email',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Center',
            'target' => 'field_phonebook_tax_center',
            'term_search' => '1',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phonebook_department',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_to_phonebook_department_tax_import'] = $feeds_importer;

  return $export;
}
