<?php
/**
 * @file
 * features_content_type_phonebook.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_phonebook_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_call_center|node|phonebook|form';
  $field_group->group_name = 'group_call_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Callcenter',
    'weight' => '43',
    'children' => array(
      0 => 'field_additional_information',
      1 => 'field_phonebook_search_words',
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
  $export['group_call_center|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|phonebook|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Organizational information',
    'weight' => '42',
    'children' => array(
      0 => 'field_unit',
      1 => 'field_department',
      2 => 'field_desk_id',
      3 => 'field_room_number',
      4 => 'field_floor',
      5 => 'field_work_place',
      6 => 'field_work_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Organizational information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contact_information|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|phonebook|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_personal_info',
      1 => 'group_contact_information',
      2 => 'group_other_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_info|node|phonebook|form';
  $field_group->group_name = 'group_other_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Internal information',
    'weight' => '47',
    'children' => array(
      0 => 'field_text_to_internal_use',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Internal information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_other_info|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_info|node|phonebook|form';
  $field_group->group_name = 'group_personal_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '41',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_phonebook_image',
      4 => 'field_position',
      5 => 'field_work_assignments',
      6 => 'field_birthday',
      7 => 'field_competences',
      8 => 'field_local_phone_number',
      9 => 'field_mobile_number',
      10 => 'field_phone_number',
      11 => 'field_search_words',
      12 => 'title',
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
  $export['group_personal_info|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phonebook_name|node|phonebook|my_page';
  $field_group->group_name = 'group_phonebook_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'my_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full name',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Full name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-phonebook-name',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_phonebook_name|node|phonebook|my_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phonebook_name|node|phonebook|teaser';
  $field_group->group_name = 'group_phonebook_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full name',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Full name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-phonebook-name',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_phonebook_name|node|phonebook|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_politicians|node|phonebook|form';
  $field_group->group_name = 'group_politicians';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'Politicians',
    'weight' => '44',
    'children' => array(
      0 => 'field_committee',
      1 => 'field_political_party',
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
  $export['group_politicians|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system_info|node|phonebook|form';
  $field_group->group_name = 'group_system_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'System fields',
    'weight' => '44',
    'children' => array(
      0 => 'field_user',
      1 => 'field_organizational_unit',
      2 => 'field_phonebook_contact_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-system-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_system_info|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_to_website|node|phonebook|form';
  $field_group->group_name = 'group_to_website';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertival_tabs';
  $field_group->data = array(
    'label' => 'To website',
    'weight' => '46',
    'children' => array(
      0 => 'field_image_to_website',
      1 => 'field_main_number',
      2 => 'field_phonebook_type',
      3 => 'field_text_to_website',
      4 => 'field_to_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-to-website field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_to_website|node|phonebook|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit_area|node|phonebook|my_page';
  $field_group->group_name = 'group_unit_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'my_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unit & Area group',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $export['group_unit_area|node|phonebook|my_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit_area|node|phonebook|teaser';
  $field_group->group_name = 'group_unit_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unit & Area group',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $export['group_unit_area|node|phonebook|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vertival_tabs|node|phonebook|form';
  $field_group->group_name = 'group_vertival_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phonebook';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact_information',
      1 => 'group_personal_info',
      2 => 'group_system_info',
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
  $export['group_vertival_tabs|node|phonebook|form'] = $field_group;

  return $export;
}
