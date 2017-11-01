<?php
/**
 * @file
 * features_content_type_subpage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_subpage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|subpage|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
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
  $export['group_contact_information|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_responsibility|node|subpage|form';
  $field_group->group_name = 'group_editorial_responsibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Editorial responsibility',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editorial-responsibility field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editorial_responsibility|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|node|subpage|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
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
  $export['group_faq|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|node|subpage|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
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
  $export['group_file_attachments|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horisontal_tabs|node|subpage|form';
  $field_group->group_name = 'group_horisontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horisontal tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_main_content',
      1 => 'group_file_attachments',
      2 => 'group_taxonomy',
      3 => 'group_related_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horisontal-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $export['group_horisontal_tabs|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|subpage|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_body',
      1 => 'field_image_data',
      2 => 'field_teaser',
      3 => 'field_title',
      4 => 'title',
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
  $export['group_main_content|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|subpage|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '14',
    'children' => array(
      0 => 'field_banner_link',
      1 => 'field_related_content',
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
  $export['group_related_content|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabel|node|subpage|form';
  $field_group->group_name = 'group_tabel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
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
  $export['group_tabel|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|subpage|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '11',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_topic_category',
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
  $export['group_taxonomy|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vertival_tabs|node|subpage|form';
  $field_group->group_name = 'group_vertival_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact_information',
      1 => 'group_editorial_responsibility',
      2 => 'group_faq',
      3 => 'group_file_attachments',
      4 => 'group_main_content',
      5 => 'group_related_content',
      6 => 'group_tabel',
      7 => 'group_taxonomy',
      8 => 'group_video',
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
  $export['group_vertival_tabs|node|subpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|subpage|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'subpage';
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
  $export['group_video|node|subpage|form'] = $field_group;

  return $export;
}
