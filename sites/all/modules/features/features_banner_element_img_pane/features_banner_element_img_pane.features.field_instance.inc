<?php
/**
 * @file
 * features_banner_element_img_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_banner_element_img_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-banner_element_img_pane-field_banner_element_img_ref'
  $field_instances['fieldable_panels_pane-banner_element_img_pane-field_banner_element_img_ref'] = array(
    'bundle' => 'banner_element_img_pane',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_banner_element_img_ref',
    'label' => 'Banner element image reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner element image reference');

  return $field_instances;
}
