<?php
/**
 * @file
 * Horizontal tabs group of the field collection grouping functionality.
 */

class CollectionGroupHorizontal extends CollectionGroup {
  protected $valueFormat = 'htab';
  protected $wrapperFomat = 'htabs';

  /**
   * Add the mandatory label to horizontal tabs wrapper group.
   */
  protected function wrapperGroup() {
    $group = parent::wrapperGroup();
    $group->label = 'Horizontal tabs';
    return $group;
  }
}
