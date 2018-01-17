<?php

/**
 * @file
 * Roskilde Organizational Chart Pane content type
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Roskilde OrgChart'),
  'description' => t('Shows a OrgChart following a taxonomy'),
  'category' => t('OrgChart'),
  'edit form' => 'roskilde_orgchart_edit',
  'render callback' => 'roskilde_orgchart_render',
  'admin info' => 'roskilde_orgchart_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Pane edit form.
 */
function roskilde_orgchart_edit($form, &$form_state) {
  $conf = $form_state['conf'];

  $vocabularies = array();
  $vocabularies[0] = t('-- Choose taxonomy vocabulary');
  $taxonomy_vocabularies = taxonomy_get_vocabularies();
  foreach ($taxonomy_vocabularies as $taxonomy) {
    $vocabularies[$taxonomy->vid] = $taxonomy->name;
  }

  $form['taxonomy_vocabulary'] = array(
    '#type' => 'select',
    '#title' => check_plain('OrgChart Taxonomy'),
    '#default_value' => $conf['taxonomy_vocabulary'],
    '#options' => $vocabularies,
    '#ajax' => array(
      'path' => 'roskilde_orgchart_taxonomy',
    ),
  );

  $options = array();
  if ($conf['taxonomy_vocabulary']) {
    $options = _roskilde_orgchart_options_build($conf['taxonomy_vocabulary']);
  }

  $form['taxonomy_term'] = array(
    '#type' => 'select',
    '#title' => check_plain('OrgChart Start Taxonomy Term'),
    '#default_value' => $conf['taxonomy_term'],
    '#options' => $options,
    '#validated' => TRUE,
  );

  $form['depth'] = array(
    '#type' => 'textfield',
    '#title' => t('Taxonomy depth'),
    '#description' => t('Leave empty to display everything'),
    '#default_value' => $conf['depth'],
  );

  $form['allow_up_root'] = array(
    '#type' => 'checkbox',
    '#title' => check_plain('Allow to go up the root node'),
    '#default_value' => $conf['allow_up_root'],
  );

  $form['add_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Additional classes'),
    '#description' => t('Additional classes to add to the pane'),
    '#default_value' => $conf['add_classes'],
  );

  return $form;
}

/**
 * Edit form submit function.
 */
function roskilde_orgchart_edit_submit($form, &$form_state) {
  $form_state['conf']['taxonomy_vocabulary'] = $form_state['values']['taxonomy_vocabulary'];
  $form_state['conf']['taxonomy_term'] = $form_state['values']['taxonomy_term'];
  $form_state['conf']['depth'] = $form_state['values']['depth'];
  $form_state['conf']['allow_up_root'] = $form_state['values']['allow_up_root'];
  $form_state['conf']['add_classes'] = $form_state['values']['add_classes'];
}

/**
 * Render the panel.
 */
function roskilde_orgchart_render($subtype, $conf, $args, $contexts) {
  global $language;
  // Used to generate unique key for each pane on a single page.
  static $org_chart_id = 1;

  $taxonomy = taxonomy_get_tree($conf['taxonomy_vocabulary']);
  $tax_arr = array();
  foreach ($taxonomy as $t) {
    $t->url = drupal_lookup_path('alias', 'taxonomy/term/' . $t->tid, $language->language);
    $tax_arr[] = array(
      'id' => $t->tid,
      'name' => $t->name,
      'url' => $t->url,
      'depth' => $t->depth,
      'parent' => $t->parents[0],
    );
  }

  $block = new stdClass();
  $block->content = array(
    'test' => array(
      '#type' => 'markup',
      '#markup' => '<div id="roskilde-org-chart-' . $org_chart_id . '" class="roskildeOrgChart"></div>',
      '#attached' => array(
        'css' => array(
          drupal_get_path('module', 'roskilde_orgchart') . '/css/orgchart.css',
        ),
        'js' => array(
          array(
            'type' => 'setting',
            'data' => array(
              'roskilde-org-chart-' . $org_chart_id . '-settings' => array(
                'data' => $tax_arr,
                'initial-node' => $conf['taxonomy_term'],
                'depth' => $conf['depth'],
                'allow-up-root' => $conf['allow_up_root'],
              ),
            ),
          ),
          array(
            'type' => 'file',
            'data' => drupal_get_path('module', 'roskilde_orgchart') . '/js/orgchart.js',
          ),
        ),
      ),
    ),
  );
  $org_chart_id++;
  return $block;
}
