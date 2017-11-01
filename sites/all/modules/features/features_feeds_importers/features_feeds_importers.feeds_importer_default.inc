<?php
/**
 * @file
 * features_feeds_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function features_feeds_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_to_taxonomy_import';
  $feeds_importer->config = array(
    'name' => 'CSV to taxonomy import',
    'description' => '',
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
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'roskilde_roads',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_to_taxonomy_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feed';
  $feeds_importer->config = array(
    'name' => 'Feed',
    'description' => 'Import RSS or Atom feeds, create nodes from feed items.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'feed_item',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_feed_item_description',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'parent:taxonomy:feed_category',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'title',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'url',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => 0,
        'authorize' => TRUE,
        'update_non_existent' => 'skip',
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => 'feed',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ldap_to_department_taxonomy';
  $feeds_importer->config = array(
    'name' => 'LDAP to department taxonomy',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsLdapQueryFetcher',
      'config' => array(
        'query_ids' => array(
          'departments' => 'departments',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsLdapEntryParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'DISTINGUISHEDNAME',
            'target' => 'tid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phonebook_departments',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ldap_to_department_taxonomy'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'roskilde_phonebook_migration';
  $feeds_importer->config = array(
    'name' => 'Phonebook migration',
    'description' => 'Importer that will make the one time migration of old data',
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
      'plugin_key' => 'PhoneBookProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '0',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'AD_Brugernavn',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Stamkort_ID',
            'target' => 'field_phonebook_contact_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'AD_Fornavn',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'AD_Efternavn',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'AD_Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Arbejdsopgaver',
            'target' => 'field_work_assignments',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Telefonnummer',
            'target' => 'field_phone_number',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'LokalTelefonnummer',
            'target' => 'field_local_phone_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'MobilTelefonnummer',
            'target' => 'field_mobile_number',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Stillingsbetegnelse',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Etage',
            'target' => 'field_floor',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Lokalenummer',
            'target' => 'field_room_number',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Skrivebord_ID',
            'target' => 'field_desk_id',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Arbejdstid',
            'target' => 'field_work_time',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Foedselsdag',
            'target' => 'field_birthday:end',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Kompetencer',
            'target' => 'field_competences',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'AD_Center_ID',
            'target' => 'field_unit',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          17 => array(
            'source' => 'Afdeling_Card_ID',
            'target' => 'field_department',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          18 => array(
            'source' => 'Arbejdssted_Card_ID',
            'target' => 'field_work_place',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          19 => array(
            'source' => 'Phonebook_Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phonebook',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['roskilde_phonebook_migration'] = $feeds_importer;

  return $export;
}
