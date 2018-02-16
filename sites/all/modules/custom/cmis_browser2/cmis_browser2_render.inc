<?php /**
 * @file
 * The JSON CMIS browse page.
 */ /**
 * Renders the CMIS object as JSON.
 *
 * @param string $node_id
 * The node id of the node the cmis block is rendered from.
 *
 * @param string $path_id
 * The base64 encoded object_id.
 *
 * @return string
 * The json response.
 */ 
function cmis_browser2_browse($path_id = '', $node_id = 0) {
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
      $sort_prop = 'cmis:name';
      $sort_dir = 'asc';
      if ($node = node_load($node_id)) {
        if($sort = $node->field_alfresco_document_sort['und'][0]['value']) {
          switch ($sort) {
            case '0':
              $sort_prop = 'cmis:name';
              $sort_dir = 'asc';
            break;
            case '1':
              $sort_prop = 'cmis:name';
              $sort_dir = 'desc';
            break;
            case '2':
              $sort_prop = 'cmis:lastModificationDate';
              $sort_dir = 'desc';
            break;
            case '3':
              $sort_prop = 'cmis:lastModificationDate';
              $sort_dir = 'asc';
            break;
          }
        }
      }
      usort($children, function($a, $b) use($sort_prop, $sort_dir){
        if($sort_dir === 'asc')
          return strcmp($a->properties[$sort_prop], $b->properties[$sort_prop]);
        else
          return strcmp($b->properties[$sort_prop], $a->properties[$sort_prop]);
      });
      $content = array();
      foreach ($children as $child) {
        $is_folder = ($child->properties['cmis:baseTypeId'] == 'cmis:folder');
        $object_id_clean = explode(';', $child->properties['cmis:objectId']);
        $object_id_clean = $object_id_clean[0];
        $cmis_url = cmis_extra_build_url_target($object_id_clean, $child->properties['cmis:contentStreamMimeType']);
        $mime_type = explode(".", $child->properties['cmis:name']);
        $content[] = array(
          'id' => base64_encode($child->id),
          'label' => $child->properties['cmis:name'],
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
