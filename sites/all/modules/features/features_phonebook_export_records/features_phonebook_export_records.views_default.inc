<?php
/**
 * @file
 * features_phonebook_export_records.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_phonebook_export_records_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phonebook_export_records';
  $view->description = 'Export of the records in the phonebook.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Phonebook - Export records';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'simple_database_bundles',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_target_id']['id'] = 'field_user_target_id';
  $handler->display->display_options['relationships']['field_user_target_id']['table'] = 'field_data_field_user';
  $handler->display->display_options['relationships']['field_user_target_id']['field'] = 'field_user_target_id';
  /* Relationship: Content: Department (field_department) */
  $handler->display->display_options['relationships']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['relationships']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_tid']['field'] = 'field_department_tid';
  /* Relationship: Content: Center (field_unit) */
  $handler->display->display_options['relationships']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['relationships']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['relationships']['field_unit_tid']['field'] = 'field_unit_tid';
  /* Relationship: Content: Work place (field_work_place) */
  $handler->display->display_options['relationships']['field_work_place_tid']['id'] = 'field_work_place_tid';
  $handler->display->display_options['relationships']['field_work_place_tid']['table'] = 'field_data_field_work_place';
  $handler->display->display_options['relationships']['field_work_place_tid']['field'] = 'field_work_place_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Record ID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Update Date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i:s';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['format_username'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone Number';
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Mobile number */
  $handler->display->display_options['fields']['field_mobile_number']['id'] = 'field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['table'] = 'field_data_field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['field'] = 'field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['label'] = 'Mobile Phone Number';
  $handler->display->display_options['fields']['field_mobile_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_mobile_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Local phone number */
  $handler->display->display_options['fields']['field_local_phone_number']['id'] = 'field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['table'] = 'field_data_field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['field'] = 'field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['label'] = 'Locale Phone Number';
  $handler->display->display_options['fields']['field_local_phone_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_local_phone_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Birthday */
  $handler->display->display_options['fields']['field_birthday']['id'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['table'] = 'field_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday']['field'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_birthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Competences */
  $handler->display->display_options['fields']['field_competences']['id'] = 'field_competences';
  $handler->display->display_options['fields']['field_competences']['table'] = 'field_data_field_competences';
  $handler->display->display_options['fields']['field_competences']['field'] = 'field_competences';
  $handler->display->display_options['fields']['field_competences']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Work assignments */
  $handler->display->display_options['fields']['field_work_assignments']['id'] = 'field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['table'] = 'field_data_field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['field'] = 'field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_work_assignments']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_floor']['id'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['table'] = 'field_data_field_floor';
  $handler->display->display_options['fields']['field_floor']['field'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_floor']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Room number */
  $handler->display->display_options['fields']['field_room_number']['id'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['table'] = 'field_data_field_room_number';
  $handler->display->display_options['fields']['field_room_number']['field'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_room_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Desk ID */
  $handler->display->display_options['fields']['field_desk_id']['id'] = 'field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['table'] = 'field_data_field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['field'] = 'field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_desk_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Work time */
  $handler->display->display_options['fields']['field_work_time']['id'] = 'field_work_time';
  $handler->display->display_options['fields']['field_work_time']['table'] = 'field_data_field_work_time';
  $handler->display->display_options['fields']['field_work_time']['field'] = 'field_work_time';
  $handler->display->display_options['fields']['field_work_time']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_work_time']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Contact ID */
  $handler->display->display_options['fields']['field_phonebook_contact_id']['id'] = 'field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['table'] = 'field_data_field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['field'] = 'field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['label'] = 'Old Contact ID';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Center ID */
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['id'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['table'] = 'field_data_field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['field'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Center Term ID';
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Center Term Name';
  /* Field: Taxonomy term: Work place ID */
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['id'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['table'] = 'field_data_field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['field'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Work Place Term ID';
  $handler->display->display_options['fields']['tid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Work Place Term Name';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['fields']['tid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_2']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_2']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['tid_2']['label'] = 'Department Term ID';
  $handler->display->display_options['fields']['tid_2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_2']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['name_3']['label'] = 'Department Term Name';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Simple Database: Type */
  $handler->display->display_options['filters']['bundle_extra']['id'] = 'bundle_extra';
  $handler->display->display_options['filters']['bundle_extra']['table'] = 'simple_database';
  $handler->display->display_options['filters']['bundle_extra']['field'] = 'bundle_extra';
  $handler->display->display_options['filters']['bundle_extra']['value'] = array(
    'phonebook' => 'phonebook',
  );

  /* Display: Export records */
  $handler = $view->new_display('views_data_export', 'Export records', 'node_export_phonebook_records');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['style_options']['root_node'] = 'Records';
  $handler->display->display_options['style_options']['item_node'] = 'Record';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'field_competences' => 'field_competences',
    'field_work_assignments' => 'field_work_assignments',
    'field_work_time' => 'field_work_time',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Record ID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Update Date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y-m-d H:i:s';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['format_username'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = 'Phone Number';
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Mobile number */
  $handler->display->display_options['fields']['field_mobile_number']['id'] = 'field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['table'] = 'field_data_field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['field'] = 'field_mobile_number';
  $handler->display->display_options['fields']['field_mobile_number']['label'] = 'Mobile Phone Number';
  $handler->display->display_options['fields']['field_mobile_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_mobile_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Local phone number */
  $handler->display->display_options['fields']['field_local_phone_number']['id'] = 'field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['table'] = 'field_data_field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['field'] = 'field_local_phone_number';
  $handler->display->display_options['fields']['field_local_phone_number']['label'] = 'Locale Phone Number';
  $handler->display->display_options['fields']['field_local_phone_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_local_phone_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Birthday */
  $handler->display->display_options['fields']['field_birthday']['id'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['table'] = 'field_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday']['field'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_birthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Competences */
  $handler->display->display_options['fields']['field_competences']['id'] = 'field_competences';
  $handler->display->display_options['fields']['field_competences']['table'] = 'field_data_field_competences';
  $handler->display->display_options['fields']['field_competences']['field'] = 'field_competences';
  $handler->display->display_options['fields']['field_competences']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Work assignments */
  $handler->display->display_options['fields']['field_work_assignments']['id'] = 'field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['table'] = 'field_data_field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['field'] = 'field_work_assignments';
  $handler->display->display_options['fields']['field_work_assignments']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_work_assignments']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_floor']['id'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['table'] = 'field_data_field_floor';
  $handler->display->display_options['fields']['field_floor']['field'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_floor']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Room number */
  $handler->display->display_options['fields']['field_room_number']['id'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['table'] = 'field_data_field_room_number';
  $handler->display->display_options['fields']['field_room_number']['field'] = 'field_room_number';
  $handler->display->display_options['fields']['field_room_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_room_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Desk ID */
  $handler->display->display_options['fields']['field_desk_id']['id'] = 'field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['table'] = 'field_data_field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['field'] = 'field_desk_id';
  $handler->display->display_options['fields']['field_desk_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_desk_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Work time */
  $handler->display->display_options['fields']['field_work_time']['id'] = 'field_work_time';
  $handler->display->display_options['fields']['field_work_time']['table'] = 'field_data_field_work_time';
  $handler->display->display_options['fields']['field_work_time']['field'] = 'field_work_time';
  $handler->display->display_options['fields']['field_work_time']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_work_time']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Contact ID */
  $handler->display->display_options['fields']['field_phonebook_contact_id']['id'] = 'field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['table'] = 'field_data_field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['field'] = 'field_phonebook_contact_id';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['label'] = 'Old Contact ID';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_contact_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Center ID */
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['id'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['table'] = 'field_data_field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['field'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Center Term ID';
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Center Term Name';
  /* Field: Taxonomy term: Work place ID */
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['id'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['table'] = 'field_data_field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['field'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Work Place Term ID';
  $handler->display->display_options['fields']['tid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_work_place_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Work Place Term Name';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['fields']['tid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_2']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_2']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['tid_2']['label'] = 'Department Term ID';
  $handler->display->display_options['fields']['tid_2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_2']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['name_3']['label'] = 'Department Term Name';
  /* Field: Content: Search words */
  $handler->display->display_options['fields']['field_search_words']['id'] = 'field_search_words';
  $handler->display->display_options['fields']['field_search_words']['table'] = 'field_data_field_search_words';
  $handler->display->display_options['fields']['field_search_words']['field'] = 'field_search_words';
  $handler->display->display_options['fields']['field_search_words']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => 'hide_if_empty',
        'configuration' => array(
          'target' => 'node',
        ),
      ),
    ),
  );
  $handler->display->display_options['path'] = 'export/phonebook/records';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['phonebook_export_records'] = $view;

  return $export;
}
