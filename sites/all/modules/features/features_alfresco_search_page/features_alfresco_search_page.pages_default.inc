<?php
/**
 * @file
 * features_alfresco_search_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function features_alfresco_search_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_alfresco';
  $page->task = 'page';
  $page->admin_title = 'Search Alfresco';
  $page->admin_description = '';
  $page->path = 'search/documents/!input';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Documents',
    'name' => 'menu-search-pages',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'input' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_alfresco__panel_context_ad1e30e2-8cbc-44a4-a3ca-7eaa6f0a312a';
  $handler->task = 'page';
  $handler->subtask = 'search_alfresco';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'search-alfresco',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'panels_twocol_75_25_top_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9a6d48c6-9335-4510-9214-5df17f7ea8ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed694522-c839-4f79-9db0-39e46989956f';
    $pane->panel = 'left';
    $pane->type = 'cmis_extra_search_orderby';
    $pane->subtype = 'cmis_extra_search_orderby';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Sortér efter',
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-EGzWSJcLJ72iYsYotJFsSMGqBrZ92Qpj7VppJGH1U8A',
      'form_token' => 'kcOjWuQMMOTQ2UR715CaizApugikRWOiLVT5jcha0_k',
      'form_id' => 'cmis_extra_search_orderby_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed694522-c839-4f79-9db0-39e46989956f';
    $display->content['new-ed694522-c839-4f79-9db0-39e46989956f'] = $pane;
    $display->panels['left'][0] = 'new-ed694522-c839-4f79-9db0-39e46989956f';
    $pane = new stdClass();
    $pane->pid = 'new-a22dd5da-5ddf-443c-bf23-ad9605653b66';
    $pane->panel = 'left';
    $pane->type = 'cmis_extra_search_results_pane';
    $pane->subtype = 'cmis_extra_search_results_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'search_keyword_index' => '2',
      'num_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'div',
      'map_apachesolr_sorting' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a22dd5da-5ddf-443c-bf23-ad9605653b66';
    $display->content['new-a22dd5da-5ddf-443c-bf23-ad9605653b66'] = $pane;
    $display->panels['left'][1] = 'new-a22dd5da-5ddf-443c-bf23-ad9605653b66';
    $pane = new stdClass();
    $pane->pid = 'new-082d453f-cda2-43b2-8d6f-23968fbc16ff';
    $pane->panel = 'right';
    $pane->type = 'cmis_extra_search_facets_pane';
    $pane->subtype = 'cmis_extra_search_facets_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Forfatter',
      'override_title_heading' => 'h2',
      'facet_field_name' => 'creator',
      'multiple' => 1,
      'show_count' => 1,
      'search_keyword_index' => '2',
      'facet_terms_group_rewrite' => array(),
      'add' => 'Add',
      'form_build_id' => 'form-qg3behHy6MAGzGcQf3vMivRKQqfvCAip-lPKss6O4h8',
      'form_token' => 'OBk9bSgEmgVG6Y4ZMCA8lrS3ur-53AML5hqUIm_x92A',
      'form_id' => 'cmis_extra_search_facets_pane_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Forfatter',
        'pane_collapsed' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '082d453f-cda2-43b2-8d6f-23968fbc16ff';
    $display->content['new-082d453f-cda2-43b2-8d6f-23968fbc16ff'] = $pane;
    $display->panels['right'][0] = 'new-082d453f-cda2-43b2-8d6f-23968fbc16ff';
    $pane = new stdClass();
    $pane->pid = 'new-96b0ca46-2541-49b7-bdfc-67ad55b06f65';
    $pane->panel = 'right';
    $pane->type = 'cmis_extra_search_facets_pane';
    $pane->subtype = 'cmis_extra_search_facets_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Type',
      'override_title_heading' => 'h2',
      'facet_field_name' => 'content.mimetype',
      'multiple' => 1,
      'show_count' => 1,
      'search_keyword_index' => '2',
      'facet_terms_group_rewrite' => array(
        0 => array(
          'label' => 'MS Word',
          'pattern' => 'application/*word*
*opendocument.text*',
        ),
        1 => array(
          'label' => 'MS Excel',
          'pattern' => 'application/*excel*
application/*spreadsheet*',
        ),
        2 => array(
          'label' => 'Images',
          'pattern' => 'image/*',
        ),
        3 => array(
          'label' => 'Audio',
          'pattern' => 'audio/*',
        ),
        4 => array(
          'label' => 'Video',
          'pattern' => 'video/*',
        ),
        5 => array(
          'label' => 'MS PowerPoint',
          'pattern' => 'application/*slideshow*
application/*presentation*
application/*powerpoint*',
        ),
        6 => array(
          'label' => 'Archive',
          'pattern' => 'application/*zip*
application/*rar*
application/*tar*
application/*7z*',
        ),
        7 => array(
          'label' => 'Text',
          'pattern' => '*text/*',
        ),
        8 => array(
          'label' => 'PDF',
          'pattern' => '*pdf*',
        ),
      ),
      'add' => 'Add',
      'form_build_id' => 'form-XkhujOigBRnUijsJk4jdTOVwVGEJ68EYjWTBBTIiIe8',
      'form_token' => '78RX9NWxaTkxNFfNXh8p-2bR_3IBWsO8Yp8VW1C9_8U',
      'form_id' => 'cmis_extra_search_facets_pane_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Type',
        'pane_collapsed' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '96b0ca46-2541-49b7-bdfc-67ad55b06f65';
    $display->content['new-96b0ca46-2541-49b7-bdfc-67ad55b06f65'] = $pane;
    $display->panels['right'][1] = 'new-96b0ca46-2541-49b7-bdfc-67ad55b06f65';
    $pane = new stdClass();
    $pane->pid = 'new-1aaab6a3-48d8-40c4-b0b6-1328e84f40b9';
    $pane->panel = 'right';
    $pane->type = 'cmis_extra_search_facets_num';
    $pane->subtype = 'cmis_extra_search_facets_num';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Date',
      'override_title_heading' => 'h2',
      'facet_field_name' => 'created',
      'search_keyword_index' => '1',
      'connect_to_resultset' => 1,
      'comparsion_operator' => '>',
      'facet_terms_definitions' => array(
        0 => array(
          'label' => '5 years',
          'value' => '1825',
          'weight' => '4',
        ),
        1 => array(
          'label' => 'Half year',
          'value' => '180',
          'weight' => '3',
        ),
        2 => array(
          'label' => 'Last week',
          'value' => '7',
          'weight' => '2',
        ),
        3 => array(
          'label' => '24 hours',
          'value' => '1',
          'weight' => '-4',
        ),
      ),
      'add' => 'Add',
      'form_build_id' => 'form-16OHsuAYA8kpp4tawWSLXm-6ZHuD6eSTbotGARq5EAM',
      'form_token' => 'IgkmK7PbzlxRYaWCKwgPNgEkRmxq2teYNDHEz5NjH5I',
      'form_id' => 'cmis_extra_search_facets_num_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Date',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1aaab6a3-48d8-40c4-b0b6-1328e84f40b9';
    $display->content['new-1aaab6a3-48d8-40c4-b0b6-1328e84f40b9'] = $pane;
    $display->panels['right'][2] = 'new-1aaab6a3-48d8-40c4-b0b6-1328e84f40b9';
    $pane = new stdClass();
    $pane->pid = 'new-500595f1-acae-4d9a-bea3-ed74a00fe994';
    $pane->panel = 'right';
    $pane->type = 'cmis_extra_search_facets_num';
    $pane->subtype = 'cmis_extra_search_facets_num';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 1,
      'override_title_text' => 'Size',
      'override_title_heading' => 'h2',
      'facet_field_name' => 'content.size',
      'search_keyword_index' => '2',
      'connect_to_resultset' => 1,
      'comparsion_operator' => '<',
      'facet_terms_definitions' => array(
        1 => array(
          'label' => '50MB',
          'value' => '50',
          'weight' => '0',
        ),
        0 => array(
          'label' => '100MB',
          'value' => '100',
          'weight' => '0',
        ),
        2 => array(
          'label' => '6 MB',
          'value' => '6',
          'weight' => '0',
        ),
      ),
      'add' => 'Add',
      'form_build_id' => 'form-sWWppT3KZCQQz8HbHPk-TxrEHtedD7CTQZ3urcfwxDg',
      'form_token' => 'IgkmK7PbzlxRYaWCKwgPNgEkRmxq2teYNDHEz5NjH5I',
      'form_id' => 'cmis_extra_search_facets_num_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Size',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '500595f1-acae-4d9a-bea3-ed74a00fe994';
    $display->content['new-500595f1-acae-4d9a-bea3-ed74a00fe994'] = $pane;
    $display->panels['right'][3] = 'new-500595f1-acae-4d9a-bea3-ed74a00fe994';
    $pane = new stdClass();
    $pane->pid = 'new-76129daa-31bf-45b5-a2d2-ac3d01e7db09';
    $pane->panel = 'right';
    $pane->type = 'facetapi_reset_link';
    $pane->subtype = 'facetapi_reset_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '76129daa-31bf-45b5-a2d2-ac3d01e7db09';
    $display->content['new-76129daa-31bf-45b5-a2d2-ac3d01e7db09'] = $pane;
    $display->panels['right'][4] = 'new-76129daa-31bf-45b5-a2d2-ac3d01e7db09';
    $pane = new stdClass();
    $pane->pid = 'new-44c2a09d-8de9-4cdb-a638-58696f166611';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'show_keys' => 1,
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
    $pane->uuid = '44c2a09d-8de9-4cdb-a638-58696f166611';
    $display->content['new-44c2a09d-8de9-4cdb-a638-58696f166611'] = $pane;
    $display->panels['top'][0] = 'new-44c2a09d-8de9-4cdb-a638-58696f166611';
    $pane = new stdClass();
    $pane->pid = 'new-5b0bba8a-f9e9-4bf9-af5e-15f3fd94e145';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-info-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b0bba8a-f9e9-4bf9-af5e-15f3fd94e145';
    $display->content['new-5b0bba8a-f9e9-4bf9-af5e-15f3fd94e145'] = $pane;
    $display->panels['top'][1] = 'new-5b0bba8a-f9e9-4bf9-af5e-15f3fd94e145';
    $pane = new stdClass();
    $pane->pid = 'new-f2576fae-a952-46d4-ac04-9dd2279c9a8d';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_info';
    $pane->subtype = 'apachesolr_info';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'title_override' => FALSE,
      'title_override_text' => '',
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
    $pane->uuid = 'f2576fae-a952-46d4-ac04-9dd2279c9a8d';
    $display->content['new-f2576fae-a952-46d4-ac04-9dd2279c9a8d'] = $pane;
    $display->panels['top'][2] = 'new-f2576fae-a952-46d4-ac04-9dd2279c9a8d';
    $pane = new stdClass();
    $pane->pid = 'new-28fbe624-bf58-4ff5-a81e-535030ff66ba';
    $pane->panel = 'top';
    $pane->type = 'roskilde_search_tabs';
    $pane->subtype = 'roskilde_search_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'transport_search_query' => 1,
      'show_counters' => 1,
      'form_build_id' => 'form-W1Q4u0-P_XXQX7hjbNjrc3VR5S4TT8gfo30shNfT-Ik',
      'form_token' => '_RFGbGvwBZ29GMsXk3amGDEvwXrsTYi-ZjRJkdBlg6s',
      'form_id' => 'roskilde_search_pages_tabs_settings',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '28fbe624-bf58-4ff5-a81e-535030ff66ba';
    $display->content['new-28fbe624-bf58-4ff5-a81e-535030ff66ba'] = $pane;
    $display->panels['top'][3] = 'new-28fbe624-bf58-4ff5-a81e-535030ff66ba';
    $pane = new stdClass();
    $pane->pid = 'new-52cb8a01-5174-4bda-aa94-9bb08fb00173';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="serach-design-row top">&nbsp;</div>

<div class="serach-design-row bottom">&nbsp;</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'serach-design-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '52cb8a01-5174-4bda-aa94-9bb08fb00173';
    $display->content['new-52cb8a01-5174-4bda-aa94-9bb08fb00173'] = $pane;
    $display->panels['top'][4] = 'new-52cb8a01-5174-4bda-aa94-9bb08fb00173';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-44c2a09d-8de9-4cdb-a638-58696f166611';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_alfresco'] = $page;

  return $pages;

}
