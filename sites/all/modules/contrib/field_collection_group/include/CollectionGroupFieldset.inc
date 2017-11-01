<?php
/**
 * @file
 * Fieldset group of the field collection grouping functionality.
 */

class CollectionGroupFieldset extends CollectionGroup {
  protected $valueFormat = 'fieldset';

  /**
   * Add fieldset-specific settings to the value group.
   */
  protected function valueGroup() {
    $group = parent::valueGroup();
    if (!empty($this->settings['collapsed'])) {
      $group->format_settings['formatter'] = 'collapsed';
    }
    return $group;
  }

  /**
   * No need to ensure title for fieldsets.
   */
  protected function ensureTitle(&$tab) {
    // Do nothing.
  }
}
