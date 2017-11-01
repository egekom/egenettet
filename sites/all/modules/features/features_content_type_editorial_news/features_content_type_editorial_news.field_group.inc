<?php
/**
 * @file
 * features_content_type_editorial_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_editorial_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|editorial_news|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '17',
    'children' => array(
      0 => 'field_phonebook_contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_information|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|node|editorial_news|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'FAQ',
    'weight' => '13',
    'children' => array(
      0 => 'field_related_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_faq|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|node|editorial_news|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'File attachments',
    'weight' => '15',
    'children' => array(
      0 => 'field_alfresco_document',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_file_attachments|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horisontal_tabs|node|editorial_news|form';
  $field_group->group_name = 'group_horisontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horisontal tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_file_attachments',
      1 => 'group_main_content',
      2 => 'group_related_content',
      3 => 'group_taxonomy',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $export['group_horisontal_tabs|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|editorial_news|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_body',
      1 => 'field_teaser',
      2 => 'field_for_approve',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_content|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|editorial_news|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '11',
    'children' => array(
      0 => 'field_image_data',
      1 => 'field_video_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|editorial_news|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '13',
    'children' => array(
      0 => 'field_alfresco_document',
      1 => 'field_phonebook_contact',
      2 => 'field_related_content',
      3 => 'field_related_faq',
      4 => 'field_table',
      5 => 'field_webforms',
      6 => 'field_show_faq_list',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabel|node|editorial_news|form';
  $field_group->group_name = 'group_tabel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Tabel',
    'weight' => '16',
    'children' => array(
      0 => 'field_table',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tabel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tabel|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|editorial_news|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '12',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topic_category',
      2 => 'field_unit',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vertival_tabs|node|editorial_news|form';
  $field_group->group_name = 'group_vertival_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_content',
      1 => 'group_media',
      2 => 'group_related_content',
      3 => 'group_taxonomy',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vertival-tabs field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $export['group_vertival_tabs|node|editorial_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|editorial_news|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'editorial_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '12',
    'children' => array(
      0 => 'field_video_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|editorial_news|form'] = $field_group;

  return $export;
}
