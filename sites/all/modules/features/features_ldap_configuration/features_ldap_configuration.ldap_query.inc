<?php
/**
 * @file
 * features_ldap_configuration.ldap_query.inc
 */

/**
 * Implements hook_default_ldap_query().
 */
function features_ldap_configuration_default_ldap_query() {
  $export = array();

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'test_query';
  $qid->name = 'test query';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'DC=egedal,DC=egekom,DC=org';
  $qid->filter = 'objectClass=user';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['test_query'] = $qid;

  return $export;
}
