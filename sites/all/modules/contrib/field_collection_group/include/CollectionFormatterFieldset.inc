<?php
/**
 * @file
 * Fieldset formatter for Field collection group.
 */

class CollectionFormatterFieldset extends CollectionFormatter {
  protected $groupClass = 'CollectionGroupFieldset';

  /**
   * Formatter info for the accordion field collection formatter.
   */
  public function info() {
    $info = array(
      'label' => t('Collections grouped in Fieldsets'),
    ) + parent::info();
    $info['settings']['collapsed'] = FALSE;
    return $info;
  }

  /**
   * Formatter settings form for the accordion field collection formatter.
   */
  public function settingsForm($field, $settings) {
    $element = parent::settingsForm($field, $settings);
    $element['collapsed'] = array(
      '#type' => 'checkbox',
      '#title' => t('Collapsed'),
      '#default_value' => $settings['collapsed'],
    );
    return $element;
  }

  /**
   * Formatter settings summary for the accordion field collection formatter.
   */
  public function settingsSummary($settings) {
    $summary = parent::settingsSummary($settings);
    if ($settings['collapsed']) {
      $summary[] = t('Fieldsets: collapsed', array('@field' => $settings['heading']));
    }
    return $summary;
  }
}
