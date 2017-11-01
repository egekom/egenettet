<?php
/**
 * @file
 * features_feeds_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function features_feeds_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ldap_to_department_taxonomy-distinguishedname-php';
  $feeds_tamper->importer = 'ldap_to_department_taxonomy';
  $feeds_tamper->source = 'DISTINGUISHEDNAME';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '    $data = explode(\',\', $field);
    $terms = NULL;

    if (is_array($data)) {
        foreach ($data as $term) {
            if (stristr($term, \'OU=\') !== FALSE) {
                $term_data = explode(\'=\', $term);
                $terms[] = trim($term_data[1]);
            }
        }
        return __feeds_import_hierarchical_taxonomy_term(implode(\'>\',array_reverse($terms)),\'phonebook_departments\');
    }
    return $terms;
',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Extract parent from LDAP';
  $export['ldap_to_department_taxonomy-distinguishedname-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-ad_center_id-php';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'AD_Center_ID';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if (function_exists(\'__feeds_import_taxonomy_term_id_by_term_field\') && is_callable(\'__feeds_import_taxonomy_term_id_by_term_field\')) {
  $terms = __feeds_import_taxonomy_term_id_by_term_field(\'organisational_unit\', \'field_phonebook_tax_center_id\', $field);
  return !empty($terms) ? array_shift($terms) : NULL;
}
return NULL;',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['roskilde_phonebook_migration-ad_center_id-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-ad_efternavn-trim';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'AD_Efternavn';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['roskilde_phonebook_migration-ad_efternavn-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-ad_fornavn-trim';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'AD_Fornavn';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['roskilde_phonebook_migration-ad_fornavn-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-afdeling_card_id-depbyid';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Afdeling_Card_ID';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if (function_exists(\'__feeds_import_taxonomy_term_id_by_term_field\') && is_callable(\'__feeds_import_taxonomy_term_id_by_term_field\')) {
  $terms = __feeds_import_taxonomy_term_id_by_term_field(\'phonebook_department\', \'field_phonebook_tax_card_id\', $field);
  return !empty($terms) ? array_shift($terms) : NULL;
}
return NULL;',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Department term get by id';
  $export['roskilde_phonebook_migration-afdeling_card_id-depbyid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-afdeling_card_id-strtotime';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Afdeling_Card_ID';
  $feeds_tamper->plugin_id = '';
  $feeds_tamper->settings = array(
    'php' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Department term get by id';
  $export['roskilde_phonebook_migration-afdeling_card_id-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-arbejdssted_card_id-strtotime';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Arbejdssted_Card_ID';
  $feeds_tamper->plugin_id = '';
  $feeds_tamper->settings = array(
    'php' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Work place term get by id';
  $export['roskilde_phonebook_migration-arbejdssted_card_id-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-arbejdssted_card_id-wptgbid';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Arbejdssted_Card_ID';
  $feeds_tamper->plugin_id = '';
  $feeds_tamper->settings = array(
    'php' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Work place term get by id';
  $export['roskilde_phonebook_migration-arbejdssted_card_id-wptgbid'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-arbejdssted_card_id-wptgbidq';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Arbejdssted_Card_ID';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if (function_exists(\'__feeds_import_taxonomy_term_id_by_term_field\') && is_callable(\'__feeds_import_taxonomy_term_id_by_term_field\')) {
  $terms = __feeds_import_taxonomy_term_id_by_term_field(\'phonebook_work_place\', \'field_phonebook_tax_card_id\', $field);
  return !empty($terms) ? array_shift($terms) : NULL;
}
return NULL;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Work place term get by id';
  $export['roskilde_phonebook_migration-arbejdssted_card_id-wptgbidq'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-phonebook_title-rewrite';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'Phonebook_Title';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[ad_fornavn] [ad_efternavn]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['roskilde_phonebook_migration-phonebook_title-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-xpathparser_21-explode';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'xpathparser:21';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['roskilde_phonebook_migration-xpathparser_21-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-xpathparser_24-convert_boolean';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'xpathparser:24';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'ja',
    'false_value' => 'nej',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['roskilde_phonebook_migration-xpathparser_24-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-xpathparser_25-convert_boolean';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'xpathparser:25';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'ja',
    'false_value' => 'nej',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['roskilde_phonebook_migration-xpathparser_25-convert_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-xpathparser_36-php';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'xpathparser:36';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'global $user;

$old_image_path = \'public://phonebook_migrate\';
$files = file_scan_directory($old_image_path, \'/^\' . $field . \'.*$/\');
if (count($files) > 0) {
    $uid = $user->uid;

    // get image information
    $image_path = current($files)->uri;
    $image_info = image_get_info($image_path);

    // create file object
    $file = new StdClass();
    $file->uid = $uid;
    $file->uri = $image_path;
    $file->filemime = $image_info[\'mime_type\'];
    $file->status = FILE_STATUS_PERMANENT;
    $file->filesize = $image_info[\'file_size\'];
    $file->filename = drupal_basename($image_path);
    $validators = array(
        \'file_validate_is_image\' => array(),
    );
    $errors = file_validate($file, $validators);
    if (empty($errors)) {
        $file = file_copy($file, \'public://phonebook/pictures/\');
        return $file->uri;
    }
}
return \'\';
',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['roskilde_phonebook_migration-xpathparser_36-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'roskilde_phonebook_migration-xpathparser_37-php';
  $feeds_tamper->importer = 'roskilde_phonebook_migration';
  $feeds_tamper->source = 'xpathparser:37';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'if($field) {
  $account = user_load_by_name($field);
  if ($account !== FALSE) {
    return $account->uid;
  }
}',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert domain name to user id';
  $export['roskilde_phonebook_migration-xpathparser_37-php'] = $feeds_tamper;

  return $export;
}
