<?php
/**
 * @file
 * features_feeds_importers.ldap_query.inc
 */

/**
 * Implements hook_default_ldap_query().
 */
function features_feeds_importers_default_ldap_query() {
  $export = array();

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'departments';
  $qid->name = 'departments';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Borgerrådgivere,DC=roskilde
OU=Byrådet,DC=roskilde,DC=local
OU=Eksterne,DC=roskilde,DC=local
OU=Roskildebrugere,DC=roskilde,DC=local';
  $qid->filter = '(objectClass=organizationalUnit)';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['departments'] = $qid;

  return $export;
}
