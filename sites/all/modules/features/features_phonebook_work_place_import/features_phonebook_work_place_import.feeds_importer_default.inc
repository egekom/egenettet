<?php
/**
 * @file
 * features_phonebook_work_place_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function features_phonebook_work_place_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_to_phonebook_work_place_tax_import';
  $feeds_importer->config = array(
    'name' => 'CSV to Phonebook - Work place tax import',
    'description' => 'Imports terms into the \'Phonebook - Work place\' vacabulary.',
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
            'source' => 'Vejadresse',
            'target' => 'field_phonebook_tax_address:thoroughfare',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Postnummer',
            'target' => 'field_phonebook_tax_address:postal_code',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Bynavn',
            'target' => 'field_phonebook_tax_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Aabningstid',
            'target' => 'field_phonebook_tax_openinghours',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Telefon',
            'target' => 'field_phonebook_tax_phone_number',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Faellespostkasse',
            'target' => 'field_phonebook_tax_email',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Web',
            'target' => 'field_phonebook_tax_web',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Url',
            'target' => 'field_phonebook_tax_url:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'country_code',
            'target' => 'field_phonebook_tax_address:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phonebook_work_place',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_to_phonebook_work_place_tax_import'] = $feeds_importer;

  return $export;
}
