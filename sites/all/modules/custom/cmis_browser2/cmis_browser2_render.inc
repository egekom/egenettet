<?php

/**
 * @file
 * The JSON CMIS browse page.
 */

/**
 * Renders the CMIS object as JSON.
 *
 * @param string $path_id
 *   The base64 encoded object_id.
 *
 * @return string
 *   The json response.
 */
function cmis_browser2_browse($path_id = '') {
  module_load_include('api.inc', 'cmis');
  module_load_include('utils.inc', 'cmis_browser');
  $return = array();
  try {
    $repository = cmis_get_repository();
    $root = cmisapi_getObjectByPath($repository->repositoryId, "/");

    if ($path_id == "") {
      $object = $root;
    }
    else {
      $object = cmisapi_getObject($repository->repositoryId, base64_decode($path_id));
    }

    if ($object->properties['cmis:baseTypeId'] == 'cmis:folder') {
      // $repository, $object, array_slice(explode('/', $_GET['q']), 5)
      $children = cmisapi_getChildren($repository->repositoryId, $object->id)->objectList;

      $content = array();
      foreach ($children as $child) {
        $is_folder = ($child->properties['cmis:baseTypeId'] == 'cmis:folder');

        $object_id_clean = explode(';', $child->properties['cmis:objectId']);
        $object_id_clean = $object_id_clean[0];

        $cmis_url = cmis_extra_build_url_target($object_id_clean, $child->properties['cmis:contentStreamMimeType']);

        $mime_type = explode(".", $child->properties['cmis:name']);

        $content[] = array(
          'id' => base64_encode($child->id),
          'label' => (!empty($child->properties['cm:title'])) ? $child->properties['cm:title'] : $child->properties['cmis:name'],
          'inode' => $is_folder,
          'icon' => ($is_folder ? 'folder' : 'file ' . strtolower($mime_type[1])),
          'browse-url' => $cmis_url[0],
        );
      }
      $return = $content;
    }
  }
  catch (CMISException $e) {
    $return = $e->getMessage();
  }
  drupal_json_output($return);
}
