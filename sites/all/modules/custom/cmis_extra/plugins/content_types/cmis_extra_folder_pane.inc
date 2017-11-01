<?php
/**
 * @file
 * Defines Apache SOLR More like this panel pane with base on the MLT Block
 * provided by apachesolr module but searching similarities from current
 * content type only.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco Folder Tree'),
  'description' => t('Show tree of the chosen Alfresco directory.'),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_folder_pane_form',
  'render callback' => 'cmis_extra_folder_pane_render',
  'defaults' => array(
    'iframe_name' => '',
    'filepath' => '',
    'columns' => array('name','author','size'),
  ),
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function cmis_extra_folder_pane_form($form, &$form_state) {
  drupal_add_js(drupal_get_path('module', 'cmis_views') . '/cmis_browser.js');

  $form['iframe_name'] = array(
    '#type' => 'textfield',
    '#title' => t('IFrame name'),
    '#default_value' => !empty($conf['iframe_name']) ? $conf['iframe_name'] : '',
    '#size' => 100,
  );
  $form['filepath'] = array(
    '#type' => 'textfield',
    '#title' => t('File Path location'),
    '#description' => t('Enter the file path location of the folder or file type that you want to display <br /><em>For example: Sites/docs/documentLibrary/casestudies</em>'),
    '#default_value' => '',
    '#size' => 100,
    '#maxlength' => 250,
    '#dependency' => array('radio:querytype' => array('0')),
  );
  $form['browse'] = array(
    '#type' => 'button',
    '#value' => t('Browse CMIS repository'),
    '#submit' => array(),
    '#ajax' => array(
      'path' => 'admin/config/cmis/views/ajax/',
    ),
    '#limit_validation_errors' => array(),
  );
  $columns = array('name', 'mimetype', 'size', 'author', 'updated', 'actions');
  $form['columns']  = array(
    '#type' => 'checkboxes',
    '#title' => t('Columnns to display'),
    '#description' => t('Choose what information should be displayed.'),
    '#options' => array_combine($columns, $columns),
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
 * Submit handler for cmis_extra_folder_pane_edit_form.
 */
function cmis_extra_folder_pane_form_submit(&$form, &$form_state) {

  foreach (array_keys($form_state['plugin']['defaults']) as $key) {

    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render a table of folders and documents inside selected alfresco folder.
 *
 * In order to change structure different theme function based on
 * theme_cmis_browser_browse_children should be created.
 */
function cmis_extra_folder_pane_render($subtype, $conf, $args, $contexts) {
  module_load_include('api.inc', 'cmis');
  module_load_include('utils.inc', 'cmis_browser');
  module_load_include('content_get.inc', 'cmis_browser');

  $node = menu_get_object();
  $repository = cmis_get_repository();

  $object = _cmis_browser_content_object_by_path($repository, $conf['filepath']);

  $block = new stdClass();
  $block->title = t('Alfresco folder:');

  try {
    $children = cmisapi_getChildren($repository->repositoryId, $object->id)->objectList;
  }
  catch (CMISException $e) {
    cmis_error_handler('cmis_browser', $e);
    $block->content = '';
    return $block;
  }

  $block->content = theme('cmis_extra_browse_children', array(
    'bcarray' => explode('/', substr($object->properties['cmis:path'], 1)),
    'context' => $children,
    'type' => 'popup',
    'columns' => array_filter(array_values($conf['columns'])),
    'iframe_name' => isset($conf['iframe_name']) ? $conf['iframe_name'] : '',
  ));

  return $block;
}



