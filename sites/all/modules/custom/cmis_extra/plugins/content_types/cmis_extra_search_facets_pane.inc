<?php
/**
 * @file
 * Imitate facets for Alfresco search
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco Text Facets'),
  'description' => t(''),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_search_facets_pane_settings',
  'render callback' => 'cmis_extra_search_facets_pane_render',
  'admin title' => 'cmis_extra_search_facets_pane_admin_info',
  'defaults' => array(
    'facet_field_name' => '',
    'multple' => TRUE,
    'show_count' => TRUE,
    'search_keyword_index' => '',
  ),
  'all contexts' => TRUE,
);


/**
 * An edit form for the pane's settings.
 */
function cmis_extra_search_facets_pane_settings($form, &$form_state) {

  $form['facet_field_name'] = array(
    '#title' => t('Facet field name'),
    '#type' => 'select',
    '#options' => array_merge(array('' => '- ' . t('Select one') . ' -'), cmis_extra_slingshot_mapping()),
    '#default_value' => $form_state['conf']['facet_field_name'],
    '#required' => TRUE,
  );

  $form['multiple'] = array(
    '#title' => t('Multiple'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['multiple'],
  );

  $form['show_count'] = array(
    '#title' => t('Show counts'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['show_count'],
  );

  $form['search_keyword_index'] = array(
    '#type' => 'textfield',
    '#title' => t('Search keyword index'),
    '#description' => t('The index in the url for the search keyword. (Ex. in search/site/{my_search_term} is 2)'),
    '#default_value' => $form_state['conf']['search_keyword_index'],
    '#size' => 5,
    '#maxlength' => 2,
    '#required' => TRUE,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  $form['facet_terms_group_rewrite_wrapper'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Terms rewrite and grouping'),
  );

  $form['facet_terms_group_rewrite_wrapper']['facet_terms_group_rewrite'] = array(
    '#tree' => TRUE,
    '#type' => 'container',
    '#id' => 'cmis-extra-search-facets-terms-groups',
  );

  if (!empty($form_state['triggering_element']['#id']) && $form_state['triggering_element']['#id'] == 'add-link') {
    foreach ($form_state['input']['facet_terms_group_rewrite'] as $field_value) {
      if (!empty($field_value['pattern'])) {
        $form['facet_terms_group_rewrite_wrapper']['facet_terms_group_rewrite'][] = _cmis_extra_search_facets_pane_settings_terms_grouping_group($field_value);
      }
    }
    $form['facet_terms_group_rewrite_wrapper']['facet_terms_group_rewrite'][] = _cmis_extra_search_facets_pane_settings_terms_grouping_group(array(), FALSE);
  }
  else {
    if (empty($form_state['conf']['facet_terms_group_rewrite'])) {
      $form['facet_terms_group_rewrite_wrapper']['facet_terms_group_rewrite'][] = _cmis_extra_search_facets_pane_settings_terms_grouping_group(array(), FALSE);
    }
    else {
      foreach ($form_state['conf']['facet_terms_group_rewrite'] as $field_value) {
        if (!empty($field_value['pattern'])) {
          $form['facet_terms_group_rewrite_wrapper']['facet_terms_group_rewrite'][] = _cmis_extra_search_facets_pane_settings_terms_grouping_group($field_value);
        }
      }
    }
  }

  $form['facet_terms_group_rewrite_wrapper']['add'] = array(
    '#type' => 'button',
    '#value' => t('Add'),
    '#ajax' => array(
      'callback' => 'cmis_extra_search_facets_pane_settings_terms_grouping_ajax',
      'wrapper' => 'cmis-extra-search-facets-terms-groups',
      'method' => 'replace',
    ),
    '#id' => 'add-link',
  );

  return $form;
}

/**
 * Element building function.
 *
 * @param array $field_value
 *
 * @return array
 */
function _cmis_extra_search_facets_pane_settings_terms_grouping_group($field_value = array(), $collapse = TRUE) {

  $element['#type'] = 'fieldset';
  if ($collapse) {
    $element['#collapsible'] = TRUE;
    $element['#collapsed'] = TRUE;
  }
  else {
    $element['#collapsible'] = FALSE;
  }
  $element['#title'] = empty($field_value['label']) ? (empty($field_value['label']) ? '<em>' . t('New group') . '</em>' : $field_value['label']) : $field_value['label'];

  $element['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#default_value' => empty($field_value['label']) ? '' : $field_value['label'],
    '#size' => 18,
  );
  $element['pattern'] = array(
    '#type' => 'textarea',
    '#title' => t('Terms pattern'),
    '#default_value' => empty($field_value['pattern']) ? '' : $field_value['pattern'],
    '#description' => t('List of mimetypes or patterns that match given mimetype, patterns (* and ?) are allowed. Separation could be new lines coma or columns (\n , ;)'),
  );

  return $element;
}

/**
 * Submit handler for cmis_extra_search_results_pane_edit_form.
 */
function cmis_extra_search_facets_pane_settings_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}

/**
 * Callback for ctools plugin admin title
 */
function cmis_extra_search_facets_pane_admin_info($name, $conf) {
  return (empty($conf['override_title']) ? t('Alfresco Text Facets') : $conf['override_title_text']) . ' (' . $conf['facet_field_name'] . ')';
}

/**
 * Render a list of CMIS documents matched by the search query.
 *
 * Function uses cmis_search_view function from cmis_search module.
 */
function cmis_extra_search_facets_pane_render($subtype, $conf, $args, $contexts) {

  $search_keyword = arg($conf['search_keyword_index']);
  if (!$search_keyword) {
    $search_keyword = '*';
  }

  $filters = array();
  $data = cmis_extra_search_singleton($search_keyword);

  if (!empty($data['facets'][$conf['facet_field_name']]) && is_array($data['facets'][$conf['facet_field_name']])) {
    $terms = $data['facets'][$conf['facet_field_name']];
    $terms = cmis_extra_group_and_label_terms($terms, $conf['facet_terms_group_rewrite']);

    uasort($terms, function($a, $b) { return $a['hits'] > $b['hits'] ? -1 : 1; });

    $content = '';
    $content .= '<ul class="cmis-alfresco-facets">';

    foreach ($terms as $term) {
      $url_query = drupal_get_query_parameters();
      $query_arg_name = 'cmis-field:' . str_replace('.', '%dot%', $conf['facet_field_name']);

      $classes = array(
        'facet-item',
      );

      if (!empty($url_query[$query_arg_name]) && is_scalar($url_query[$query_arg_name])) {
        $query_arg_value = explode(',', $url_query[$query_arg_name]);
      }
      else {
        $query_arg_value = array();
      }

      $term_values = explode(',', $term['value']);
      if (is_array($term_values)){
        $active = count(array_intersect($term_values, $query_arg_value));
        $active_facet = FALSE;
        if($active) {
         $active_facet = 1;
         $query_arg_value = array_diff($query_arg_value, $term_values);
        }
      }

      if ($active_facet !== FALSE) {
        $classes[] = 'active';
        $url_query[$query_arg_name] = implode(',', $query_arg_value);
      }
      else {
        if (!empty($conf['multiple']) && $query_arg_value) {
          $query_arg_value[] = $term['value'];
          $url_query[$query_arg_name] = implode(',', array_unique($query_arg_value));
        }
        else {
          $url_query[$query_arg_name] = $term['value'];
        }
      }
      $url_attributes = array();
      $url_query = array_filter($url_query);
      if ($url_query) {
        $url_attributes['query'] = $url_query;
      }
      $url = url(current_path(), $url_attributes);

      $content .= '<li' . ($classes ? ' class="' . implode(' ', $classes) . '"' : ''). '>';

      $content .= '<input type="checkbox" ' . ($active_facet !== FALSE ? ' checked="checked"' : '') . '/>';

      $content .= l($term['label'], current_path(), array(
        'query' => $url_query,
        'attributes' => array(
          'rel' => 'nofollow',
        ),
      ));

      if ($conf['show_count']) {
        $content .= ' <span class="count">(' . $term['hits'] . ')</span>';
      }
      $content .= '</li>';
    }

    $content .= '</ul>';

    $block = new stdClass();
    $block->title = (empty($conf['override_title']) ? NULL : t($conf['override_title_text']));
    $block->content = $content;

    drupal_add_js(drupal_get_path('module', 'cmis_extra') . '/js/cmis-extra.js', array('scope' => 'footer'));

    return $block;

  }
  else {
    return NULL;
  }

}
