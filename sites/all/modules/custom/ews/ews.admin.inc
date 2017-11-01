<?php

/**
 * @file
 * Admin page callbacks for the ews module.
 */

/**
 * Form builder; Configure how the site conect to the Exchange server.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function ews_settings_form() {
  $form['exchange_server_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Exchange Server URL'),
    '#default_value' => variable_get('exchange_server_url', ''),
    '#description' => t('The url to the exchange server you wish to connect to, <b>without the protocol</b>. Example: mail.example.com.'),
  );
  $form['exchange_server_cached_hours'] = array(
    '#type' => 'textfield',
    '#title' => t('Cached Hours'),
    '#default_value' => variable_get('exchange_server_cached_hours', 3),
    '#size' => 5,
  );

  $options = array(
    'attributes' => array(
      'target' => '_blank',
    ),
  );
  $form['timeline_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Timeline settings'),
    '#description' => t('More help !link', array(
      '!link' => l(t('hear'), libraries_get_path('dhtmlxScheduler') . '/samples/index.html', $options))
    ),
  );
  $form['timeline_settings']['timeline_start_hour'] = array(
    '#type' => 'textfield',
    '#title' => t('Start hour'),
    '#default_value' => variable_get('timeline_start_hour', 8),
    '#required' => TRUE,
    '#size' => 5,
  );
  $form['timeline_settings']['timeline_work_hours'] = array(
    '#type' => 'textfield',
    '#title' => t('Work hours'),
    '#default_value' => variable_get('timeline_work_hours', 10),
    '#required' => TRUE,
    '#size' => 5,
  );
  $form['timeline_settings']['toolbars'] = array(
    '#type' => 'checkbox',
    '#title' => t('Additional toolbars'),
    '#default_value' => variable_get('toolbars', FALSE),
  );

  return system_settings_form($form);
}

/**
 * Form validation handler for ews_settings_form().
 */
function ews_settings_form_validate(&$form, &$form_state) {
  $ews_url = parse_url($form_state['values']['exchange_server_url']);
  if (isset($ews_url['scheme'])) {
    $message = t('Enter the URL without the protocol');
    form_set_error('exchange_server_url', $message);
  }
  $int_fields['timeline_start_hour'] = $form_state['values']['timeline_start_hour'];
  $int_fields['timeline_work_hours'] = $form_state['values']['timeline_work_hours'];
  $field_sum = 0;
  foreach ($int_fields as $key => $value) {
    $message = '';
    switch (TRUE) {
      case (!is_numeric($value)):
        $message .= t('Not a number');
        break;

      case (!ctype_digit($value)):
        $message .= t('Not an integer number');
        break;

      case (intval($value) < 8):
        $message .= t('The number is smaller than @min', array('@min' => 8));
        break;

      default: $field_sum += intval($value);
    }
    if (!empty($message)) {
      form_set_error($key, $message);
    }
  }
  if ($field_sum > 24) {
    $message = t('More than 24 hours');
    form_set_error('timeline_settings', $message);
  }
}
