<?php
/**
 * @file
 * features_content_type_tabbed.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_content_type_tabbed_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tabbed-field_tab_content'
  $field_instances['node-tabbed-field_tab_content'] = array(
    'bundle' => 'tabbed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection_group',
        'settings' => array(
          'conditions' => array(),
          'heading' => 'field_title',
          'view_mode' => 'full',
        ),
        'type' => 'CollectionFormatterHorizontal',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'field_collection_group',
        'settings' => array(
          'conditions' => array(),
          'heading' => 'field_title',
          'view_mode' => 'full',
        ),
        'type' => 'CollectionFormatterHorizontal',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tab_content',
    'label' => 'Tab content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tab content');

  return $field_instances;
}
