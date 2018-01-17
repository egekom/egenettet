<?php
/**
 * @file
 * View the cmis file content.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Alfresco File View'),
  'description' => t('View the file content.'),
  'category' => t('Elements'),
  'edit form' => 'cmis_extra_file_view_pane_form',
  'render callback' => 'cmis_extra_file_view_pane_render',
  'defaults' => array(
    'iframe_name' => '',
    'result_type' => '',
    'title' => '',
    'path' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function cmis_extra_file_view_pane_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $widget_id = 'edit-cmis-field-' . preg_replace("/_/", "-", 'init_folder' . '-' . '0');
  $ajax_path = 'admin/settings/cmis/field/ajax/' . $widget_id . '/';

  $form['iframe_name'] = array(
    '#type' => 'textfield',
    '#title' => t('IFrame name'),
    '#default_value' => !empty($conf['iframe_name']) ? $conf['iframe_name'] : '',
    '#size' => 100,
    '#required' => TRUE,
  );
  $form['title'] = array(
    '#type' => 'textfield',
    '#attributes' => array('class' => array('edit-field-cmis-field'), 'id' => $widget_id . '-title'),
    '#title_display' => 'before',
    '#title' => t('Load CMIS file'),
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
  $form['result_type'] = array(
    '#type' => 'hidden',
    '#value' => 'html',
  );

  return $form;
}

/**
 * Submit handler for cmis_extra_file_view_pane_edit_form.
 */
function cmis_extra_file_view_pane_form_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render handler for cmis_extra_file_view_pane.
 */
function cmis_extra_file_view_pane_render($subtype, $conf, $args, $contexts) {
  drupal_add_js(drupal_get_path('module', 'cmis_extra') . '/js/cmis-extra.js');
  $alfresco_url = variable_get('cmis_extra_link_pattern', 'http://10.80.1.45/alfresco/service/api/node/workspace/SpacesStore/[document_id]/content/thumbnails/[type]?c=force');
  drupal_add_js(array(
    'RoskildeCmisUrl' => str_replace('[type]', $conf['result_type'], $alfresco_url),
  ), 'setting');

  $preview_url = '';

  if ($conf['path']) {
    module_load_include('api.inc', 'cmis');
    module_load_include('utils.inc', 'cmis_browser');

    try {
      $repository = cmis_get_repository();
      $obj = cmisapi_getObject($repository->repositoryId, $conf['path']);

      $object_id_clean = explode(';', $obj->properties['cmis:objectId']);
      $object_id_clean = $object_id_clean[0];

      $object_preview_url = cmis_extra_build_url_target($object_id_clean, $obj->properties['cmis:contentStreamMimeType']);

      if ($object_preview_url[1] == 'preview') {
        $preview_url = $object_preview_url[0];
      }
    } catch (Exception $e) {
      watchdog_exception('cmis', $e);
    }
  }

  return (object) array(
    'content' => '<div><iframe src="' . $preview_url . '" name="' . $conf['iframe_name'] . '"></iframe></div>',
  );
}
