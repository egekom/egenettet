<?php
/**
 * @file
 * Imitate orderby for Alfresco search
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco results order'),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_search_orderby_settings',
  'render callback' => 'cmis_extra_search_orderby_render',
  'all contexts' => TRUE,
);


/**
 * An edit form for the pane's settings.
 */
function cmis_extra_search_orderby_settings($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for cmis_extra_search_results_pane_edit_form.
 */
function cmis_extra_search_orderby_settings_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}

/**
 * Render a list of CMIS documents matched by the search query.
 *
 * Function uses cmis_search_view function from cmis_search module.
 */
function cmis_extra_search_orderby_render($subtype, $conf, $args, $contexts) {

  $fields = array(
    '' => t('Relevancy'),
    'created|false' => t('Creation'),
    'modified|false' => t('Modification'),
    'content.size|false' => t('Size'),
  );

  $url_query = drupal_get_query_parameters();

  $markup = '<div class="item-list"><ul>';
  foreach ($fields as $field_name => $title) {
    $classes = array();
    if ((!empty($url_query['sort']) && $url_query['sort'] == $field_name) || (empty($url_query['sort']) && empty($field_name))) {
      $classes[] = 'active';
    }
    $url_query_ = $url_query;
    $url_query_['sort'] = $field_name;
    $url_query_ = array_filter($url_query_);
    $markup .= sprintf('<li><a href="%s" %s>%s</a></li>', url(current_path(), array('query' => $url_query_)), drupal_attributes(array('class' => $classes)), $title);
  }
  $markup .= '</ul></div>';

  $block = new stdClass();
  $block->title = (empty($conf['override_title']) ? NULL : $conf['override_title_text']);
  $block->content = $markup;

  drupal_add_js(drupal_get_path('module', 'cmis_extra') . '/js/cmis-extra.js', array('scope' => 'footer'));

  return $block;

}
