<?php

/**
 * @file
 * Provide views data and handlers for simple_database.module.
 *
 * @ingroup views_module_handlers
 */

/**
 * Implements hook_views_data().
 */
function simple_database_views_data() {

  // ----------------------------------------------------------------
  // simple_database table -- basic table information.
  $data = array();

  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.
  $data['simple_database']['table']['group'] = t('Simple Database');

  // Advertise this table as a possible base table.
  $data['simple_database']['table']['base'] = array(
    // This is the identifier field for the view.
    'field' => 'bundle',
    'title' => t('Simple Database'),
    'help' => t('Simple database table contains node flags.'),
    'weight' => -10,
  );

  $data['simple_database']['table']['join'] = array(
    'node' => array(
      'left_field' => 'type',
      'field' => 'bundle',
    ),
  );

  // ----------------------------------------------------------------
  // simple_database table -- fields.

  // Field bundle.
  $data['simple_database']['bundle'] = array(
    'title' => t('Is Simple Database'),
    // The help that appears on the UI,
    'help' => t('The nodes flaged as simple database.'),
    // Information for displaying the nodes (is/isn't Simple Database type).
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      // This is use by the table display plugin.
      'click sortable' => TRUE,
      'output formats' => array(
        'yes-no' => array(t('Simple Database'), t('Not Simple Database')),
      ),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Simple Database types'),
      'type' => 'yes-no',
      'accept_null' => TRUE,
    ),
  );

  // Extra filter for field bundle.
  $data['simple_database']['bundle_extra'] = array(
    'title' => t('Type'),
    'help' => t('The content type.'),
    // Information for accepting a simple_database.bundle as a filter.
    'filter' => array(
      'field' => 'bundle',
      'handler' => 'simple_database_handler_filter_node_type',
    ),
  );

  return $data;
}
