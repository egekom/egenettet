<?php
/**
 * @file
 * Defines CMIS search results panel pane based on cmis search module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco Search Results'),
  'description' => t('Show search results matching the current page search.'),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_search_results_pane_form',
  'render callback' => 'cmis_extra_search_results_pane_render',
  'defaults' => array(
    'search_keyword_index' => '2',
  ),
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function cmis_extra_search_results_pane_form($form, &$form_state) {
  drupal_add_js(drupal_get_path('module', 'cmis_views') . '/cmis_browser.js');

  $form['search_keyword_index'] = array(
    '#type' => 'textfield',
    '#title' => t('Search keyword index'),
    '#description' => t('The index in the url for the search keyword. (Ex. in search/site/{my_search_term} is 2)'),
    '#default_value' => '',
    '#size' => 50,
    '#maxlength' => 250,
  );

  $conf = $form_state['conf'];

  // Set default values.
  foreach ($conf as $field => $value) {
    if (isset($form[$field])) {
      $form[$field]['#default_value'] = $value;
    }
  }
  return $form;
}

/**
 * Submit handler for cmis_extra_search_results_pane_edit_form.
 */
function cmis_extra_search_results_pane_form_submit(&$form, &$form_state) {

  foreach (array_keys($form_state['plugin']['defaults']) as $key) {

    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render a list of CMIS documents matched by the search query.
 *
 * Function uses cmis_search_view function from cmis_search module.
 */
function cmis_extra_search_results_pane_render($subtype, $conf, $args, $contexts) {
  module_load_include('module', 'cmis_search');

  $kw_pos = $conf['search_keyword_index'];
  $query = arg($kw_pos);
  if (!$query) {
    $query = '*';
  }

  $block = new stdClass();
  $block->title = t('Documents');
  $block->content = cmis_extra_search_view($query);
  return $block;
}
