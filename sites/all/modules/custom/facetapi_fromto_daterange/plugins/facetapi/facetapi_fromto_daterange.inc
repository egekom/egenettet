<?php

/**
 * @file
 * The from_to_date widget plugin classes. Contains DateFromToWidget class.
 */

/**
 * Widget that renders date facets as a from-to range.
 */
class DateFromToWidget extends FacetapiWidgetLinks {
  /**
   * Renders the facet.
   */
  public function execute() {
    // We need a separate form ID for each facet, so Drupal can distinguish
    // between multiple facets on the page.
    // @see facetapi_fromto_daterange_forms().
    $count = &drupal_static('DateFromToWidget:execute', 0);
    $form_id = 'facetapi_fromto_daterange_form_' . ++$count;
    $element = &$this->build[$this->facet['field alias']];
    $element = drupal_get_form($form_id, $this, $element, $count);
  }

  /**
   * Builds a #default_value array.
   */
  public function buildDefaultValue($element) {
    if (!empty($element)) {
      $facet = reset($element);
      if ($facet['#active']) {
        $dates = array();
        foreach (explode(' TO ', trim($facet['#indexed_value'], '{[]}'), 2) as $date) {
          if ($d = strtotime(trim($date))) {
            $dates[] = date('d.m.Y', $d);
          }
          else {
            $dates[] = NULL;
          }
        }
        return $dates;
      }
    }
    return array(NULL, NULL);
  }

  /**
   * Overrides FacetapiWidget::settingsForm().
   */
  public function settingsForm(&$form, &$form_state) {
    $settings = $this->settings->settings;
    // Get facetapi settings form.
    $form_settings = &$form['widget']['widget_settings'];
    // Add "from to date" settings.
    $form_settings[$this->id] = array();
    $settings_element = &$form_settings[$this->id];
    // Autosubmit option.
    $settings_element['fromto_date_auto_submit'] = array(
      '#type' => 'checkbox',
      '#title' => t('Autosubmit'),
      '#description' => t('Hide submit button and submit selection automatically.'),
      '#default_value' => $settings['fromto_date_auto_submit'],
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );
    // Datepicker min date.
    $settings_element['allowed_date_min_value'] = array(
      '#title' => 'Min Date',
      '#type' => 'textfield',
      '#default_value' => $settings['allowed_date_min_value'],
      '#description' => t('UI Minimum date For Datepicker (e.g. 3Y,10M,2w,15D).'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );
    // Datepicker max date.
    $settings_element['allowed_date_max_value'] = array(
      '#title' => 'Max Date',
      '#type' => 'textfield',
      '#default_value' => $settings['allowed_date_max_value'],
      '#description' => t('UI Maximum date For Datepicker (e.g. 3Y,10M,2w,15D).'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );
  }

  /**
   * Overrides FacetapiWidget::getDefaultSettings().
   */
  public function getDefaultSettings() {
    return array(
      'fromto_date_auto_submit' => 0,
      'allowed_date_max_value' => '3Y',
      'allowed_date_min_value' => '3Y',
      'soft_limit' => 0,
      'nofollow' => 0,
      'show_expanded' => 0,
    );
  }
}
