<?php
/**
 * @file
 * features_view_agreements_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_view_agreements_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agreements_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agreements List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agreements List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'simple_database_bundles',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: QA */
  $handler->display->display_options['fields']['field_qa']['id'] = 'field_qa';
  $handler->display->display_options['fields']['field_qa']['table'] = 'field_data_field_qa';
  $handler->display->display_options['fields']['field_qa']['field'] = 'field_qa';
  $handler->display->display_options['fields']['field_qa']['label'] = '';
  $handler->display->display_options['fields']['field_qa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qa']['type'] = 'CollectionFormatterAccordion';
  $handler->display->display_options['fields']['field_qa']['settings'] = array(
    'heading' => 'field_title',
    'view_mode' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_qa']['delta_offset'] = '0';
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
    'agreements' => 'agreements',
  );
  /* Filter criterion: Content: Topic Category (field_topic_category) */
  $handler->display->display_options['filters']['field_topic_category_tid']['id'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['table'] = 'field_data_field_topic_category';
  $handler->display->display_options['filters']['field_topic_category_tid']['field'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_topic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['expose']['operator_id'] = 'field_topic_category_tid_op';
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
  $handler->display->display_options['filters']['field_topic_category_tid']['group_info']['label'] = 'Topic Category (field_topic_category)';
  $handler->display->display_options['filters']['field_topic_category_tid']['group_info']['identifier'] = 'field_topic_category_tid';
  $handler->display->display_options['filters']['field_topic_category_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_topic_category_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_topic_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_topic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_category_tid']['vocabulary'] = 'topics';
  $handler->display->display_options['filters']['field_topic_category_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-field views-field-field-title no-result-behavior">
  <h2 class="field-content no-result-content">No results found.</h2>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: QA */
  $handler->display->display_options['fields']['field_qa']['id'] = 'field_qa';
  $handler->display->display_options['fields']['field_qa']['table'] = 'field_data_field_qa';
  $handler->display->display_options['fields']['field_qa']['field'] = 'field_qa';
  $handler->display->display_options['fields']['field_qa']['label'] = '';
  $handler->display->display_options['fields']['field_qa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qa']['type'] = 'CollectionFormatterAccordion';
  $handler->display->display_options['fields']['field_qa']['settings'] = array(
    'heading' => 'field_title',
    'view_mode' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_qa']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'agreements-list';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'topics' => 'topics',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
    'agreements' => 'agreements',
  );
  $handler->display->display_options['pane_category']['name'] = '';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'field_tagged_faqs_value_i18n' => array(
      'type' => 'context',
      'context' => 'entity:node.field_tagged_faqs',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tagged FAQs (field_tagged_faqs) (translated)',
    ),
  );
  $export['agreements_list'] = $view;

  return $export;
}
