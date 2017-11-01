<?php

function cmis_field_admin_ajax_browse($widget_id, $path_id = '') {
  module_load_include('api.inc', 'cmis');
  module_load_include('utils.inc', 'cmis_browser');

  $cssBrowserID = 'cmis-field-browse-form';
  $content = '';
  try {
    $repository = cmis_get_repository();
    $root = cmisapi_getObjectByPath($repository->repositoryId, "/");
    $rootId = $root->properties['cmis:objectId'];

    if ($path_id == "") {
      $object = $root;
    }
    else {
      $object = cmisapi_getObject($repository->repositoryId, base64_decode($path_id));
    }
    // NOTE: customized for roskilde
    $action = 'browse';
    if ($object->properties['cmis:baseTypeId'] == 'cmis:document' ||
      (isset($_REQUEST['use']) && $_REQUEST['use'])) {
      $action = 'select';
    }

    switch ($action) {
      case 'select':
      // adds cmis:link
      $options['absolute'] = FALSE;
      $path = 'cmis/views/'.urlencode($object->properties['cmis:objectId']);
      $cmisurl = url($path, $options);

      $object_id_clean = explode(';', $object->properties['cmis:objectId']);
      $object_id_clean = $object_id_clean[0];

      $cmis_preview_url = cmis_extra_build_url_target($object_id_clean, $object->properties['cmis:contentStreamMimeType']);

      $commands[] = ajax_command_invoke('#' . $cssBrowserID, 'dialog', array("close"));
      $commands[] = ajax_command_invoke('#' . $widget_id . '-title', 'val', array($object->properties['cmis:name']));
      $commands[] = ajax_command_invoke('#' . $widget_id . '-path', 'val', array($object->properties['cmis:objectId']));
      // NOTE: customized for roskilde
      $commands[] = ajax_command_invoke('#' . $widget_id, 'attr', array('CMISObjectId', $object->properties['cmis:objectId']));
      $commands[] = ajax_command_invoke('#' . $widget_id, 'attr', array('CMISObjectLink', $cmisurl));
      $commands[] = ajax_command_invoke('#' . $widget_id, 'attr', array('CMISObjectPreviewLink', $cmis_preview_url[0]));
      $commands[] = ajax_command_invoke('#' . $widget_id, 'attr', array('CMISObjectPreviewLinkType', $cmis_preview_url[1]));
      $commands[] = ajax_command_invoke('#' . $widget_id, 'trigger', array('link_cmis'));

      break;
      case 'browse':
      $children = _cmis_field_content_get_folder($repository, $object, array_slice(explode('/', $_GET['q']), 5));

      $content = array();

      foreach ($children as $child) {
        $childUrl =  _cmis_field_browse_url($child->id, $widget_id);
        $content[] = array(
          'browse-url' => $childUrl,
          'title' => $child->properties['cmis:name'],
          'type' => $child->properties['cmis:baseTypeId'],
          'author' => $child->properties['cmis:createdBy'],
          'updated' => new DateTime($child->properties['cmis:lastModificationDate']),
          'size' => isset($child->properties['cmis:contentStreamLength']) ? $child->properties['cmis:contentStreamLength'] : '',
          'mimetype' => isset($child->properties['cmis:contentStreamMimeType']) ? $child->properties['cmis:contentStreamMimeType'] : '',
        );
      }

      $parents = _cmis_field_object_parents($object, $repository->repositoryId, $rootId, $widget_id);
      $commands[] = ajax_command_remove('#' . $cssBrowserID);
      $commands[] = ajax_command_append('html',
        theme('cmis_field_browser', array(
          'children' => $content,
          'breadcrumbs' => $parents,
          '#attributes' => array(
            'id' => $cssBrowserID,
          ),
        ))
      );

      $title = $object->properties['cmis:name'];

      if (empty($title)) {
        $title = basename($object->properties['cmis:path']);
      }

      $commands[] = ajax_command_invoke('#' . $cssBrowserID, 'dialog', array(array('width' => 'auto', 'resizable' => "false", 'modal' => "true", 'title' => $title)));
      // Fire attach behaviors for the dialog by doing a dummy insert.
      $commands[] = ajax_command_append('html', '');
      break;
      default:
      throw new CMISException(t('Unable to handle cmis object @object_id of type @object_type', array(
        '@object_id' => $object->id,
        '@object_type' => $object->type
      )));
    }
  }
  catch (CMISException $e) {
    $commands[] = ajax_command_alert(t('Cmis Error, %error', array('%error' => $e->getMessage())));
  }

  $page = array();
  $page['#type'] = 'ajax';
  $page['#commands'] = $commands;
  return $page;
}

function _cmis_field_browse_url($objectId, $widgetId) {
  $id = base64_encode($objectId);
  return 'admin/settings/cmis/field/ajax/' . $widgetId . '/' . $id;
}

function _cmis_field_object_parents($object, $repoId, $rootId, $widgetId, $parents = array()) {
  module_load_include('api.inc', 'cmis');
  if (!$object->properties['cmis:parentId']) {
    // Don't try to get parents on empty object.
    return array();
  }
  $parent = cmisapi_getObject($repoId, $object->properties['cmis:parentId']);
  if (empty($parent->properties['cmis:objectId'])) {
    // Handle error
    return array();
  }
  elseif ($parent->properties['cmis:objectId'] == $rootId) {
    $rootFolder = array(
      'title' => '[ROOT]',
      'properties' => array(),
      'url' => _cmis_field_browse_url('', $widgetId),
      );
    // Handle recursion end.
    array_unshift($parents, $rootFolder);
    return $parents;
  }
  else {
    // Go deeper.
    array_unshift($parents, array(
      'title' => $parent->properties['cmis:name'],
      'properties' => $parent->properties,
      'url' => _cmis_field_browse_url($parent->properties['cmis:objectId'], $widgetId)
    ));

    return _cmis_field_object_parents($parent, $repoId, $rootId, $widgetId, $parents);
  }
}

/**
 * CMIS folder browser handler.
 *
 */
function _cmis_field_content_get_folder($repository, $object) {
  try {
  $children = cmisapi_getChildren($repository->repositoryId, $object->id)->objectList;

  }
  catch (CMISException $e) {
  cmis_error_handler('cmis_browser', $e);
  return '';
  }
  return $children;
}
