<?php
/**
 * @file
 * features_ldap_to_users_importer.ldap_query.inc
 */

/**
 * Implements hook_default_ldap_query().
 */
function features_ldap_to_users_importer_default_ldap_query() {
  $export = array();

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_A';
  $qid->name = 'Import phonebook A';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=A*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_A'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_B';
  $qid->name = 'Import phonebook B';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=B*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_B'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_C';
  $qid->name = 'Import phonebook C';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=C*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_C'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_D';
  $qid->name = 'Import phonebook D';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=D*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_D'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_E';
  $qid->name = 'Import phonebook E';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=E*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_E'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_F';
  $qid->name = 'Import phonebook F';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=F*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_F'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_G';
  $qid->name = 'Import phonebook G';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=G*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_G'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_H';
  $qid->name = 'Import phonebook H';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=H*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_H'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_I';
  $qid->name = 'Import phonebook I';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=I*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_I'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_J';
  $qid->name = 'Import phonebook J';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=J*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_J'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_K';
  $qid->name = 'Import phonebook K';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=K*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_K'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_L';
  $qid->name = 'Import phonebook L';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=L*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_L'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_M';
  $qid->name = 'Import phonebook M';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=M*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_M'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_N';
  $qid->name = 'Import phonebook N';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=N*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_N'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_O';
  $qid->name = 'Import phonebook O';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=O*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_O'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_P';
  $qid->name = 'Import phonebook P';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=P*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_P'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Q';
  $qid->name = 'Import phonebook Q';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Q*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Q'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_R';
  $qid->name = 'Import phonebook R';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=R*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_R'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_S';
  $qid->name = 'Import phonebook S';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=S*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_S'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_T';
  $qid->name = 'Import phonebook T';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=T*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_T'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_U';
  $qid->name = 'Import phonebook U';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=U*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_U'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_V';
  $qid->name = 'Import phonebook V';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=V*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_V'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_W';
  $qid->name = 'Import phonebook W';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=W*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_W'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_X';
  $qid->name = 'Import phonebook X';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=X*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_X'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Y';
  $qid->name = 'Import phonebook Y';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Y*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Y'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Z';
  $qid->name = 'Import phonebook Z';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Z*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Z'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Å';
  $qid->name = 'Import phonebook Å';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Å*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Å'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Æ';
  $qid->name = 'Import phonebook Æ';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Æ*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Æ'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'import_phonebook_Ø';
  $qid->name = 'Import phonebook Ø';
  $qid->sid = 'AD1';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=Brugere,DC=egedal,DC=egekom,DC=org
OU=Politikere,OU=Eksterne Brugere,DC=egedal,DC=egekom,DC=org';
  $qid->filter = '(&(objectClass=user)(CN=Ø*))';
  $qid->attributes_str = '';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['import_phonebook_Ø'] = $qid;

  return $export;
}
