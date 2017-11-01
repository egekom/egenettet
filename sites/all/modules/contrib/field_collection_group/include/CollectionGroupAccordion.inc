<?php
/**
 * @file
 * Accordion group of the field collection grouping functionality.
 */

class CollectionGroupAccordion extends CollectionGroup {
  protected $valueFormat = 'accordion_item';
  protected $wrapperFomat = 'accordion';

  /**
   * Add accordion-specific settings to the wrapper group.
   */
  protected function wrapperGroup() {
    $group = parent::wrapperGroup();
    $group->format_settings['instance_settings']['speed'] = 'fast';
    $group->format_settings['instance_settings']['effect'] = 'bounceslide';
    return $group;
  }

  /**
   * Override the rendering of the group for individual accordion items.
   */
  protected function valuePreRender(&$tab, stdClass $group, &$element) {
    $this->ensureTitle($tab);

    $label_markup = '<h3 class="field-group-format-toggler accordion_item"><a href="#">' . $tab['#title'] . '</a></h3>';
    $tab += array(
      '#type' => 'markup',
      '#prefix' => $label_markup . '<div class="field-group-format-wrapper">',
      '#suffix' => '</div>',
    );
  }

  /**
   * Add accordion-specific javascript.
   */
  protected function addAttached(&$attached) {
    $attached['js'][] = drupal_get_path('module', 'field_group') . '/field_group.js';
  }
}
