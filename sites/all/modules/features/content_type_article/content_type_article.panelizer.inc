<?php
/**
 * @file
 * content_type_article.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_article_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:article:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = 'article-page';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->uuid = '046fba96-b9fa-4d06-b4ab-75e58885fe12';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:article:default:full';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0e2d83f1-14a5-4912-b49b-ef7f88bb0d22';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-topic_pages_menu_two_levels';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e2d83f1-14a5-4912-b49b-ef7f88bb0d22';
  $display->content['new-0e2d83f1-14a5-4912-b49b-ef7f88bb0d22'] = $pane;
  $display->panels['first'][0] = 'new-0e2d83f1-14a5-4912-b49b-ef7f88bb0d22';
  $pane = new stdClass();
  $pane->pid = 'new-74f57344-e880-4e13-8be2-a01039fa0478';
  $pane->panel = 'fourth';
  $pane->type = 'panels_mini';
  $pane->subtype = 'print_bookmark_and_read_laud_but';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
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
  $pane->uuid = '74f57344-e880-4e13-8be2-a01039fa0478';
  $display->content['new-74f57344-e880-4e13-8be2-a01039fa0478'] = $pane;
  $display->panels['fourth'][0] = 'new-74f57344-e880-4e13-8be2-a01039fa0478';
  $pane = new stdClass();
  $pane->pid = 'new-0579bc11-c117-4a22-b80d-1a8eff5fc474';
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
    'context' => 'panelizer',
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
  $pane->uuid = '0579bc11-c117-4a22-b80d-1a8eff5fc474';
  $display->content['new-0579bc11-c117-4a22-b80d-1a8eff5fc474'] = $pane;
  $display->panels['fourth'][1] = 'new-0579bc11-c117-4a22-b80d-1a8eff5fc474';
  $pane = new stdClass();
  $pane->pid = 'new-8bfff6a5-03a8-4929-b159-377d915b3a26';
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
  $pane->uuid = '8bfff6a5-03a8-4929-b159-377d915b3a26';
  $display->content['new-8bfff6a5-03a8-4929-b159-377d915b3a26'] = $pane;
  $display->panels['middle'][0] = 'new-8bfff6a5-03a8-4929-b159-377d915b3a26';
  $pane = new stdClass();
  $pane->pid = 'new-00d8951d-cd50-4856-940d-245db9ce704c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_data';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_view',
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
    'context' => 'panelizer',
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
  $pane->uuid = '00d8951d-cd50-4856-940d-245db9ce704c';
  $display->content['new-00d8951d-cd50-4856-940d-245db9ce704c'] = $pane;
  $display->panels['middle'][1] = 'new-00d8951d-cd50-4856-940d-245db9ce704c';
  $pane = new stdClass();
  $pane->pid = 'new-96269d7b-5595-4003-bd1a-b75720b7ae8f';
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
    'context' => 'panelizer',
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
  $pane->uuid = '96269d7b-5595-4003-bd1a-b75720b7ae8f';
  $display->content['new-96269d7b-5595-4003-bd1a-b75720b7ae8f'] = $pane;
  $display->panels['middle'][2] = 'new-96269d7b-5595-4003-bd1a-b75720b7ae8f';
  $pane = new stdClass();
  $pane->pid = 'new-ee7d45c8-dea1-4cce-995c-3f1477a59639';
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
    'context' => 'panelizer',
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
  $pane->uuid = 'ee7d45c8-dea1-4cce-995c-3f1477a59639';
  $display->content['new-ee7d45c8-dea1-4cce-995c-3f1477a59639'] = $pane;
  $display->panels['middle'][3] = 'new-ee7d45c8-dea1-4cce-995c-3f1477a59639';
  $pane = new stdClass();
  $pane->pid = 'new-763b8d8f-ec41-494f-92ff-044e6b2047f2';
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
    'context' => 'panelizer',
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
  $pane->uuid = '763b8d8f-ec41-494f-92ff-044e6b2047f2';
  $display->content['new-763b8d8f-ec41-494f-92ff-044e6b2047f2'] = $pane;
  $display->panels['middle'][4] = 'new-763b8d8f-ec41-494f-92ff-044e6b2047f2';
  $pane = new stdClass();
  $pane->pid = 'new-34cb5dbc-d7a3-46f7-836f-d5c3782a45a5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_faq';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
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
      'links' => 0,
    ),
    'context' => 'panelizer',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '34cb5dbc-d7a3-46f7-836f-d5c3782a45a5';
  $display->content['new-34cb5dbc-d7a3-46f7-836f-d5c3782a45a5'] = $pane;
  $display->panels['middle'][5] = 'new-34cb5dbc-d7a3-46f7-836f-d5c3782a45a5';
  $pane = new stdClass();
  $pane->pid = 'new-5eb8d83d-9a79-4460-86de-365f26bacdff';
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
    'context' => 'panelizer',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5eb8d83d-9a79-4460-86de-365f26bacdff';
  $display->content['new-5eb8d83d-9a79-4460-86de-365f26bacdff'] = $pane;
  $display->panels['middle'][6] = 'new-5eb8d83d-9a79-4460-86de-365f26bacdff';
  $pane = new stdClass();
  $pane->pid = 'new-8758c59a-0f38-42f5-b1eb-0f2debb91d1f';
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
    'context' => 'panelizer',
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
  $pane->uuid = '8758c59a-0f38-42f5-b1eb-0f2debb91d1f';
  $display->content['new-8758c59a-0f38-42f5-b1eb-0f2debb91d1f'] = $pane;
  $display->panels['middle'][7] = 'new-8758c59a-0f38-42f5-b1eb-0f2debb91d1f';
  $pane = new stdClass();
  $pane->pid = 'new-7bd85260-4347-45c5-96aa-78d7bf77aed4';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7bd85260-4347-45c5-96aa-78d7bf77aed4';
  $display->content['new-7bd85260-4347-45c5-96aa-78d7bf77aed4'] = $pane;
  $display->panels['middle'][8] = 'new-7bd85260-4347-45c5-96aa-78d7bf77aed4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ee7d45c8-dea1-4cce-995c-3f1477a59639';
  $panelizer->display = $display;
  $export['node:article:default:full'] = $panelizer;

  return $export;
}
