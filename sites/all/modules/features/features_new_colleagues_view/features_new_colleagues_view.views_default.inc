<?php
/**
 * @file
 * features_new_colleagues_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_new_colleagues_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_colleagues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New colleagues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'simple_database_bundles',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2 class="pane pane-title pane-new-colleagues">Nye medarbejdere</h2>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_department']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'user_picture_default';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_phonebook_image']['id'] = 'field_phonebook_image';
  $handler->display->display_options['fields']['field_phonebook_image']['table'] = 'field_data_field_phonebook_image';
  $handler->display->display_options['fields']['field_phonebook_image']['field'] = 'field_phonebook_image';
  $handler->display->display_options['fields']['field_phonebook_image']['label'] = '';
  $handler->display->display_options['fields']['field_phonebook_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phonebook_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phonebook_image']['empty'] = '<a href="/node/[nid]"><div class="default-phonebook-picture"><img src="[variable]" /></div></a>';
  $handler->display->display_options['fields']['field_phonebook_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_phonebook_image']['settings'] = array(
    'image_style' => 'contact_image_86x86',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="new-users-additinal-info">
  <div class="user-first-last-neme">
    <div class="field field-name-field-first-name field-type-text field-label-hidden">
      <div class="field-item"><span class="phonebook-first-name">[field_first_name]</span></div>
    </div>
    <div class="field field-name-field-last-name field-type-text field-label-hidden">
      <div class="field-item"><span class="phonebook-last-name">[field_last_name]</span></div>
    </div>
  </div>
  <div class="field field-name-field-position field-type-text field-label-hidden">
    <div class="field-item"><span class="phonebook-position">[field_position]</span></div>
  </div>
  <div class="field field-name-field-department field-type-text field-label-hidden">
    <div class="field-item"><span class="phonebook-department">[field_department]</span></div>
  </div>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Start date (field_phonebook_start_date) */
  $handler->display->display_options['sorts']['field_phonebook_start_date_value']['id'] = 'field_phonebook_start_date_value';
  $handler->display->display_options['sorts']['field_phonebook_start_date_value']['table'] = 'field_data_field_phonebook_start_date';
  $handler->display->display_options['sorts']['field_phonebook_start_date_value']['field'] = 'field_phonebook_start_date_value';
  $handler->display->display_options['sorts']['field_phonebook_start_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'phonebook' => 'phonebook',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['new_colleagues'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('View panes'),
  );
  $export['new_colleagues'] = $view;

  return $export;
}
