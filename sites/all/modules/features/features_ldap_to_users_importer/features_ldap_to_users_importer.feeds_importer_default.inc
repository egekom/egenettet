<?php
/**
 * @file
 * features_ldap_to_users_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function features_ldap_to_users_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ldap_data_to_phonebook';
  $feeds_importer->config = array(
    'name' => 'LDAP Data to phonebook',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsLdapQueryFetcher',
      'config' => array(
        'query_ids' => array(
          'import_phonebook_A' => 'import_phonebook_A',
          'import_phonebook_B' => 'import_phonebook_B',
          'import_phonebook_C' => 'import_phonebook_C',
          'import_phonebook_D' => 'import_phonebook_D',
          'import_phonebook_E' => 'import_phonebook_E',
          'import_phonebook_F' => 'import_phonebook_F',
          'import_phonebook_G' => 'import_phonebook_G',
          'import_phonebook_H' => 'import_phonebook_H',
          'import_phonebook_I' => 'import_phonebook_I',
          'import_phonebook_J' => 'import_phonebook_J',
          'import_phonebook_K' => 'import_phonebook_K',
          'import_phonebook_L' => 'import_phonebook_L',
          'import_phonebook_M' => 'import_phonebook_M',
          'import_phonebook_N' => 'import_phonebook_N',
          'import_phonebook_O' => 'import_phonebook_O',
          'import_phonebook_P' => 'import_phonebook_P',
          'import_phonebook_Q' => 'import_phonebook_Q',
          'import_phonebook_R' => 'import_phonebook_R',
          'import_phonebook_S' => 'import_phonebook_S',
          'import_phonebook_T' => 'import_phonebook_T',
          'import_phonebook_U' => 'import_phonebook_U',
          'import_phonebook_V' => 'import_phonebook_V',
          'import_phonebook_W' => 'import_phonebook_W',
          'import_phonebook_X' => 'import_phonebook_X',
          'import_phonebook_Y' => 'import_phonebook_Y',
          'import_phonebook_Z' => 'import_phonebook_Z',
          'import_phonebook_Å' => 'import_phonebook_Å',
          'import_phonebook_Æ' => 'import_phonebook_Æ',
          'import_phonebook_Ø' => 'import_phonebook_Ø',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsLdapEntryParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'samaccountname',
            'target' => 'field_phonebook:phonebook:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'samaccountname',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'cn',
            'target' => 'field_phonebook:phonebook:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'givenname',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_first_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'sn',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_last_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'mail',
            'target' => 'field_phonebook:phonebook:email_feeds_set_target:field_email',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'co',
            'target' => 'field_phonebook:phonebook:taxonomy_feeds_set_target:field_unit',
            'term_search' => '1',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'distinguishedname',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_organizational_unit',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ldap_data_to_phonebook'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ldap_data_to_user_fields';
  $feeds_importer->config = array(
    'name' => 'LDAP Data to User Fields',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsLdapQueryFetcher',
      'config' => array(
        'query_ids' => array(
          'import_users_D' => 'import_users_D',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsLdapEntryParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'samaccountname',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'cn',
            'target' => 'field_phonebook:phonebook:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_additional_information',
            'format' => 'full_html',
          ),
          4 => array(
            'source' => 'givenname',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_first_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'sn',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_last_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'mail',
            'target' => 'field_phonebook:phonebook:email_feeds_set_target:field_email',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'telephonenumber',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_phone_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'streetaddress',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_address_road',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'wwwhomepage',
            'target' => 'field_phonebook:phonebook:link_feeds_set_target:field_link:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'postalcode',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_address_zip_code',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'mobile',
            'target' => 'field_phonebook:phonebook:text_feeds_set_target:field_mobile_number',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'samaccountname',
            'target' => 'field_phonebook:phonebook:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'update_non_existent' => 'skip',
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ldap_data_to_user_fields'] = $feeds_importer;

  return $export;
}
