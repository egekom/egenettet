<?php
/**
 * @file
 * feature_configuration_workbench.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function feature_configuration_workbench_workbench_moderation_export_transitions() {
  $items = array(
    'approved:draft' => array(
      'from_name' => 'approved',
      'to_name' => 'draft',
      'name' => 'Disapproved',
    ),
    'approved:published' => array(
      'from_name' => 'approved',
      'to_name' => 'published',
      'name' => 'Publish Approved',
    ),
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'name' => 'Submit for Review',
    ),
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'needs_review:approved' => array(
      'from_name' => 'needs_review',
      'to_name' => 'approved',
      'name' => 'Approved',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'name' => 'Reject',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
      'name' => 'Unpublish',
    ),
    'published:needs_review' => array(
      'from_name' => 'published',
      'to_name' => 'needs_review',
      'name' => 'Return for review',
    ),
  );
  return $items;
}
