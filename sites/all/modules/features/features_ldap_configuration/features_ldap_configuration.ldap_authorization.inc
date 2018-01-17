<?php
/**
 * @file
 * features_ldap_configuration.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function features_ldap_configuration_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass();
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'AD1';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->use_first_attr_as_groupid = TRUE;
  $consumer_type->mappings = 'a:5:{i:0;a:6:{s:12:"user_entered";s:16:"Phonebook editor";s:4:"from";s:30:"egenettet_Telefonbogsredaktør";s:10:"normalized";s:16:"Phonebook editor";s:10:"simplified";s:16:"Phonebook editor";s:5:"valid";b:0;s:13:"error_message";s:104:"Role <em class="placeholder">Phonebook editor</em>_name does not exist and role creation is not enabled.";}i:1;a:6:{s:12:"user_entered";s:16:"Content supplier";s:4:"from";s:29:"egenettet_Indholdsleverandør";s:10:"normalized";s:16:"Content supplier";s:10:"simplified";s:16:"Content supplier";s:5:"valid";b:0;s:13:"error_message";s:104:"Role <em class="placeholder">Content supplier</em>_name does not exist and role creation is not enabled.";}i:2;a:6:{s:12:"user_entered";s:15:"Calendar editor";s:4:"from";s:27:"egenettet_Kalenderredaktør";s:10:"normalized";s:15:"Calendar editor";s:10:"simplified";s:15:"Calendar editor";s:5:"valid";b:0;s:13:"error_message";s:103:"Role <em class="placeholder">Calendar editor</em>_name does not exist and role creation is not enabled.";}i:3;a:6:{s:12:"user_entered";s:13:"Administrator";s:4:"from";s:23:"egenettet_Administrator";s:10:"normalized";s:13:"Administrator";s:10:"simplified";s:13:"Administrator";s:5:"valid";b:0;s:13:"error_message";s:101:"Role <em class="placeholder">Administrator</em>_name does not exist and role creation is not enabled.";}i:4;a:6:{s:12:"user_entered";s:15:"Intranet editor";s:4:"from";s:19:"egenettet_Redaktør";s:10:"normalized";s:15:"Intranet editor";s:10:"simplified";s:15:"Intranet editor";s:5:"valid";b:0;s:13:"error_message";s:103:"Role <em class="placeholder">Intranet editor</em>_name does not exist and role creation is not enabled.";}}';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = TRUE;
  $consumer_type->create_consumers = FALSE;
  $consumer_type->regrant_ldap_provisioned = TRUE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
