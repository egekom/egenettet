<?php
/**
 * @file
 * Imitate facets for Alfresco search
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco Numeric Facets'),
  'description' => t(''),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_search_facets_num_settings',
  'render callback' => 'cmis_extra_search_facets_num_render',
  'admin title' => 'cmis_extra_search_facets_num_admin_info',
  'defaults' => array(
    'facet_field_name' => '',
    'comparsion_operator' => '',
    'search_keyword_index' => '',
  ),
  'all contexts' => TRUE,
);



/**
 * An edit form for the pane's settings.
 */
function cmis_extra_search_facets_num_settings($form, &$form_state) {

  $allowed_fields = array(
    'created' => TRUE,
    'modified' => TRUE,
    'content.size' => TRUE,
  );
  $fields_mapping = array_intersect_key(cmis_extra_slingshot_mapping(), $allowed_fields);

  $form['facet_field_name'] = array(
    '#title' => t('Facet field name'),
    '#type' => 'select',
    '#options' => array_merge(array('' => '- ' . t('Select one') . ' -'), $fields_mapping),
    '#default_value' => $form_state['conf']['facet_field_name'],
    '#required' => TRUE,
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

  $form['connect_to_resultset'] = array(
    '#title' => t('Connect facet to resultset'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['connect_to_resultset'],
    '#required' => FALSE,
  );

  $form['comparsion_operator'] = array(
    '#title' => t('Comparsion operator'),
    '#type' => 'select',
    '#options' => array(
      '<' => t('Less than'),
      '>' => t('Great than'),
    ),
    '#default_value' => $form_state['conf']['comparsion_operator'],
    '#required' => TRUE,
  );

  $form['facet_terms_definitions_wrapper'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Terms definition'),
  );

  $form['facet_terms_definitions_wrapper']['facet_terms_definitions'] = array(
    '#tree' => TRUE,
    '#type' => 'container',
    '#id' => 'cmis-extra-search-facets-terms-definitions',
  );

  if (!empty($form_state['triggering_element']['#id']) && $form_state['triggering_element']['#id'] == 'add-link') {
    $count = count($form_state['input']['facet_terms_definitions']);
    foreach ($form_state['input']['facet_terms_definitions'] as $field_value) {
      if (!empty($field_value['value'])) {
        $form['facet_terms_definitions_wrapper']['facet_terms_definitions'][] = _cmis_extra_search_facets_num_settings_terms_definition($field_value, TRUE, $count);
      }
    }
    $form['facet_terms_definitions_wrapper']['facet_terms_definitions'][] = _cmis_extra_search_facets_num_settings_terms_definition(array(), FALSE, $count);
  }
  else {
    if (empty($form_state['conf']['facet_terms_definitions'])) {
      $form['facet_terms_definitions_wrapper']['facet_terms_definitions'][] = _cmis_extra_search_facets_num_settings_terms_definition(array(), FALSE);
    }
    else {
      foreach ($form_state['conf']['facet_terms_definitions'] as $field_value) {
        if (!empty($field_value['value'])) {
          $form['facet_terms_definitions_wrapper']['facet_terms_definitions'][] = _cmis_extra_search_facets_num_settings_terms_definition($field_value, TRUE, count($form_state['conf']['facet_terms_definitions']));
        }
      }
    }
  }

  uasort($form['facet_terms_definitions_wrapper']['facet_terms_definitions'], function ($a, $b) {
    return $a['weight']['#default_value'] > $b['weight']['#default_value'] ? -1 : 1;
  });

  $form['facet_terms_definitions_wrapper']['add'] = array(
    '#type' => 'button',
    '#value' => t('Add'),
    '#ajax' => array(
      'callback' => 'cmis_extra_search_facets_num_settings_terms_definition_ajax',
      'wrapper' => 'cmis-extra-search-facets-terms-definitions',
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
function _cmis_extra_search_facets_num_settings_terms_definition($field_value = array(), $collapse = TRUE, $weight_count = 0) {

  $element['#type'] = 'fieldset';
  if ($collapse) {
    $element['#collapsible'] = TRUE;
    $element['#collapsed'] = TRUE;
  }
  else {
    $element['#collapsible'] = FALSE;
  }
  $element['#title'] = empty($field_value['label']) ? (empty($field_value['label']) ? '<em>' . t('New definition') . '</em>' : $field_value['label']) : $field_value['label'];

  $element['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#default_value' => empty($field_value['label']) ? '' : $field_value['label'],
    '#size' => 18,
  );
  $element['value'] = array(
    '#type' => 'textfield',
    '#title' => t('Number value'),
    '#default_value' => empty($field_value['value']) ? '' : $field_value['value'],
    '#description' => t('Numeric value for comparsion, depends of measurement unit is (MB, Day)'),
    '#element_validate' => array('element_validate_integer_positive'),
  );
  $element['weight'] = array(
    '#type' => 'select',
    '#title' => t('Weight'),
    '#default_value' => empty($field_value['weight']) ? 0 : $field_value['weight'],
    '#options' => drupal_map_assoc(range($weight_count, -1 * $weight_count, 1)),
  );

  return $element;
}

/**
 * Submit handler for cmis_extra_search_results_pane_edit_form.
 */
function cmis_extra_search_facets_num_settings_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}

/**
 * Callback for ctools plugin admin title
 */
function cmis_extra_search_facets_num_admin_info($name, $conf) {
  return (empty($conf['override_title']) ? t('Alfresco Numeric Facets') : $conf['override_title_text']) . ' (' . $conf['facet_field_name'] . ')';
}

/**
 * Render a list of CMIS documents matched by the search query.
 *
 * Function uses cmis_search_view function from cmis_search module.
 */
function cmis_extra_search_facets_num_render($subtype, $conf, $args, $contexts) {

  $search_keyword = arg($conf['search_keyword_index']);
  if (!$search_keyword) {
    $search_keyword = '*';
  }

  $terms = $conf['facet_terms_definitions'];

  if (!empty($conf['connect_to_resultset'])) {

    $filters = array();

    // TODO: fix this to work with the singleton
    $data = cmis_extra_slingshot_info_query($search_keyword, $filters, array($conf['facet_field_name']));

    if (!empty($data['facets'][$conf['facet_field_name']])) {
      foreach ($data['facets'][$conf['facet_field_name']] as $term) {


        if ($conf['facet_field_name'] == 'content.size') {
          $f = $term['value'] / 1024 / 1024;
        }
        elseif ($conf['facet_field_name'] == 'created' || $conf['facet_field_name'] == 'modified') {
          $f = (time() - strtotime($term['value']))/60/60/24;
        }
        else {
          continue;
        }

        foreach ($terms as $term_index => $definition_term) {
          if ($conf['comparsion_operator'] == '<') {
            if ($f >= $definition_term['value']) {
              $terms[$term_index]['rate'] = empty($definition_term['rate']) ? 1 : $definition_term['rate']+1;
            }
          }
          else {
            if ($f <= $definition_term['value']) {
              $terms[$term_index]['rate'] = empty($definition_term['rate']) ? 1 : $definition_term['rate']+1;
            }
          }

        }
      }
    }

    // Filter definitions that have no facets.
    foreach ($terms as $term_index => $definition_term) {
      if (empty($definition_term['rate'])) {
        unset($terms[$term_index]);
      }
    }

  }

  if ($terms && count($terms) > 1) {
    uasort($terms, function ($a, $b) {
      return $a['weight'] > $b['weight'] ? -1 : 1;
    });

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
      $op = $conf['comparsion_operator'] == '>' ? 'gt' : 'lt';

      $active_facet = array_search($op . $term['value'], $query_arg_value);
      if ($active_facet !== FALSE) {
        $classes[] = 'active';
        unset($query_arg_value[$active_facet]);
      }
      else {
        $url_query[$query_arg_name] = $op . $term['value'];
      }

      $url_attributes = array();
      $url_query = array_filter($url_query);
      if ($url_query) {
        $url_attributes['query'] = $url_query;
      }
      $url = url(current_path(), $url_attributes);

      $content .= '<li' . ($classes ? ' class="' . implode(' ', $classes) . '"' : '') . '>';

      $content .= '<input type="checkbox" ' . ($active_facet !== FALSE ? ' checked="checked"' : '') . '/>';

      $content .= l($term['label'], current_path(), array(
        'query' => $url_query,
        'attributes' => array(
          'rel' => 'nofollow',
        ),
      ));

      $content .= '</li>';
    }

    $content .= '</ul>';

    $block = new stdClass();
    $block->title = (empty($conf['override_title']) ? NULL : t($conf['override_title_text']));
    $block->content = $content;

    drupal_add_js(drupal_get_path('module', 'cmis_extra') . '/js/cmis-extra.js', array('scope' => 'footer'));

    return $block;
  }

  return NULL;

}
