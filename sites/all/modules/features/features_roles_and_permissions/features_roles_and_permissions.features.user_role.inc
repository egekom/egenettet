<?php
/**
 * @file
 * features_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function features_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Calendar editor.
  $roles['Calendar editor'] = array(
    'name' => 'Calendar editor',
    'weight' => 6,
  );

  // Exported role: Content supplier.
  $roles['Content supplier'] = array(
    'name' => 'Content supplier',
    'weight' => 3,
  );

  // Exported role: Intranet editor.
  $roles['Intranet editor'] = array(
    'name' => 'Intranet editor',
    'weight' => 4,
  );

  // Exported role: Phonebook editor.
  $roles['Phonebook editor'] = array(
    'name' => 'Phonebook editor',
    'weight' => 5,
  );

  // Exported role: User.
  $roles['User'] = array(
    'name' => 'User',
    'weight' => 7,
  );

  return $roles;
}
