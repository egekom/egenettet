<?php
/**
 * @file
 * CMIS Browser2 pane description
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('CMIS Browser Treeview'),
  'description' => t('Shows a treeview for a CMIS folder'),
  'category' => t('Elements'),
  'edit form' => 'cmis_browser2_treeview',
  'render callback' => 'cmis_browser2_treeview_render',
  'admin info' => 'cmis_browser2_treeview_info',
  'defaults' => array(
    'target' => '_blank',
  ),
  'all contexts' => TRUE,
);

/**
 * Pane edit form.
 */
function cmis_browser2_treeview($form, &$form_state) {
  $conf = $form_state['conf'];

  $element = array();

  $widget_id = 'edit-cmis-field-' . preg_replace("/_/", "-", 'init_folder' . '-' . '0');
  $ajax_path = 'admin/settings/cmis/field/ajax/' . $widget_id . '/';

  $form['title'] = array(
    '#type' => 'textfield',
    '#attributes' => array('class' => array('edit-field-cmis-field'), 'id' => $widget_id . '-title'),
    '#title_display' => 'before',
    '#title' => t('Initial folder'),
    '#default_value' => $conf['title'],
  );
  $form['path'] = array(
    '#type' => 'hidden',
    '#attributes' => array(
      'class' => array('edit-field-cmis-path', 'search-form'),
      'id' => $widget_id . '-path'),
    '#default_value' => $conf['init_folder'],
  );
  $form['button'] = array(
    '#type' => 'button',
    '#value' => t('Browse CMIS repository'),
    '#submit' => array(),
    '#ajax' => array(
      'path' => $ajax_path,
    ),
    '#limit_validation_errors' => array(),
  );
  $form['target'] = array(
    '#type' => 'textfield',
    '#title' => t('Treeview links target'),
    '#default_value' => $conf['target'],
  );

  $form['add_treeview_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Additional treeview classes'),
    '#description' => t('For treeview pane height use h150 or h300'),
    '#default_value' => $conf['add_treeview_classes'],
  );
  $form['#attached']['library'][] = array('system', 'ui.dialog');

  return $form;
}

/**
 * Edit form submit function.
 */
function cmis_browser2_treeview_submit($form, &$form_state) {
  $form_state['conf']['title'] = $form_state['values']['title'];
  $form_state['conf']['init_folder'] = $form_state['values']['path'];
  $form_state['conf']['add_treeview_classes'] = $form_state['values']['add_treeview_classes'];
  $form_state['conf']['target'] = $form_state['values']['target'];
}

/**
 * Render the panel.
 */
function cmis_browser2_treeview_render($subtype, $conf, $args, $contexts) {
  // Used to generate unique key for each pane on a single page.
  static $brower_tree_id = 1;
  $facets = cmis_extra_slingshot_info_query('*', array(), array('content.mimetype'), $conf['init_folder']);
  if (empty($facets['facets'])) {
    return NULL;
  }
  $mimetype_options = cmis_browser2_mimetype_to_options($facets['facets']['content.mimetype']);
  // Render as a block.
  $block = new stdClass();
  $block->title = t('Dokumenter');
  $block->content = array(
    'cmis_browser2_form' => drupal_get_form('cmis_browser2_treeview_filter_form', $conf['init_folder'], $mimetype_options),
    'cmis_browser2_treeview' => array(
      '#type' => 'markup',
      '#markup' => '<div id="cmis-browser2-tree-' . $brower_tree_id .
          '" initialObjectId="' . base64_encode($conf['init_folder']) .
          '" drupalNodeId="' . $args['nid'] .
          '" treeviewTarget="' . $conf['target'] .
          '" class="aciTree aciTreeArrow aciTreeNoBranches aciTreeFullRow aciTreeBig '
          . $conf['add_treeview_classes'] . '"></div>',
      '#attached' => array(
        'js' => array(
          array(
            'data' => drupal_get_path('module', 'cmis_browser2') . '/js/jquery-aciTree/js/jquery.aciPlugin.min.js',
            'weight' => 1,
          ),
          array(
            'data' => drupal_get_path('module', 'cmis_browser2') . '/js/jquery-aciTree/js/jquery.aciTree.min.js',
            'weight' => 2,
          ),
          array(
            'data' => drupal_get_path('module', 'cmis_browser2') . '/js/cmis_browser2.js',
            'weight' => 3,
          ),
        ),
        'css' => array(
          drupal_get_path('module', 'cmis_browser2') . '/css/cmis_browser2.css',
          drupal_get_path('module', 'cmis_browser2') . '/js/jquery-aciTree/css/aciTree.css',
        ),
      ),
    ),
  );
  $brower_tree_id++;
  return $block;
}

/**
 * The treeview pane render function.
 */
function cmis_browser2_treeview_filter_form($form, &$form_state) {
  static $brower_tree_id = 1;
  $form = array();
  $form['#id'] = 'cmis-browser2-treeview-filter-form-' . $brower_tree_id;
  $form['#attributes']['class'] = array('cmis-browser-form');
  $form['rootnode'] = array(
    '#type' => 'hidden',
    '#value' => $form_state['build_info']['args'][0],
  );
  $form['mimetype'] = array(
    '#type' => 'select',
    '#options' => $form_state['build_info']['args'][1],
  );
  $form['searchtext'] = array(
    '#type' => 'textfield',
    '#attributes' => array(
      'placeholder' => array(t('Søg')),
    ),
  );
  $form['btn-container'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-actions'),
    ),
  );
  $form['btn-container']['go'] = array(
    '#type' => 'button',
    '#value' => t('GO'),
  );
  $brower_tree_id++;
  return $form;
}

/**
 * The mimetype array parsing function.
 */
function cmis_browser2_mimetype_to_options($mimetype) {
  $rewrite_options = array(
    0 => array(
      'label' => 'MS Word',
      'pattern' => "application/*word*\n*opendocument.text*",
    ),
    1 => array(
      'label' => 'MS Excel',
      'pattern' => "application/*excel*\napplication/*spreadsheet*",
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
      'pattern' => "application/*slideshow*\napplication/*presentation*\napplication/*powerpoint*",
    ),
    6 => array(
      'label' => 'Archive',
      'pattern' => "application/*zip*\napplication/*rar*\napplication/*tar*\napplication/*7z*",
    ),
    7 => array(
      'label' => 'Text',
      'pattern' => '*text/*',
    ),
    8 => array(
      'label' => 'PDF',
      'pattern' => '*pdf*',
    ),
  );
  $grouped = cmis_extra_group_and_label_terms($mimetype, $rewrite_options);
  $options = array(0 => t('All'));
  foreach ($grouped as $v) {
    $options[$v['value']] = $v['label'];
  }
  return $options;
}

/**
 * Admin info.
 */
function cmis_browser2_treeview_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $content = '<p><b>Initial folder:</b> ' . $conf['init_folder'] . '</p>';

    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
