<?php
/**
 * @file
 * Vertical tabs formatter for Field collection group.
 */

class CollectionFormatterVertical extends CollectionFormatter {
  protected $groupClass = 'CollectionGroupVertical';

  /**
   * Formatter info for the vertical tabs field collection formatter.
   */
  public function info() {
    return array(
      'label' => t('Collections grouped in Vertical tabs'),
    ) + parent::info();
  }
}
