<?php
/**
 * @file
 * feature_configuration_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function feature_configuration_workbench_workbench_moderation_export_states() {
  $items = array(
    'approved' => array(
      'name' => 'approved',
      'label' => 'Approved',
      'description' => 'Approve this version',
      'weight' => 0,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -99,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Ready for moderation',
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => 99,
    ),
  );
  return $items;
}
