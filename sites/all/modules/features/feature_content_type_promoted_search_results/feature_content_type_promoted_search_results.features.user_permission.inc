<?php
/**
 * @file
 * feature_content_type_promoted_search_results.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_content_type_promoted_search_results_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create promoted_search_results content'.
  $permissions['create promoted_search_results content'] = array(
    'name' => 'create promoted_search_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any promoted_search_results content'.
  $permissions['delete any promoted_search_results content'] = array(
    'name' => 'delete any promoted_search_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own promoted_search_results content'.
  $permissions['delete own promoted_search_results content'] = array(
    'name' => 'delete own promoted_search_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any promoted_search_results content'.
  $permissions['edit any promoted_search_results content'] = array(
    'name' => 'edit any promoted_search_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own promoted_search_results content'.
  $permissions['edit own promoted_search_results content'] = array(
    'name' => 'edit own promoted_search_results content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
