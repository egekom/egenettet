<?php
/**
 * @file
 * Define Linkit node search plugin class.
 */

/**
 * Override a Linkit node search plugin.
 */
class RoskildeLinkitSearchPluginNodeExtra extends LinkitSearchPluginNode {

  /**
   * Create a label of an entity (overridden).
   *
   * @param $entity
   *   The entity to get the label from.
   *
   * @return
   *   The entity label, or FALSE if not found.
   *
   * @see LinkitSearchPluginEntity::createLabel()
   */
  function createLabel($entity) {
    if (("subpage" == $entity->type)) {
      if (isset($entity->field_title) && !empty($entity->field_title)) {
        $field_title = $entity->field_title[LANGUAGE_NONE][0]['value'];
      }
    }

    return entity_label($this->plugin['entity_type'], $entity) . (isset($field_title) ? " ($field_title)" : '');
  }
}