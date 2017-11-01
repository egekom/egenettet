<?php
/**
 * @file
 * Accordion formatter for Field collection group.
 */

class CollectionFormatterAccordion extends CollectionFormatter {
  protected $groupClass = 'CollectionGroupAccordion';

  /**
   * Formatter info for the accordion field collection formatter.
   */
  public function info() {
    return array(
      'label' => t('Collections grouped in Accordion'),
    ) + parent::info();
  }
}
