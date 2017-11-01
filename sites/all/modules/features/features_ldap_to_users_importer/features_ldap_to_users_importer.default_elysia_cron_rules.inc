<?php
/**
 * @file
 * features_ldap_to_users_importer.default_elysia_cron_rules.inc
 */

/**
 * Implements hook_default_elysia_cron_rules().
 */
function features_ldap_to_users_importer_default_elysia_cron_rules() {
  $cron_rules = array();

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'queue_roskilde_phonebook_author_queue';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '*/15 * * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['queue_roskilde_phonebook_author_queue'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'queue_roskilde_phonebook_import_queue';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '0 0-6 * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['queue_roskilde_phonebook_import_queue'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'roskilde_phonebook_cron';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '50 23 * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['roskilde_phonebook_cron'] = $cron_rule;

  return $cron_rules;

}
