<?php
/**
 * @file
 * features_content_type_subpage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_content_type_subpage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|subpage|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'subpage';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_related_faq',
            ),
          ),
        ),
      ),
    ),
  );
  $export['node|subpage|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_subpage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|subpage|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'subpage';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'links',
        13 => 'field_related_content',
      ),
      'left' => array(
        1 => 'title',
        2 => 'field_teaser',
        3 => 'field_banner_link',
        4 => 'field_image_data',
        5 => 'field_video_data',
        6 => 'field_body',
        7 => 'field_related_faq',
        8 => 'field_alfresco_document',
        9 => 'field_phonebook_contact',
        10 => 'field_topic_category',
        11 => 'field_tags',
        12 => 'field_table',
      ),
    ),
    'fields' => array(
      'links' => 'right',
      'title' => 'left',
      'field_teaser' => 'left',
      'field_banner_link' => 'left',
      'field_image_data' => 'left',
      'field_video_data' => 'left',
      'field_body' => 'left',
      'field_related_faq' => 'left',
      'field_alfresco_document' => 'left',
      'field_phonebook_contact' => 'left',
      'field_topic_category' => 'left',
      'field_tags' => 'left',
      'field_table' => 'left',
      'field_related_content' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|subpage|full'] = $ds_layout;

  return $export;
}
