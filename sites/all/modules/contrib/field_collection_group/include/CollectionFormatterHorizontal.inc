<?php
/**
 * @file
 * Horizontal tabs formatter for Field collection group.
 */

class CollectionFormatterHorizontal extends CollectionFormatter {
  protected $groupClass = 'CollectionGroupHorizontal';

  /**
   * Formatter info for the horizontal tabs field collection formatter.
   */
  public function info() {
    return array(
      'label' => t('Collections grouped in Horizontal tabs'),
    ) + parent::info();
  }
}
