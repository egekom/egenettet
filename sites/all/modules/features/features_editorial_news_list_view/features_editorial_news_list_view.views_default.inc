<?php
/**
 * @file
 * features_editorial_news_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_editorial_news_list_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'editorial_news_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Editorial news list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More news';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class=\'ros-link-more\' href=\'/search/news\'>Se Alle</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'editorial_news' => 'editorial_news',
  );
  /* Filter criterion: Content: Organisatorisk Enhed (field_unit) */
  $handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['label'] = 'Organisational Unit';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid']['group_info']['label'] = 'Unit (field_unit)';
  $handler->display->display_options['filters']['field_unit_tid']['group_info']['identifier'] = 'field_unit_tid';
  $handler->display->display_options['filters']['field_unit_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_unit_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'organisational_unit';
  /* Filter criterion: Content: Topic Category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_topic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic Category';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Egenyheder';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['element_wrapper_class'] = 'views-field-field-date';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'egedal_date_format';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
    'editorial_news' => 'editorial_news',
  );
  /* Filter criterion: Content: Topic Category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_topic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['label'] = 'Topic Category';
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
  /* Filter criterion: Global: Phonebook Unit Field */
  $handler->display->display_options['filters']['filter_by_user_unit']['id'] = 'filter_by_user_unit';
  $handler->display->display_options['filters']['filter_by_user_unit']['table'] = 'views';
  $handler->display->display_options['filters']['filter_by_user_unit']['field'] = 'filter_by_user_unit';
  /* Filter criterion: Content: Published in News views (field_for_approve) */
  $handler->display->display_options['filters']['field_for_approve_value']['id'] = 'field_for_approve_value';
  $handler->display->display_options['filters']['field_for_approve_value']['table'] = 'field_data_field_for_approve';
  $handler->display->display_options['filters']['field_for_approve_value']['field'] = 'field_for_approve_value';
  $handler->display->display_options['filters']['field_for_approve_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_for_approve_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_title'] = 'News';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node_split';
  $handler->display->display_options['row_options']['first_settings'] = array(
    'first_x_value' => '',
    'view_mode' => 'teaser',
    'links' => 0,
    'comments' => 0,
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'News';
  $export['editorial_news_list'] = $view;

  return $export;
}
