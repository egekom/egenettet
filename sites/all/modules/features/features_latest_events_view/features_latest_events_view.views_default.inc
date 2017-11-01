<?php
/**
 * @file
 * features_latest_events_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_latest_events_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'latest_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kalender';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class=\'ros-link-more\' href=\'/search/events\'>More events</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Dato og tid */
  $handler->display->display_options['fields']['field_datetime_1']['id'] = 'field_datetime_1';
  $handler->display->display_options['fields']['field_datetime_1']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime_1']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime_1']['settings'] = array(
    'format_type' => 'roskilde_only_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Dato og tid */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_datetime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'roskilde_only_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'event-date-month\'>[field_datetime_1] </div>
<div class=\'event-date-day\'>[field_datetime] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'event-date';
  /* Field: Content: Dato og tid */
  $handler->display->display_options['fields']['field_datetime_2']['id'] = 'field_datetime_2';
  $handler->display->display_options['fields']['field_datetime_2']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime_2']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datetime_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_datetime_2']['alter']['text'] = 'kl. [field_datetime_2]';
  $handler->display->display_options['fields']['field_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime_2']['settings'] = array(
    'format_type' => 'egedal_time_formtat',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="event-time">[field_datetime_2] </span>
<div class="event-description">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['sorts']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['sorts']['field_datetime_value']['field'] = 'field_datetime_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'event' => 'event',
    'short_event' => 'short_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    12 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['filters']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['filters']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_datetime_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datetime_value']['default_date'] = 'now-1 year';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class=\'ros-link-more\' href=\'/search/events\'>Se alle</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['pane_category']['name'] = 'Elementer';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Calender */
  $handler = $view->new_display('panel_pane', 'Calender', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[see_all_link]<a class=\'eg-link-add\' href=\'/node/758\'>Indsend event</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen events idag
<a href="/search/events" class="ros-link-more">Se alle</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['sorts']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['sorts']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    12 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['filters']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['filters']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datetime_value']['default_date'] = 'now';
  /* Filter criterion: Content: Center (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['label'] = 'Center (field_unit)';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    22 => 0,
    14 => 0,
    21 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'organisational_unit';
  /* Filter criterion: Content: Topic Category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic Category (field_topic_category)';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['identifier'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['pane_title'] = 'Calender';
  $handler->display->display_options['pane_category']['name'] = 'Elements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Latest events with date */
  $handler = $view->new_display('panel_pane', 'Latest events with date', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[see_all_link]<a class=\'eg-link-add\' href=\'/node/add/short-event\'>Indsend event</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['sorts']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['sorts']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'short_event' => 'short_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    12 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Dato og tid -  start date (field_datetime) */
  $handler->display->display_options['filters']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['filters']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['filters']['field_datetime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_datetime_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datetime_value']['default_date'] = 'now-1 year';
  /* Filter criterion: Content: Center (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['label'] = 'Center (field_unit)';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    22 => 0,
    14 => 0,
    21 => 0,
    24 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'organisational_unit';
  $handler->display->display_options['pane_title'] = 'Local calendar';
  $handler->display->display_options['pane_category']['name'] = 'Elements';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['latest_events'] = $view;

  return $export;
}
