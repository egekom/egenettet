<?php
/**
 * @file
 * features_alfresco_files_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_alfresco_files_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-alfresco_files-field_alfresco_document'
  $field_instances['fieldable_panels_pane-alfresco_files-field_alfresco_document'] = array(
    'bundle' => 'alfresco_files',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'cmis_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'cmis_field_link',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'cmis_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'cmis_field_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_alfresco_document',
    'label' => 'Alfresco document',
    'required' => 0,
    'settings' => array(
      'cmis_field_rootFolderPath' => '/',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cmis_field',
      'settings' => array(
        'cmis_field_rootFolderPath' => array(),
      ),
      'type' => 'cmis_field_browser',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alfresco document');

  return $field_instances;
}
