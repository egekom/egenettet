<?php
/**
 * @file
 * features_node_view_variants.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function features_node_view_variants_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Article page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article_page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'middle2' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ec3d0603-b9c2-48cc-b9b2-701301d320f4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__article_page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c39b47db-1268-460d-958f-3b2c4afd06da';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-topic_pages_menu_two_levels';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c39b47db-1268-460d-958f-3b2c4afd06da';
  $display->content['new-c39b47db-1268-460d-958f-3b2c4afd06da'] = $pane;
  $display->panels['first'][0] = 'new-c39b47db-1268-460d-958f-3b2c4afd06da';
  $pane = new stdClass();
  $pane->pid = 'new-a9ffa839-ff34-4281-896b-4c3b0d3482e0';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a9ffa839-ff34-4281-896b-4c3b0d3482e0';
  $display->content['new-a9ffa839-ff34-4281-896b-4c3b0d3482e0'] = $pane;
  $display->panels['fourth'][0] = 'new-a9ffa839-ff34-4281-896b-4c3b0d3482e0';
  $pane = new stdClass();
  $pane->pid = 'new-2f2fb479-e210-4c0c-896a-935c59c9c2a4';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_alfresco_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'cmis_field_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Dokumenter',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f2fb479-e210-4c0c-896a-935c59c9c2a4';
  $display->content['new-2f2fb479-e210-4c0c-896a-935c59c9c2a4'] = $pane;
  $display->panels['fourth'][1] = 'new-2f2fb479-e210-4c0c-896a-935c59c9c2a4';
  $pane = new stdClass();
  $pane->pid = 'new-81743501-3301-45cd-9acd-557127c8d95b';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'default',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '81743501-3301-45cd-9acd-557127c8d95b';
  $display->content['new-81743501-3301-45cd-9acd-557127c8d95b'] = $pane;
  $display->panels['fourth'][2] = 'new-81743501-3301-45cd-9acd-557127c8d95b';
  $pane = new stdClass();
  $pane->pid = 'new-ab67eb47-8d0a-4162-b64b-9820722d8d36';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_article_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ab67eb47-8d0a-4162-b64b-9820722d8d36';
  $display->content['new-ab67eb47-8d0a-4162-b64b-9820722d8d36'] = $pane;
  $display->panels['fourth'][3] = 'new-ab67eb47-8d0a-4162-b64b-9820722d8d36';
  $pane = new stdClass();
  $pane->pid = 'new-3b315e19-98c1-4a87-bedd-4a61fe80f760';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b315e19-98c1-4a87-bedd-4a61fe80f760';
  $display->content['new-3b315e19-98c1-4a87-bedd-4a61fe80f760'] = $pane;
  $display->panels['middle'][0] = 'new-3b315e19-98c1-4a87-bedd-4a61fe80f760';
  $pane = new stdClass();
  $pane->pid = 'new-764d9048-4317-4c68-8e8f-4090b1f839e5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '764d9048-4317-4c68-8e8f-4090b1f839e5';
  $display->content['new-764d9048-4317-4c68-8e8f-4090b1f839e5'] = $pane;
  $display->panels['middle'][1] = 'new-764d9048-4317-4c68-8e8f-4090b1f839e5';
  $pane = new stdClass();
  $pane->pid = 'new-9bcd954b-2177-475f-9159-8654c4dff768';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9bcd954b-2177-475f-9159-8654c4dff768';
  $display->content['new-9bcd954b-2177-475f-9159-8654c4dff768'] = $pane;
  $display->panels['middle'][2] = 'new-9bcd954b-2177-475f-9159-8654c4dff768';
  $pane = new stdClass();
  $pane->pid = 'new-dc2588aa-b2a0-4169-bee7-163ad0eaa3dc';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dc2588aa-b2a0-4169-bee7-163ad0eaa3dc';
  $display->content['new-dc2588aa-b2a0-4169-bee7-163ad0eaa3dc'] = $pane;
  $display->panels['middle'][3] = 'new-dc2588aa-b2a0-4169-bee7-163ad0eaa3dc';
  $pane = new stdClass();
  $pane->pid = 'new-9638dd97-f03c-41f2-8194-04512da7dfa3';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9638dd97-f03c-41f2-8194-04512da7dfa3';
  $display->content['new-9638dd97-f03c-41f2-8194-04512da7dfa3'] = $pane;
  $display->panels['middle'][4] = 'new-9638dd97-f03c-41f2-8194-04512da7dfa3';
  $pane = new stdClass();
  $pane->pid = 'new-73b20707-f357-444b-a816-a0019a0f8a79';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '73b20707-f357-444b-a816-a0019a0f8a79';
  $display->content['new-73b20707-f357-444b-a816-a0019a0f8a79'] = $pane;
  $display->panels['middle'][5] = 'new-73b20707-f357-444b-a816-a0019a0f8a79';
  $pane = new stdClass();
  $pane->pid = 'new-38e55707-2ceb-4d47-ae38-58b05fcdb6bd';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_agreements';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Aftaler og mere her',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '38e55707-2ceb-4d47-ae38-58b05fcdb6bd';
  $display->content['new-38e55707-2ceb-4d47-ae38-58b05fcdb6bd'] = $pane;
  $display->panels['middle'][6] = 'new-38e55707-2ceb-4d47-ae38-58b05fcdb6bd';
  $pane = new stdClass();
  $pane->pid = 'new-52ab6cfd-c660-434b-b2a9-5ca4e19706c8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'agreements_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_show_agreements_list',
        'settings' => array(
          'field_show_agreements_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_agreements_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '52ab6cfd-c660-434b-b2a9-5ca4e19706c8';
  $display->content['new-52ab6cfd-c660-434b-b2a9-5ca4e19706c8'] = $pane;
  $display->panels['middle'][7] = 'new-52ab6cfd-c660-434b-b2a9-5ca4e19706c8';
  $pane = new stdClass();
  $pane->pid = 'new-194cb8a6-32d9-4bde-9d67-4cf9697fb69c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_faq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'SOS og mere her',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '194cb8a6-32d9-4bde-9d67-4cf9697fb69c';
  $display->content['new-194cb8a6-32d9-4bde-9d67-4cf9697fb69c'] = $pane;
  $display->panels['middle'][8] = 'new-194cb8a6-32d9-4bde-9d67-4cf9697fb69c';
  $pane = new stdClass();
  $pane->pid = 'new-918799a9-1a32-4dce-9bb8-e10dbe254440';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:article:field_show_faq_list',
        'settings' => array(
          'field_show_faq_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_faq_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '918799a9-1a32-4dce-9bb8-e10dbe254440';
  $display->content['new-918799a9-1a32-4dce-9bb8-e10dbe254440'] = $pane;
  $display->panels['middle'][9] = 'new-918799a9-1a32-4dce-9bb8-e10dbe254440';
  $pane = new stdClass();
  $pane->pid = 'new-90077308-7179-45d1-ad2b-b2b5cb6ef37b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontaktperson',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '90077308-7179-45d1-ad2b-b2b5cb6ef37b';
  $display->content['new-90077308-7179-45d1-ad2b-b2b5cb6ef37b'] = $pane;
  $display->panels['middle'][10] = 'new-90077308-7179-45d1-ad2b-b2b5cb6ef37b';
  $pane = new stdClass();
  $pane->pid = 'new-08617d7a-88e9-49cd-8d11-b52af891a80b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '08617d7a-88e9-49cd-8d11-b52af891a80b';
  $display->content['new-08617d7a-88e9-49cd-8d11-b52af891a80b'] = $pane;
  $display->panels['middle'][11] = 'new-08617d7a-88e9-49cd-8d11-b52af891a80b';
  $pane = new stdClass();
  $pane->pid = 'new-9776ccf5-e090-4585-9bd7-206300b1e3d2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '9776ccf5-e090-4585-9bd7-206300b1e3d2';
  $display->content['new-9776ccf5-e090-4585-9bd7-206300b1e3d2'] = $pane;
  $display->panels['middle'][12] = 'new-9776ccf5-e090-4585-9bd7-206300b1e3d2';
  $pane = new stdClass();
  $pane->pid = 'new-5f23a10b-9d82-46df-b4b6-162f79270ffd';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'subscriptions_ui-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '5f23a10b-9d82-46df-b4b6-162f79270ffd';
  $display->content['new-5f23a10b-9d82-46df-b4b6-162f79270ffd'] = $pane;
  $display->panels['middle'][13] = 'new-5f23a10b-9d82-46df-b4b6-162f79270ffd';
  $pane = new stdClass();
  $pane->pid = 'new-9df919dc-76ff-4c95-a450-f56be4b87c3f';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '9df919dc-76ff-4c95-a450-f56be4b87c3f';
  $display->content['new-9df919dc-76ff-4c95-a450-f56be4b87c3f'] = $pane;
  $display->panels['middle'][14] = 'new-9df919dc-76ff-4c95-a450-f56be4b87c3f';
  $pane = new stdClass();
  $pane->pid = 'new-27e68bc5-88bb-49df-9800-dc6daf2ed50d';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '27e68bc5-88bb-49df-9800-dc6daf2ed50d';
  $display->content['new-27e68bc5-88bb-49df-9800-dc6daf2ed50d'] = $pane;
  $display->panels['middle'][15] = 'new-27e68bc5-88bb-49df-9800-dc6daf2ed50d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article_page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__editorial_event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Editorial event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from User (on User: Phonebook [field_phonebook])',
        'keyword' => 'node',
        'name' => 'entity_from_field:field_phonebook-user-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_schema:uid-node-user_1',
        'id' => 1,
      ),
    ),
    'name' => 'editorial_event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '60e4a5e9-b41d-44b9-96c4-0504d61a694f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__editorial_event';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cb482c61-c995-492e-ab29-89a949b2452c';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-news_events_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb482c61-c995-492e-ab29-89a949b2452c';
  $display->content['new-cb482c61-c995-492e-ab29-89a949b2452c'] = $pane;
  $display->panels['first'][0] = 'new-cb482c61-c995-492e-ab29-89a949b2452c';
  $pane = new stdClass();
  $pane->pid = 'new-96c3f561-7c00-4a30-ba40-af107e10efb7';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96c3f561-7c00-4a30-ba40-af107e10efb7';
  $display->content['new-96c3f561-7c00-4a30-ba40-af107e10efb7'] = $pane;
  $display->panels['fourth'][0] = 'new-96c3f561-7c00-4a30-ba40-af107e10efb7';
  $pane = new stdClass();
  $pane->pid = 'new-671b5df1-66a5-4fe3-82b2-94f69fb3575f';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_alfresco_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'cmis_field_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Dokumenter',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '671b5df1-66a5-4fe3-82b2-94f69fb3575f';
  $display->content['new-671b5df1-66a5-4fe3-82b2-94f69fb3575f'] = $pane;
  $display->panels['fourth'][1] = 'new-671b5df1-66a5-4fe3-82b2-94f69fb3575f';
  $pane = new stdClass();
  $pane->pid = 'new-94369a1c-2653-490b-b559-799036ddd098';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'default',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94369a1c-2653-490b-b559-799036ddd098';
  $display->content['new-94369a1c-2653-490b-b559-799036ddd098'] = $pane;
  $display->panels['fourth'][2] = 'new-94369a1c-2653-490b-b559-799036ddd098';
  $pane = new stdClass();
  $pane->pid = 'new-ec698240-20e9-4648-b01c-1a449a81fd68';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ec698240-20e9-4648-b01c-1a449a81fd68';
  $display->content['new-ec698240-20e9-4648-b01c-1a449a81fd68'] = $pane;
  $display->panels['middle'][0] = 'new-ec698240-20e9-4648-b01c-1a449a81fd68';
  $pane = new stdClass();
  $pane->pid = 'new-cb0b8610-0124-4494-bcb7-2446a67459f5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cb0b8610-0124-4494-bcb7-2446a67459f5';
  $display->content['new-cb0b8610-0124-4494-bcb7-2446a67459f5'] = $pane;
  $display->panels['middle'][1] = 'new-cb0b8610-0124-4494-bcb7-2446a67459f5';
  $pane = new stdClass();
  $pane->pid = 'new-02ba5f8c-e224-4308-b266-394c2808fa71';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '02ba5f8c-e224-4308-b266-394c2808fa71';
  $display->content['new-02ba5f8c-e224-4308-b266-394c2808fa71'] = $pane;
  $display->panels['middle'][2] = 'new-02ba5f8c-e224-4308-b266-394c2808fa71';
  $pane = new stdClass();
  $pane->pid = 'new-2149338c-5254-426c-a50d-d0e6c72e1bb3';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2149338c-5254-426c-a50d-d0e6c72e1bb3';
  $display->content['new-2149338c-5254-426c-a50d-d0e6c72e1bb3'] = $pane;
  $display->panels['middle'][3] = 'new-2149338c-5254-426c-a50d-d0e6c72e1bb3';
  $pane = new stdClass();
  $pane->pid = 'new-838b8af0-b36e-4446-be16-67e30e3edc64';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '838b8af0-b36e-4446-be16-67e30e3edc64';
  $display->content['new-838b8af0-b36e-4446-be16-67e30e3edc64'] = $pane;
  $display->panels['middle'][4] = 'new-838b8af0-b36e-4446-be16-67e30e3edc64';
  $pane = new stdClass();
  $pane->pid = 'new-d0d73427-6ffb-47b6-b405-47b39eaed3c3';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd0d73427-6ffb-47b6-b405-47b39eaed3c3';
  $display->content['new-d0d73427-6ffb-47b6-b405-47b39eaed3c3'] = $pane;
  $display->panels['middle'][5] = 'new-d0d73427-6ffb-47b6-b405-47b39eaed3c3';
  $pane = new stdClass();
  $pane->pid = 'new-05a797e8-7682-4f06-8781-9a1859f3aee5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_datetime';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'medium',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '05a797e8-7682-4f06-8781-9a1859f3aee5';
  $display->content['new-05a797e8-7682-4f06-8781-9a1859f3aee5'] = $pane;
  $display->panels['middle'][6] = 'new-05a797e8-7682-4f06-8781-9a1859f3aee5';
  $pane = new stdClass();
  $pane->pid = 'new-f7f5a9c6-c791-4023-9d43-d6e386672feb';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_place';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f7f5a9c6-c791-4023-9d43-d6e386672feb';
  $display->content['new-f7f5a9c6-c791-4023-9d43-d6e386672feb'] = $pane;
  $display->panels['middle'][7] = 'new-f7f5a9c6-c791-4023-9d43-d6e386672feb';
  $pane = new stdClass();
  $pane->pid = 'new-b9d42199-dfc8-44b2-bfba-c10c6b9b62c5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_topic_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'b9d42199-dfc8-44b2-bfba-c10c6b9b62c5';
  $display->content['new-b9d42199-dfc8-44b2-bfba-c10c6b9b62c5'] = $pane;
  $display->panels['middle'][8] = 'new-b9d42199-dfc8-44b2-bfba-c10c6b9b62c5';
  $pane = new stdClass();
  $pane->pid = 'new-a8bf66db-1f13-44e9-bc9a-f93da7f43747';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_faq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'a8bf66db-1f13-44e9-bc9a-f93da7f43747';
  $display->content['new-a8bf66db-1f13-44e9-bc9a-f93da7f43747'] = $pane;
  $display->panels['middle'][9] = 'new-a8bf66db-1f13-44e9-bc9a-f93da7f43747';
  $pane = new stdClass();
  $pane->pid = 'new-7ba74c8c-604b-4d56-8f15-8a5ea03e86c5';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:event:field_show_faq_list',
        'settings' => array(
          'field_show_faq_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_faq_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '7ba74c8c-604b-4d56-8f15-8a5ea03e86c5';
  $display->content['new-7ba74c8c-604b-4d56-8f15-8a5ea03e86c5'] = $pane;
  $display->panels['middle'][10] = 'new-7ba74c8c-604b-4d56-8f15-8a5ea03e86c5';
  $pane = new stdClass();
  $pane->pid = 'new-6484f30f-6773-4b5c-8ea9-96860ab85238';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontaktperson',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '6484f30f-6773-4b5c-8ea9-96860ab85238';
  $display->content['new-6484f30f-6773-4b5c-8ea9-96860ab85238'] = $pane;
  $display->panels['middle'][11] = 'new-6484f30f-6773-4b5c-8ea9-96860ab85238';
  $pane = new stdClass();
  $pane->pid = 'new-a7560239-64cb-4a4c-a044-21e3bf5b7355';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'a7560239-64cb-4a4c-a044-21e3bf5b7355';
  $display->content['new-a7560239-64cb-4a4c-a044-21e3bf5b7355'] = $pane;
  $display->panels['middle'][12] = 'new-a7560239-64cb-4a4c-a044-21e3bf5b7355';
  $pane = new stdClass();
  $pane->pid = 'new-0b44e982-8eeb-4512-919c-5434e74ff3b4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '0b44e982-8eeb-4512-919c-5434e74ff3b4';
  $display->content['new-0b44e982-8eeb-4512-919c-5434e74ff3b4'] = $pane;
  $display->panels['middle'][13] = 'new-0b44e982-8eeb-4512-919c-5434e74ff3b4';
  $pane = new stdClass();
  $pane->pid = 'new-60fc7abb-acd3-46e5-8093-1009b2f5185e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'subscriptions_ui-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '60fc7abb-acd3-46e5-8093-1009b2f5185e';
  $display->content['new-60fc7abb-acd3-46e5-8093-1009b2f5185e'] = $pane;
  $display->panels['middle'][14] = 'new-60fc7abb-acd3-46e5-8093-1009b2f5185e';
  $pane = new stdClass();
  $pane->pid = 'new-ded8f5c9-f980-49d4-92de-22e0ec036fb4';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'ded8f5c9-f980-49d4-92de-22e0ec036fb4';
  $display->content['new-ded8f5c9-f980-49d4-92de-22e0ec036fb4'] = $pane;
  $display->panels['middle'][15] = 'new-ded8f5c9-f980-49d4-92de-22e0ec036fb4';
  $pane = new stdClass();
  $pane->pid = 'new-bfa60cb3-3f99-4229-bb52-8e45e581386f';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'bfa60cb3-3f99-4229-bb52-8e45e581386f';
  $display->content['new-bfa60cb3-3f99-4229-bb52-8e45e581386f'] = $pane;
  $display->panels['middle'][16] = 'new-bfa60cb3-3f99-4229-bb52-8e45e581386f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__editorial_event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__editorial_news';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Editorial news',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from User (on User: Phonebook [field_phonebook])',
        'keyword' => 'node',
        'name' => 'entity_from_field:field_phonebook-user-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_schema:uid-node-user_1',
        'id' => 1,
      ),
    ),
    'name' => 'editorial_news',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'editorial_news' => 'editorial_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1fa6b909-bace-4edd-b053-fe3da31839c9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__editorial_news';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7235d307-718d-4f7f-b0eb-6e79c2e31929';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-news_events_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7235d307-718d-4f7f-b0eb-6e79c2e31929';
  $display->content['new-7235d307-718d-4f7f-b0eb-6e79c2e31929'] = $pane;
  $display->panels['first'][0] = 'new-7235d307-718d-4f7f-b0eb-6e79c2e31929';
  $pane = new stdClass();
  $pane->pid = 'new-63fcc36d-776c-4ca3-8597-889c7c66433d';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '63fcc36d-776c-4ca3-8597-889c7c66433d';
  $display->content['new-63fcc36d-776c-4ca3-8597-889c7c66433d'] = $pane;
  $display->panels['fourth'][0] = 'new-63fcc36d-776c-4ca3-8597-889c7c66433d';
  $pane = new stdClass();
  $pane->pid = 'new-b4d15bd6-4801-44fa-976a-284fd3bf8538';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_alfresco_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'cmis_field_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Dokumenter',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b4d15bd6-4801-44fa-976a-284fd3bf8538';
  $display->content['new-b4d15bd6-4801-44fa-976a-284fd3bf8538'] = $pane;
  $display->panels['fourth'][1] = 'new-b4d15bd6-4801-44fa-976a-284fd3bf8538';
  $pane = new stdClass();
  $pane->pid = 'new-a7aac073-701e-4850-92db-81b3ae6485c1';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'default',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a7aac073-701e-4850-92db-81b3ae6485c1';
  $display->content['new-a7aac073-701e-4850-92db-81b3ae6485c1'] = $pane;
  $display->panels['fourth'][2] = 'new-a7aac073-701e-4850-92db-81b3ae6485c1';
  $pane = new stdClass();
  $pane->pid = 'new-4b0c62f4-f8fd-44a9-a7e5-31f731ced59c';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4b0c62f4-f8fd-44a9-a7e5-31f731ced59c';
  $display->content['new-4b0c62f4-f8fd-44a9-a7e5-31f731ced59c'] = $pane;
  $display->panels['middle'][0] = 'new-4b0c62f4-f8fd-44a9-a7e5-31f731ced59c';
  $pane = new stdClass();
  $pane->pid = 'new-dc4986fa-e8bd-4409-83e2-56f25e66c653';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc4986fa-e8bd-4409-83e2-56f25e66c653';
  $display->content['new-dc4986fa-e8bd-4409-83e2-56f25e66c653'] = $pane;
  $display->panels['middle'][1] = 'new-dc4986fa-e8bd-4409-83e2-56f25e66c653';
  $pane = new stdClass();
  $pane->pid = 'new-a15da057-f50a-4cb1-92ee-a97ef88ff560';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a15da057-f50a-4cb1-92ee-a97ef88ff560';
  $display->content['new-a15da057-f50a-4cb1-92ee-a97ef88ff560'] = $pane;
  $display->panels['middle'][2] = 'new-a15da057-f50a-4cb1-92ee-a97ef88ff560';
  $pane = new stdClass();
  $pane->pid = 'new-79fa0e53-4727-4207-9686-871f9fe5310f';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '79fa0e53-4727-4207-9686-871f9fe5310f';
  $display->content['new-79fa0e53-4727-4207-9686-871f9fe5310f'] = $pane;
  $display->panels['middle'][3] = 'new-79fa0e53-4727-4207-9686-871f9fe5310f';
  $pane = new stdClass();
  $pane->pid = 'new-a8a8672c-e5c2-4c94-b170-c3d41f02de3d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a8a8672c-e5c2-4c94-b170-c3d41f02de3d';
  $display->content['new-a8a8672c-e5c2-4c94-b170-c3d41f02de3d'] = $pane;
  $display->panels['middle'][4] = 'new-a8a8672c-e5c2-4c94-b170-c3d41f02de3d';
  $pane = new stdClass();
  $pane->pid = 'new-2e198745-359f-4bb6-b8f9-ccd7f92d094e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2e198745-359f-4bb6-b8f9-ccd7f92d094e';
  $display->content['new-2e198745-359f-4bb6-b8f9-ccd7f92d094e'] = $pane;
  $display->panels['middle'][5] = 'new-2e198745-359f-4bb6-b8f9-ccd7f92d094e';
  $pane = new stdClass();
  $pane->pid = 'new-0b414536-069a-4099-a578-afb7c3ca90d5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_faq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0b414536-069a-4099-a578-afb7c3ca90d5';
  $display->content['new-0b414536-069a-4099-a578-afb7c3ca90d5'] = $pane;
  $display->panels['middle'][6] = 'new-0b414536-069a-4099-a578-afb7c3ca90d5';
  $pane = new stdClass();
  $pane->pid = 'new-851eaab3-b2cb-4fe1-b1a0-a0b2bc2e3017';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:editorial_news:field_show_faq_list',
        'settings' => array(
          'field_show_faq_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_faq_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '851eaab3-b2cb-4fe1-b1a0-a0b2bc2e3017';
  $display->content['new-851eaab3-b2cb-4fe1-b1a0-a0b2bc2e3017'] = $pane;
  $display->panels['middle'][7] = 'new-851eaab3-b2cb-4fe1-b1a0-a0b2bc2e3017';
  $pane = new stdClass();
  $pane->pid = 'new-d578623a-e0c0-4df0-8bde-56d9c92926c2';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontaktperson',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd578623a-e0c0-4df0-8bde-56d9c92926c2';
  $display->content['new-d578623a-e0c0-4df0-8bde-56d9c92926c2'] = $pane;
  $display->panels['middle'][8] = 'new-d578623a-e0c0-4df0-8bde-56d9c92926c2';
  $pane = new stdClass();
  $pane->pid = 'new-0920f629-ed13-4bdb-8f2d-6dd7e5b85eb6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '0920f629-ed13-4bdb-8f2d-6dd7e5b85eb6';
  $display->content['new-0920f629-ed13-4bdb-8f2d-6dd7e5b85eb6'] = $pane;
  $display->panels['middle'][9] = 'new-0920f629-ed13-4bdb-8f2d-6dd7e5b85eb6';
  $pane = new stdClass();
  $pane->pid = 'new-67fcd4cc-4e2d-479a-ab65-0f574b600521';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '67fcd4cc-4e2d-479a-ab65-0f574b600521';
  $display->content['new-67fcd4cc-4e2d-479a-ab65-0f574b600521'] = $pane;
  $display->panels['middle'][10] = 'new-67fcd4cc-4e2d-479a-ab65-0f574b600521';
  $pane = new stdClass();
  $pane->pid = 'new-62dab064-ac83-4af4-bb19-b0292fc7a0cb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'subscriptions_ui-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '62dab064-ac83-4af4-bb19-b0292fc7a0cb';
  $display->content['new-62dab064-ac83-4af4-bb19-b0292fc7a0cb'] = $pane;
  $display->panels['middle'][11] = 'new-62dab064-ac83-4af4-bb19-b0292fc7a0cb';
  $pane = new stdClass();
  $pane->pid = 'new-279c46c4-0858-42d2-a83d-b51aa6cb77f8';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '279c46c4-0858-42d2-a83d-b51aa6cb77f8';
  $display->content['new-279c46c4-0858-42d2-a83d-b51aa6cb77f8'] = $pane;
  $display->panels['middle'][12] = 'new-279c46c4-0858-42d2-a83d-b51aa6cb77f8';
  $pane = new stdClass();
  $pane->pid = 'new-b599948c-47b1-4fa7-ad7a-a69005f76924';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '0',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'b599948c-47b1-4fa7-ad7a-a69005f76924';
  $display->content['new-b599948c-47b1-4fa7-ad7a-a69005f76924'] = $pane;
  $display->panels['middle'][13] = 'new-b599948c-47b1-4fa7-ad7a-a69005f76924';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__editorial_news'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__phonebook';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Phonebook',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'phonebook',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'phonebook' => 'phonebook',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_50_25_tworows';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_top' => NULL,
      'left_one' => NULL,
      'left_two' => NULL,
      'left_three' => NULL,
      'left_four' => NULL,
      'left_bottom' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_one_2' => NULL,
      'left_two_2' => NULL,
      'top_left' => NULL,
      'top_middle' => NULL,
      'top_right' => NULL,
      'bottom_left' => NULL,
      'bottom_middle' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4d634130-c546-4dec-ba68-5e42e395cdcb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__phonebook';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c4b7427e-2ccc-4972-8872-ff0f48338ccb';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_work_assignments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c4b7427e-2ccc-4972-8872-ff0f48338ccb';
  $display->content['new-c4b7427e-2ccc-4972-8872-ff0f48338ccb'] = $pane;
  $display->panels['bottom_middle'][0] = 'new-c4b7427e-2ccc-4972-8872-ff0f48338ccb';
  $pane = new stdClass();
  $pane->pid = 'new-e51c09bf-dd87-4481-9c90-06bfbe9f322e';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_work_place';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'ds_taxonomy_view_mode',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e51c09bf-dd87-4481-9c90-06bfbe9f322e';
  $display->content['new-e51c09bf-dd87-4481-9c90-06bfbe9f322e'] = $pane;
  $display->panels['bottom_middle'][1] = 'new-e51c09bf-dd87-4481-9c90-06bfbe9f322e';
  $pane = new stdClass();
  $pane->pid = 'new-b8046dad-51db-4f29-87ca-892549481ffd';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_floor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Floor',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b8046dad-51db-4f29-87ca-892549481ffd';
  $display->content['new-b8046dad-51db-4f29-87ca-892549481ffd'] = $pane;
  $display->panels['bottom_middle'][2] = 'new-b8046dad-51db-4f29-87ca-892549481ffd';
  $pane = new stdClass();
  $pane->pid = 'new-ca827811-4eaa-4e66-b53a-9e7969f8b20e';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_room_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ca827811-4eaa-4e66-b53a-9e7969f8b20e';
  $display->content['new-ca827811-4eaa-4e66-b53a-9e7969f8b20e'] = $pane;
  $display->panels['bottom_middle'][3] = 'new-ca827811-4eaa-4e66-b53a-9e7969f8b20e';
  $pane = new stdClass();
  $pane->pid = 'new-de2ad8c4-291c-4bbc-aae1-7b667e2a7514';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_desk_id';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'de2ad8c4-291c-4bbc-aae1-7b667e2a7514';
  $display->content['new-de2ad8c4-291c-4bbc-aae1-7b667e2a7514'] = $pane;
  $display->panels['bottom_middle'][4] = 'new-de2ad8c4-291c-4bbc-aae1-7b667e2a7514';
  $pane = new stdClass();
  $pane->pid = 'new-1eea54bb-4798-45b1-ab5f-974a64bd94a5';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_work_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1eea54bb-4798-45b1-ab5f-974a64bd94a5';
  $display->content['new-1eea54bb-4798-45b1-ab5f-974a64bd94a5'] = $pane;
  $display->panels['bottom_middle'][5] = 'new-1eea54bb-4798-45b1-ab5f-974a64bd94a5';
  $pane = new stdClass();
  $pane->pid = 'new-685f23b8-1e95-484c-96f1-361c93725049';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_birthday';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'medium',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '685f23b8-1e95-484c-96f1-361c93725049';
  $display->content['new-685f23b8-1e95-484c-96f1-361c93725049'] = $pane;
  $display->panels['bottom_middle'][6] = 'new-685f23b8-1e95-484c-96f1-361c93725049';
  $pane = new stdClass();
  $pane->pid = 'new-126e52a0-9672-48ed-8227-811a334c3164';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_user';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'default',
      'links' => 1,
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '126e52a0-9672-48ed-8227-811a334c3164';
  $display->content['new-126e52a0-9672-48ed-8227-811a334c3164'] = $pane;
  $display->panels['bottom_middle'][7] = 'new-126e52a0-9672-48ed-8227-811a334c3164';
  $pane = new stdClass();
  $pane->pid = 'new-60bd5f67-ff0e-4eee-939c-f9d20bb215dd';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_organizational_unit';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '60bd5f67-ff0e-4eee-939c-f9d20bb215dd';
  $display->content['new-60bd5f67-ff0e-4eee-939c-f9d20bb215dd'] = $pane;
  $display->panels['bottom_middle'][8] = 'new-60bd5f67-ff0e-4eee-939c-f9d20bb215dd';
  $pane = new stdClass();
  $pane->pid = 'new-225782f5-1054-4ad9-a5cc-77562d8f79b9';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_contact_id';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '225782f5-1054-4ad9-a5cc-77562d8f79b9';
  $display->content['new-225782f5-1054-4ad9-a5cc-77562d8f79b9'] = $pane;
  $display->panels['bottom_middle'][9] = 'new-225782f5-1054-4ad9-a5cc-77562d8f79b9';
  $pane = new stdClass();
  $pane->pid = 'new-d1b06606-0812-41af-a10d-25f35ded9382';
  $pane->panel = 'bottom_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_competences';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'd1b06606-0812-41af-a10d-25f35ded9382';
  $display->content['new-d1b06606-0812-41af-a10d-25f35ded9382'] = $pane;
  $display->panels['bottom_middle'][10] = 'new-d1b06606-0812-41af-a10d-25f35ded9382';
  $pane = new stdClass();
  $pane->pid = 'new-1eb89acd-8e31-492e-827f-db35d6910794';
  $pane->panel = 'top_left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'contact_image_big',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'phone-book-image-big',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1eb89acd-8e31-492e-827f-db35d6910794';
  $display->content['new-1eb89acd-8e31-492e-827f-db35d6910794'] = $pane;
  $display->panels['top_left'][0] = 'new-1eb89acd-8e31-492e-827f-db35d6910794';
  $pane = new stdClass();
  $pane->pid = 'new-1c97e6d9-19c7-474d-9047-e02a195901f1';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'contact_image_small',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'phone-book-image-small',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c97e6d9-19c7-474d-9047-e02a195901f1';
  $display->content['new-1c97e6d9-19c7-474d-9047-e02a195901f1'] = $pane;
  $display->panels['top_middle'][0] = 'new-1c97e6d9-19c7-474d-9047-e02a195901f1';
  $pane = new stdClass();
  $pane->pid = 'new-6a3dd7fe-a7c8-439e-911c-025e6e1955df';
  $pane->panel = 'top_middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a3dd7fe-a7c8-439e-911c-025e6e1955df';
  $display->content['new-6a3dd7fe-a7c8-439e-911c-025e6e1955df'] = $pane;
  $display->panels['top_middle'][1] = 'new-6a3dd7fe-a7c8-439e-911c-025e6e1955df';
  $pane = new stdClass();
  $pane->pid = 'new-57cc856a-4f71-451e-84d2-430b753e991e';
  $pane->panel = 'top_middle';
  $pane->type = 'flag_link';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'flag_name' => 'favorite_colleagues',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '57cc856a-4f71-451e-84d2-430b753e991e';
  $display->content['new-57cc856a-4f71-451e-84d2-430b753e991e'] = $pane;
  $display->panels['top_middle'][2] = 'new-57cc856a-4f71-451e-84d2-430b753e991e';
  $pane = new stdClass();
  $pane->pid = 'new-7e3a1c05-5bbb-4cae-bdcb-88b0ad6f8d37';
  $pane->panel = 'top_middle';
  $pane->type = 'flag_link';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'flag_name' => 'bookmarks',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7e3a1c05-5bbb-4cae-bdcb-88b0ad6f8d37';
  $display->content['new-7e3a1c05-5bbb-4cae-bdcb-88b0ad6f8d37'] = $pane;
  $display->panels['top_middle'][3] = 'new-7e3a1c05-5bbb-4cae-bdcb-88b0ad6f8d37';
  $pane = new stdClass();
  $pane->pid = 'new-5668070c-c5ab-480c-9e8d-f51fd1ef6834';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_position';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5668070c-c5ab-480c-9e8d-f51fd1ef6834';
  $display->content['new-5668070c-c5ab-480c-9e8d-f51fd1ef6834'] = $pane;
  $display->panels['top_middle'][4] = 'new-5668070c-c5ab-480c-9e8d-f51fd1ef6834';
  $pane = new stdClass();
  $pane->pid = 'new-34bcbe84-1923-465a-9ccc-08d7bee6ea8d';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_department';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '34bcbe84-1923-465a-9ccc-08d7bee6ea8d';
  $display->content['new-34bcbe84-1923-465a-9ccc-08d7bee6ea8d'] = $pane;
  $display->panels['top_middle'][5] = 'new-34bcbe84-1923-465a-9ccc-08d7bee6ea8d';
  $pane = new stdClass();
  $pane->pid = 'new-64e16f0c-777a-4eeb-9044-5047254902d7';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_unit';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '64e16f0c-777a-4eeb-9044-5047254902d7';
  $display->content['new-64e16f0c-777a-4eeb-9044-5047254902d7'] = $pane;
  $display->panels['top_middle'][6] = 'new-64e16f0c-777a-4eeb-9044-5047254902d7';
  $pane = new stdClass();
  $pane->pid = 'new-31ea3001-90d3-44a0-849b-8950930ecac8';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phone_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '31ea3001-90d3-44a0-849b-8950930ecac8';
  $display->content['new-31ea3001-90d3-44a0-849b-8950930ecac8'] = $pane;
  $display->panels['top_middle'][7] = 'new-31ea3001-90d3-44a0-849b-8950930ecac8';
  $pane = new stdClass();
  $pane->pid = 'new-e6b858a7-66af-4417-b97e-69cbabc90f06';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_local_phone_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e6b858a7-66af-4417-b97e-69cbabc90f06';
  $display->content['new-e6b858a7-66af-4417-b97e-69cbabc90f06'] = $pane;
  $display->panels['top_middle'][8] = 'new-e6b858a7-66af-4417-b97e-69cbabc90f06';
  $pane = new stdClass();
  $pane->pid = 'new-47b40370-7fc6-4efd-bf34-a3fb12721940';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mobile_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => ' ',
      'prefix_suffix' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '47b40370-7fc6-4efd-bf34-a3fb12721940';
  $display->content['new-47b40370-7fc6-4efd-bf34-a3fb12721940'] = $pane;
  $display->panels['top_middle'][9] = 'new-47b40370-7fc6-4efd-bf34-a3fb12721940';
  $pane = new stdClass();
  $pane->pid = 'new-ea7e9c19-1fd2-4d2b-852c-2f9f4baa2605';
  $pane->panel = 'top_middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'ea7e9c19-1fd2-4d2b-852c-2f9f4baa2605';
  $display->content['new-ea7e9c19-1fd2-4d2b-852c-2f9f4baa2605'] = $pane;
  $display->panels['top_middle'][10] = 'new-ea7e9c19-1fd2-4d2b-852c-2f9f4baa2605';
  $pane = new stdClass();
  $pane->pid = 'new-8b7934d5-d584-46ab-b243-0d5152c68b9c';
  $pane->panel = 'top_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_read_phonebook';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b7934d5-d584-46ab-b243-0d5152c68b9c';
  $display->content['new-8b7934d5-d584-46ab-b243-0d5152c68b9c'] = $pane;
  $display->panels['top_right'][0] = 'new-8b7934d5-d584-46ab-b243-0d5152c68b9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__phonebook'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__short_event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Short event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from User (on User: Phonebook [field_phonebook])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_phonebook-user-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_schema:uid-node-user_1',
        'id' => 1,
      ),
    ),
    'name' => 'short_event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'short_event' => 'short_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0c2574aa-482e-4f4f-a17c-5777874b6089';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__short_event';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-25439398-f797-449c-914b-dda5ad9ff7f9';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-news_events_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '25439398-f797-449c-914b-dda5ad9ff7f9';
  $display->content['new-25439398-f797-449c-914b-dda5ad9ff7f9'] = $pane;
  $display->panels['first'][0] = 'new-25439398-f797-449c-914b-dda5ad9ff7f9';
  $pane = new stdClass();
  $pane->pid = 'new-4dc94cff-ca90-4d95-9712-2b723822ba11';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4dc94cff-ca90-4d95-9712-2b723822ba11';
  $display->content['new-4dc94cff-ca90-4d95-9712-2b723822ba11'] = $pane;
  $display->panels['fourth'][0] = 'new-4dc94cff-ca90-4d95-9712-2b723822ba11';
  $pane = new stdClass();
  $pane->pid = 'new-93db35c1-ea36-4b74-b2b1-4b9798920625';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '93db35c1-ea36-4b74-b2b1-4b9798920625';
  $display->content['new-93db35c1-ea36-4b74-b2b1-4b9798920625'] = $pane;
  $display->panels['middle'][0] = 'new-93db35c1-ea36-4b74-b2b1-4b9798920625';
  $pane = new stdClass();
  $pane->pid = 'new-b9cbeaf8-9961-4aad-9a37-35936d848848';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b9cbeaf8-9961-4aad-9a37-35936d848848';
  $display->content['new-b9cbeaf8-9961-4aad-9a37-35936d848848'] = $pane;
  $display->panels['middle'][1] = 'new-b9cbeaf8-9961-4aad-9a37-35936d848848';
  $pane = new stdClass();
  $pane->pid = 'new-44d3ace4-f8f6-432c-a71d-5ee6ae18a6fc';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44d3ace4-f8f6-432c-a71d-5ee6ae18a6fc';
  $display->content['new-44d3ace4-f8f6-432c-a71d-5ee6ae18a6fc'] = $pane;
  $display->panels['middle'][2] = 'new-44d3ace4-f8f6-432c-a71d-5ee6ae18a6fc';
  $pane = new stdClass();
  $pane->pid = 'new-39319030-7dbd-4539-bb77-6da6d9fb5a98';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_datetime';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'medium',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '39319030-7dbd-4539-bb77-6da6d9fb5a98';
  $display->content['new-39319030-7dbd-4539-bb77-6da6d9fb5a98'] = $pane;
  $display->panels['middle'][3] = 'new-39319030-7dbd-4539-bb77-6da6d9fb5a98';
  $pane = new stdClass();
  $pane->pid = 'new-fc2b0240-3fc4-47b7-82ef-288767e1de1c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_place';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fc2b0240-3fc4-47b7-82ef-288767e1de1c';
  $display->content['new-fc2b0240-3fc4-47b7-82ef-288767e1de1c'] = $pane;
  $display->panels['middle'][4] = 'new-fc2b0240-3fc4-47b7-82ef-288767e1de1c';
  $pane = new stdClass();
  $pane->pid = 'new-1bd3ebe1-de0f-488e-a2c1-6d833c4d7943';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1bd3ebe1-de0f-488e-a2c1-6d833c4d7943';
  $display->content['new-1bd3ebe1-de0f-488e-a2c1-6d833c4d7943'] = $pane;
  $display->panels['middle'][5] = 'new-1bd3ebe1-de0f-488e-a2c1-6d833c4d7943';
  $pane = new stdClass();
  $pane->pid = 'new-aa4a1da2-bb74-436a-b734-bcce6de74c06';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'subscriptions_ui-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'aa4a1da2-bb74-436a-b734-bcce6de74c06';
  $display->content['new-aa4a1da2-bb74-436a-b734-bcce6de74c06'] = $pane;
  $display->panels['middle'][6] = 'new-aa4a1da2-bb74-436a-b734-bcce6de74c06';
  $pane = new stdClass();
  $pane->pid = 'new-49f5a711-f356-4054-8753-e4da9ca74655';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '49f5a711-f356-4054-8753-e4da9ca74655';
  $display->content['new-49f5a711-f356-4054-8753-e4da9ca74655'] = $pane;
  $display->panels['middle'][7] = 'new-49f5a711-f356-4054-8753-e4da9ca74655';
  $pane = new stdClass();
  $pane->pid = 'new-eaa932ad-6dd1-47a9-b94b-e631369bf066';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'eaa932ad-6dd1-47a9-b94b-e631369bf066';
  $display->content['new-eaa932ad-6dd1-47a9-b94b-e631369bf066'] = $pane;
  $display->panels['middle'][8] = 'new-eaa932ad-6dd1-47a9-b94b-e631369bf066';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__short_event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__short_news';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Short news',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from User (on User: Phonebook [field_phonebook])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_phonebook-user-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_schema:uid-node-user_1',
        'id' => 1,
      ),
    ),
    'name' => 'short_news',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'short_news' => 'short_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '341abebb-5961-4a4f-9de8-d66b815695bc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__short_news';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d6d85c3e-b5ed-45cd-92ea-bf659089d278';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-news_events_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd6d85c3e-b5ed-45cd-92ea-bf659089d278';
  $display->content['new-d6d85c3e-b5ed-45cd-92ea-bf659089d278'] = $pane;
  $display->panels['first'][0] = 'new-d6d85c3e-b5ed-45cd-92ea-bf659089d278';
  $pane = new stdClass();
  $pane->pid = 'new-49f7e3c4-3b22-40ee-9e55-19ca71b0a3d1';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '49f7e3c4-3b22-40ee-9e55-19ca71b0a3d1';
  $display->content['new-49f7e3c4-3b22-40ee-9e55-19ca71b0a3d1'] = $pane;
  $display->panels['fourth'][0] = 'new-49f7e3c4-3b22-40ee-9e55-19ca71b0a3d1';
  $pane = new stdClass();
  $pane->pid = 'new-f82af5cf-edb2-4465-a88f-52918692b5a8';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f82af5cf-edb2-4465-a88f-52918692b5a8';
  $display->content['new-f82af5cf-edb2-4465-a88f-52918692b5a8'] = $pane;
  $display->panels['middle'][0] = 'new-f82af5cf-edb2-4465-a88f-52918692b5a8';
  $pane = new stdClass();
  $pane->pid = 'new-08ffb69a-aed6-4e74-90ca-24819a72630d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '08ffb69a-aed6-4e74-90ca-24819a72630d';
  $display->content['new-08ffb69a-aed6-4e74-90ca-24819a72630d'] = $pane;
  $display->panels['middle'][1] = 'new-08ffb69a-aed6-4e74-90ca-24819a72630d';
  $pane = new stdClass();
  $pane->pid = 'new-99767d90-8826-4244-8e87-5144536e55b0';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '99767d90-8826-4244-8e87-5144536e55b0';
  $display->content['new-99767d90-8826-4244-8e87-5144536e55b0'] = $pane;
  $display->panels['middle'][2] = 'new-99767d90-8826-4244-8e87-5144536e55b0';
  $pane = new stdClass();
  $pane->pid = 'new-17788b93-fdd1-4c29-81a1-d0417bbbff60';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '17788b93-fdd1-4c29-81a1-d0417bbbff60';
  $display->content['new-17788b93-fdd1-4c29-81a1-d0417bbbff60'] = $pane;
  $display->panels['middle'][3] = 'new-17788b93-fdd1-4c29-81a1-d0417bbbff60';
  $pane = new stdClass();
  $pane->pid = 'new-44e1a10c-8534-4fd7-8c15-484270bfea19';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '44e1a10c-8534-4fd7-8c15-484270bfea19';
  $display->content['new-44e1a10c-8534-4fd7-8c15-484270bfea19'] = $pane;
  $display->panels['middle'][4] = 'new-44e1a10c-8534-4fd7-8c15-484270bfea19';
  $pane = new stdClass();
  $pane->pid = 'new-1985dff5-5e18-44f5-9e27-319087f755c7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1985dff5-5e18-44f5-9e27-319087f755c7';
  $display->content['new-1985dff5-5e18-44f5-9e27-319087f755c7'] = $pane;
  $display->panels['middle'][5] = 'new-1985dff5-5e18-44f5-9e27-319087f755c7';
  $pane = new stdClass();
  $pane->pid = 'new-cccf07c3-b215-4c75-8f50-f84684c9ea56';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'cccf07c3-b215-4c75-8f50-f84684c9ea56';
  $display->content['new-cccf07c3-b215-4c75-8f50-f84684c9ea56'] = $pane;
  $display->panels['middle'][6] = 'new-cccf07c3-b215-4c75-8f50-f84684c9ea56';
  $pane = new stdClass();
  $pane->pid = 'new-68fa05f3-f6cd-4e74-9d3f-131d5ee75f22';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'subscriptions_ui-0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '68fa05f3-f6cd-4e74-9d3f-131d5ee75f22';
  $display->content['new-68fa05f3-f6cd-4e74-9d3f-131d5ee75f22'] = $pane;
  $display->panels['middle'][7] = 'new-68fa05f3-f6cd-4e74-9d3f-131d5ee75f22';
  $pane = new stdClass();
  $pane->pid = 'new-e451e62d-e5b5-4b94-9c79-c0765ae41158';
  $pane->panel = 'middle';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e451e62d-e5b5-4b94-9c79-c0765ae41158';
  $display->content['new-e451e62d-e5b5-4b94-9c79-c0765ae41158'] = $pane;
  $display->panels['middle'][8] = 'new-e451e62d-e5b5-4b94-9c79-c0765ae41158';
  $pane = new stdClass();
  $pane->pid = 'new-28a040b2-8f26-4ea5-9e6e-e6faf2a90bed';
  $pane->panel = 'middle';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '28a040b2-8f26-4ea5-9e6e-e6faf2a90bed';
  $display->content['new-28a040b2-8f26-4ea5-9e6e-e6faf2a90bed'] = $pane;
  $display->panels['middle'][9] = 'new-28a040b2-8f26-4ea5-9e6e-e6faf2a90bed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__short_news'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__webform';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Webform',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'webform',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels_fourcol_25_center_stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bannerl' => NULL,
      'bannerr' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c84891c9-70ba-4df9-af9c-33e72df61699';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__webform';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7a87b10f-717f-4ef1-b983-5fc78da9bf94';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-news_events_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7a87b10f-717f-4ef1-b983-5fc78da9bf94';
  $display->content['new-7a87b10f-717f-4ef1-b983-5fc78da9bf94'] = $pane;
  $display->panels['first'][0] = 'new-7a87b10f-717f-4ef1-b983-5fc78da9bf94';
  $pane = new stdClass();
  $pane->pid = 'new-e17d498e-b143-49e0-9732-47a01734aa18';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e17d498e-b143-49e0-9732-47a01734aa18';
  $display->content['new-e17d498e-b143-49e0-9732-47a01734aa18'] = $pane;
  $display->panels['fourth'][0] = 'new-e17d498e-b143-49e0-9732-47a01734aa18';
  $pane = new stdClass();
  $pane->pid = 'new-9de87cee-e3b7-464d-9da8-685f25d76216';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_alfresco_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'cmis_field_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Dokumenter',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9de87cee-e3b7-464d-9da8-685f25d76216';
  $display->content['new-9de87cee-e3b7-464d-9da8-685f25d76216'] = $pane;
  $display->panels['fourth'][1] = 'new-9de87cee-e3b7-464d-9da8-685f25d76216';
  $pane = new stdClass();
  $pane->pid = 'new-895c241c-3cb9-4141-9d8f-be9e69b82a2a';
  $pane->panel = 'fourth';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'default',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '895c241c-3cb9-4141-9d8f-be9e69b82a2a';
  $display->content['new-895c241c-3cb9-4141-9d8f-be9e69b82a2a'] = $pane;
  $display->panels['fourth'][2] = 'new-895c241c-3cb9-4141-9d8f-be9e69b82a2a';
  $pane = new stdClass();
  $pane->pid = 'new-1932cfb3-cfc6-4ef1-a64b-06f872381a9e';
  $pane->panel = 'middle';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1932cfb3-cfc6-4ef1-a64b-06f872381a9e';
  $display->content['new-1932cfb3-cfc6-4ef1-a64b-06f872381a9e'] = $pane;
  $display->panels['middle'][0] = 'new-1932cfb3-cfc6-4ef1-a64b-06f872381a9e';
  $pane = new stdClass();
  $pane->pid = 'new-b7505db7-3d4b-4ce9-92c5-f179baab8932';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'edit' => '',
      'delete' => '',
      'add' => '',
      'description' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b7505db7-3d4b-4ce9-92c5-f179baab8932';
  $display->content['new-b7505db7-3d4b-4ce9-92c5-f179baab8932'] = $pane;
  $display->panels['middle'][1] = 'new-b7505db7-3d4b-4ce9-92c5-f179baab8932';
  $pane = new stdClass();
  $pane->pid = 'new-22ccd95a-2bb0-4a17-93e6-1958008d33fe';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '22ccd95a-2bb0-4a17-93e6-1958008d33fe';
  $display->content['new-22ccd95a-2bb0-4a17-93e6-1958008d33fe'] = $pane;
  $display->panels['middle'][2] = 'new-22ccd95a-2bb0-4a17-93e6-1958008d33fe';
  $pane = new stdClass();
  $pane->pid = 'new-0a35faff-ed45-4f80-bebb-513906116735';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0a35faff-ed45-4f80-bebb-513906116735';
  $display->content['new-0a35faff-ed45-4f80-bebb-513906116735'] = $pane;
  $display->panels['middle'][3] = 'new-0a35faff-ed45-4f80-bebb-513906116735';
  $pane = new stdClass();
  $pane->pid = 'new-87ba738f-bb54-4654-be18-87385768e515';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '87ba738f-bb54-4654-be18-87385768e515';
  $display->content['new-87ba738f-bb54-4654-be18-87385768e515'] = $pane;
  $display->panels['middle'][4] = 'new-87ba738f-bb54-4654-be18-87385768e515';
  $pane = new stdClass();
  $pane->pid = 'new-9bb50d24-bc03-4a5d-b921-53599c54b08a';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9bb50d24-bc03-4a5d-b921-53599c54b08a';
  $display->content['new-9bb50d24-bc03-4a5d-b921-53599c54b08a'] = $pane;
  $display->panels['middle'][5] = 'new-9bb50d24-bc03-4a5d-b921-53599c54b08a';
  $pane = new stdClass();
  $pane->pid = 'new-6e1d3fc6-f081-4e9a-9907-5efedb1f8e19';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_faq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'SOS og mere her',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '6e1d3fc6-f081-4e9a-9907-5efedb1f8e19';
  $display->content['new-6e1d3fc6-f081-4e9a-9907-5efedb1f8e19'] = $pane;
  $display->panels['middle'][6] = 'new-6e1d3fc6-f081-4e9a-9907-5efedb1f8e19';
  $pane = new stdClass();
  $pane->pid = 'new-3e537105-0dbe-4d3e-b6a0-e84f071def3f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'faq_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:webform:field_show_faq_list',
        'settings' => array(
          'field_show_faq_list' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_show_faq_list_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '3e537105-0dbe-4d3e-b6a0-e84f071def3f';
  $display->content['new-3e537105-0dbe-4d3e-b6a0-e84f071def3f'] = $pane;
  $display->panels['middle'][7] = 'new-3e537105-0dbe-4d3e-b6a0-e84f071def3f';
  $pane = new stdClass();
  $pane->pid = 'new-4891c710-9e58-4d49-8191-b251b279cc5b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4891c710-9e58-4d49-8191-b251b279cc5b';
  $display->content['new-4891c710-9e58-4d49-8191-b251b279cc5b'] = $pane;
  $display->panels['middle'][8] = 'new-4891c710-9e58-4d49-8191-b251b279cc5b';
  $pane = new stdClass();
  $pane->pid = 'new-fe39cd2f-1f14-40be-b1ac-040a665d057d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_phonebook_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontaktperson',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'fe39cd2f-1f14-40be-b1ac-040a665d057d';
  $display->content['new-fe39cd2f-1f14-40be-b1ac-040a665d057d'] = $pane;
  $display->panels['middle'][9] = 'new-fe39cd2f-1f14-40be-b1ac-040a665d057d';
  $pane = new stdClass();
  $pane->pid = 'new-3e1e9a2b-e92a-4fc0-9de9-2c9854acdffd';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '3e1e9a2b-e92a-4fc0-9de9-2c9854acdffd';
  $display->content['new-3e1e9a2b-e92a-4fc0-9de9-2c9854acdffd'] = $pane;
  $display->panels['middle'][10] = 'new-3e1e9a2b-e92a-4fc0-9de9-2c9854acdffd';
  $pane = new stdClass();
  $pane->pid = 'new-5dd73f51-a9fc-4553-b28c-7746a5076d28';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'last_edited_info-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '5dd73f51-a9fc-4553-b28c-7746a5076d28';
  $display->content['new-5dd73f51-a9fc-4553-b28c-7746a5076d28'] = $pane;
  $display->panels['middle'][11] = 'new-5dd73f51-a9fc-4553-b28c-7746a5076d28';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__webform'] = $handler;

  return $export;
}
