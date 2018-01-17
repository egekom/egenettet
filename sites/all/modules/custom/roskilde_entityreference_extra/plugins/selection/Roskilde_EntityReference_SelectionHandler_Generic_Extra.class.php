<?php

/**
 * A generic Entity handler.
 *
 * The generic base implementation has a variety of overrides to workaround
 * core's largely deficient entity handling.
 */
class Roskilde_EntityReference_SelectionHandler_Generic_Extra extends EntityReference_SelectionHandler_Generic {

  /**
   * Implements EntityReferenceHandler::getInstance().
   */
  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    $target_entity_type = $field['settings']['target_type'];

    // Check if the entity type does exist and has a base table.
    $entity_info = entity_get_info($target_entity_type);
    if (empty($entity_info['base table'])) {
      return EntityReference_SelectionHandler_Broken::getInstance($field, $instance);
    }

    if ("node" == $target_entity_type && class_exists($class_name = 'Roskilde_EntityReference_SelectionHandler_Generic_node_Extra')) {
      return new $class_name($field, $instance, $entity_type, $entity);
    }
    elseif (class_exists($class_name = 'EntityReference_SelectionHandler_Generic_' . $target_entity_type)) {
      return new $class_name($field, $instance, $entity_type, $entity);
    }
    else {
      return new EntityReference_SelectionHandler_Generic($field, $instance, $entity_type, $entity);
    }
  }

  /**
   * Implements EntityReferenceHandler::getLabel().
   */
  public function getLabel($entity) {
    $target_type = $this->field['settings']['target_type'];
    $postfix = ("subpage" == $entity->type && !empty($entity->field_title)) ? " ({$entity->field_title[LANGUAGE_NONE][0]['safe_value']})" : '';
    return entity_access('view', $target_type, $entity) ? entity_label($target_type, $entity) . $postfix : t('- Restricted access -');
  }
}

/**
 * Override for the Node type.
 *
 * This only exists to workaround core bugs.
 */
class Roskilde_EntityReference_SelectionHandler_Generic_node_Extra extends Roskilde_EntityReference_SelectionHandler_Generic_Extra {
  public function entityFieldQueryAlter(SelectQueryInterface $query) {
    // Adding the 'node_access' tag is sadly insufficient for nodes: core
    // requires us to also know about the concept of 'published' and
    // 'unpublished'. We need to do that as long as there are no access control
    // modules in use on the site. As long as one access control module is there,
    // it is supposed to handle this check.
    if (!user_access('bypass node access') && !count(module_implements('node_grants'))) {
      $base_table = $this->ensureBaseTable($query);
      $query->condition("$base_table.status", NODE_PUBLISHED);
    }
  }
}
