<?php
/**
 * @file
 * features_content_type_editorial_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_content_type_editorial_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|editorial_news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'editorial_news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|editorial_news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|editorial_news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'editorial_news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|editorial_news|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|editorial_news|news_list_first';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'editorial_news';
  $ds_fieldsetting->view_mode = 'news_list_first';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|editorial_news|news_list_first'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|editorial_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'editorial_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => '',
        'conditions' => array(),
      ),
    ),
  );
  $export['node|editorial_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_content_type_editorial_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|editorial_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'editorial_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'field_byline',
        3 => 'field_teaser',
        4 => 'field_body',
        5 => 'field_topic_category',
        6 => 'field_tags',
        8 => 'field_alfresco_document',
        9 => 'field_table',
        10 => 'field_related_faq',
        11 => 'field_phonebook_contact',
        12 => 'author',
      ),
      'right' => array(
        13 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_date' => 'left',
      'field_byline' => 'left',
      'field_teaser' => 'left',
      'field_body' => 'left',
      'field_topic_category' => 'left',
      'field_tags' => 'left',
      'field_alfresco_document' => 'left',
      'field_table' => 'left',
      'field_related_faq' => 'left',
      'field_phonebook_contact' => 'left',
      'author' => 'left',
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
  $export['node|editorial_news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|editorial_news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'editorial_news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'field_byline',
        3 => 'field_banner_link',
        4 => 'field_image_data',
        5 => 'field_video_data',
        6 => 'field_teaser',
        7 => 'field_body',
        8 => 'field_related_faq',
        9 => 'field_alfresco_document',
        10 => 'field_phonebook_contact',
        11 => 'field_topic_category',
        12 => 'field_tags',
        13 => 'field_table',
        14 => 'comments',
      ),
      'right' => array(
        15 => 'field_related_content',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_date' => 'left',
      'field_byline' => 'left',
      'field_banner_link' => 'left',
      'field_image_data' => 'left',
      'field_video_data' => 'left',
      'field_teaser' => 'left',
      'field_body' => 'left',
      'field_related_faq' => 'left',
      'field_alfresco_document' => 'left',
      'field_phonebook_contact' => 'left',
      'field_topic_category' => 'left',
      'field_tags' => 'left',
      'field_table' => 'left',
      'comments' => 'left',
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
  $export['node|editorial_news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|editorial_news|news_list_first';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'editorial_news';
  $ds_layout->view_mode = 'news_list_first';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_data',
        1 => 'field_date',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_image_data' => 'ds_content',
      'field_date' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|editorial_news|news_list_first'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|editorial_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'editorial_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_date',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_date' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|editorial_news|teaser'] = $ds_layout;

  return $export;
}
