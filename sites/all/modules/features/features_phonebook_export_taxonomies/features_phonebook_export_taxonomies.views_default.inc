<?php
/**
 * @file
 * features_phonebook_export_taxonomies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_phonebook_export_taxonomies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phonebook_export_taxonomy_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Phonebook - Export taxonomy terms';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Center ID */
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['id'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['table'] = 'field_data_field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['field'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: SD ID */
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['id'] = 'field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['table'] = 'field_data_field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['field'] = 'field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: EAN */
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['id'] = 'field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['table'] = 'field_data_field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['field'] = 'field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Manager */
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['id'] = 'field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['table'] = 'field_data_field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['field'] = 'field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Department e-mail */
  $handler->display->display_options['fields']['field_phonebook_tax_email']['id'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['table'] = 'field_data_field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['field'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['label'] = 'Department Email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Card ID */
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['id'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['table'] = 'field_data_field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['field'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'phonebook_department' => 'phonebook_department',
  );

  /* Display: Export - Phonebook Center */
  $handler = $view->new_display('views_data_export', 'Export - Phonebook Center', 'term_export_phonebook_centers');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['style_options']['root_node'] = 'Centers';
  $handler->display->display_options['style_options']['item_node'] = 'Center';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'description' => 'description',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'organisational_unit' => 'organisational_unit',
  );
  $handler->display->display_options['path'] = 'export/phonebook/centers';

  /* Display: Export - Phonebook Department */
  $handler = $view->new_display('views_data_export', 'Export - Phonebook Department', 'term_export_phonebook_departments');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['style_options']['root_node'] = 'Departments';
  $handler->display->display_options['style_options']['item_node'] = 'Department';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'description' => 'description',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Center (field_phonebook_tax_center) */
  $handler->display->display_options['relationships']['field_phonebook_tax_center_tid']['id'] = 'field_phonebook_tax_center_tid';
  $handler->display->display_options['relationships']['field_phonebook_tax_center_tid']['table'] = 'field_data_field_phonebook_tax_center';
  $handler->display->display_options['relationships']['field_phonebook_tax_center_tid']['field'] = 'field_phonebook_tax_center_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Center ID */
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['id'] = 'field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['table'] = 'field_data_field_phonebook_tax_center_id';
  $handler->display->display_options['fields']['field_phonebook_tax_center_id']['field'] = 'field_phonebook_tax_center_id';
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
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_phonebook_tax_center_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Center Term ID';
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Taxonomy term: SD ID */
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['id'] = 'field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['table'] = 'field_data_field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['field'] = 'field_phonebook_tax_sd_id';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_sd_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Work place ID */
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['id'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['table'] = 'field_data_field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['field'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: EAN */
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['id'] = 'field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['table'] = 'field_data_field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['field'] = 'field_phonebook_tax_ean';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_ean']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Manager */
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['id'] = 'field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['table'] = 'field_data_field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['field'] = 'field_phonebook_tax_manager';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_manager']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Department e-mail */
  $handler->display->display_options['fields']['field_phonebook_tax_email']['id'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['table'] = 'field_data_field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['field'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['label'] = 'Department Email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Card ID */
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['id'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['table'] = 'field_data_field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['field'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'export/phonebook/departments';

  /* Display: Export - Phonebook Work Places */
  $handler = $view->new_display('views_data_export', 'Export - Phonebook Work Places', 'term_export_phonebook_work_places');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['style_options']['root_node'] = 'WorkPlaces';
  $handler->display->display_options['style_options']['item_node'] = 'WorkPlace';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'description' => 'description',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Work place ID */
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['id'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['table'] = 'field_data_field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['field'] = 'field_phonebook_tax_workplace_id';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_workplace_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Department e-mail */
  $handler->display->display_options['fields']['field_phonebook_tax_email']['id'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['table'] = 'field_data_field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['field'] = 'field_phonebook_tax_email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['label'] = 'Shared Email';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_phonebook_tax_address_thoroughfare']['id'] = 'field_phonebook_tax_address_thoroughfare';
  $handler->display->display_options['fields']['field_phonebook_tax_address_thoroughfare']['table'] = 'field_data_field_phonebook_tax_address';
  $handler->display->display_options['fields']['field_phonebook_tax_address_thoroughfare']['field'] = 'field_phonebook_tax_address_thoroughfare';
  $handler->display->display_options['fields']['field_phonebook_tax_address_thoroughfare']['label'] = 'Address Street 1';
  /* Field: Taxonomy term: Address - Premise (i.e. Apartment / Suite number) */
  $handler->display->display_options['fields']['field_phonebook_tax_address_premise']['id'] = 'field_phonebook_tax_address_premise';
  $handler->display->display_options['fields']['field_phonebook_tax_address_premise']['table'] = 'field_data_field_phonebook_tax_address';
  $handler->display->display_options['fields']['field_phonebook_tax_address_premise']['field'] = 'field_phonebook_tax_address_premise';
  $handler->display->display_options['fields']['field_phonebook_tax_address_premise']['label'] = 'Address Street 2';
  /* Field: Taxonomy term: Address - Postal code */
  $handler->display->display_options['fields']['field_phonebook_tax_address_postal_code']['id'] = 'field_phonebook_tax_address_postal_code';
  $handler->display->display_options['fields']['field_phonebook_tax_address_postal_code']['table'] = 'field_data_field_phonebook_tax_address';
  $handler->display->display_options['fields']['field_phonebook_tax_address_postal_code']['field'] = 'field_phonebook_tax_address_postal_code';
  $handler->display->display_options['fields']['field_phonebook_tax_address_postal_code']['label'] = 'Address Postal code';
  /* Field: Taxonomy term: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_phonebook_tax_address_locality']['id'] = 'field_phonebook_tax_address_locality';
  $handler->display->display_options['fields']['field_phonebook_tax_address_locality']['table'] = 'field_data_field_phonebook_tax_address';
  $handler->display->display_options['fields']['field_phonebook_tax_address_locality']['field'] = 'field_phonebook_tax_address_locality';
  $handler->display->display_options['fields']['field_phonebook_tax_address_locality']['label'] = 'Address City';
  /* Field: Taxonomy term: Opening hours */
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['id'] = 'field_phonebook_tax_openinghours';
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['table'] = 'field_data_field_phonebook_tax_openinghours';
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['field'] = 'field_phonebook_tax_openinghours';
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['label'] = 'Opening Hours';
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_openinghours']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Phone number */
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['id'] = 'field_phonebook_tax_phone_number';
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['table'] = 'field_data_field_phonebook_tax_phone_number';
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['field'] = 'field_phonebook_tax_phone_number';
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['label'] = 'Phone Number';
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_tax_phone_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: URL */
  $handler->display->display_options['fields']['field_phonebook_tax_url']['id'] = 'field_phonebook_tax_url';
  $handler->display->display_options['fields']['field_phonebook_tax_url']['table'] = 'field_data_field_phonebook_tax_url';
  $handler->display->display_options['fields']['field_phonebook_tax_url']['field'] = 'field_phonebook_tax_url';
  $handler->display->display_options['fields']['field_phonebook_tax_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_phonebook_tax_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_url']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Web */
  $handler->display->display_options['fields']['field_phonebook_tax_web']['id'] = 'field_phonebook_tax_web';
  $handler->display->display_options['fields']['field_phonebook_tax_web']['table'] = 'field_data_field_phonebook_tax_web';
  $handler->display->display_options['fields']['field_phonebook_tax_web']['field'] = 'field_phonebook_tax_web';
  $handler->display->display_options['fields']['field_phonebook_tax_web']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_phonebook_tax_web']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Card ID */
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['id'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['table'] = 'field_data_field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['field'] = 'field_phonebook_tax_card_id';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_phonebook_tax_card_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'phonebook_work_place' => 'phonebook_work_place',
  );
  $handler->display->display_options['path'] = 'export/phonebook/workplaces';
  $export['phonebook_export_taxonomy_terms'] = $view;

  return $export;
}
