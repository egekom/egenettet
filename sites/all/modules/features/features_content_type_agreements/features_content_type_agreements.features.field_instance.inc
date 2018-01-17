<?php
/**
 * @file
 * features_content_type_agreements.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_content_type_agreements_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-agreements-field_qa'
  $field_instances['node-agreements-field_qa'] = array(
    'bundle' => 'agreements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection_group',
        'settings' => array(
          'conditions' => array(),
          'heading' => 'field_title',
          'view_mode' => 'full',
        ),
        'type' => 'CollectionFormatterAccordion',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection_group',
        'settings' => array(
          'conditions' => array(),
          'heading' => 'field_title',
          'view_mode' => 'full',
        ),
        'type' => 'CollectionFormatterAccordion',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'field_collection_group',
        'settings' => array(
          'conditions' => array(),
          'heading' => 'field_title',
          'view_mode' => 'full',
        ),
        'type' => 'CollectionFormatterAccordion',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_qa',
    'label' => 'QA',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-agreements-field_title'
  $field_instances['node-agreements-field_title'] = array(
    'bundle' => 'agreements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-agreements-field_topic_category'
  $field_instances['node-agreements-field_topic_category'] = array(
    'bundle' => 'agreements',
    'default_value' => NULL,
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topic_category',
    'label' => 'Topic Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('QA');
  t('Title');
  t('Topic Category');

  return $field_instances;
}
