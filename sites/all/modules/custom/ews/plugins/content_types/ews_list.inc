<?php

/**
 * @file
 * Exchange Web Service new timeline plugin.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('EWS new list calendar'),
  'description' => t('My events from Exchange Web Service as list.'),
  'category' => t('Elements'),
  'edit form' => 'ews_list_edit_form',
  'render callback' => 'ews_list_render',
  'defaults' => array(
    'timeline_start_time' => 9,
    'timeline_end_time' => 18,
    'calendar_emails' => array(),
    'sort' => FALSE,
    'day_offset' => 1,
    'refresh_time' => 15,
    'email_filtration' => FALSE,
  ),
  'all contexts' => TRUE,
);

/**
 * Render callback.
 */
function ews_list_render($subtype, $conf, $panel_args, &$context) {
  drupal_add_library('system', 'ui.datepicker');
  static $ews_list_id = 1;

  if (isset($conf['sort']) && $conf['sort']) {
    usort($conf['calendar_emails'], function($a, $b) {
      return strtolower($a) > strtolower($b);
    });
  }

  $refresh_time = isset($conf['refresh_time']) ? $conf['refresh_time'] : 15;
  list($user_calendar_json, $start_date, $end_date) = _ews_timeline_get_data_by_emails_date($conf['calendar_emails'], $refresh_time);

  $timeline_settings = array();
  $timeline_settings['data'] = $user_calendar_json;
  $timeline_settings['emails'] = $conf['calendar_emails'];
  $timeline_settings['timeline_start_time'] = $conf['timeline_start_time'];
  $timeline_settings['timeline_end_time'] = $conf['timeline_end_time'];
  $timeline_settings['start_date'] = date('Y-m-d', $start_date);
  $timeline_settings['end_date'] = date('Y-m-d', $end_date);
  $timeline_settings['email_filtration'] = isset($conf['email_filtration']) ? $conf['email_filtration'] : FALSE;
  $timeline_settings['day_offset'] = isset($conf['day_offset']) ? $conf['day_offset'] : 1;
  $timeline_settings['refresh_time'] = $refresh_time;

  $ret = new stdClass();
  $ret->content = array(
    'timeline_container' => array(
      '#type' => 'markup',
      '#markup' => '<div class="ews-list' . ((1 < $timeline_settings['day_offset']) ? ' ews-timeline-multilist' : '') . '" id="ews-list-' . $ews_list_id . '">Loading calendar...</div>',
      '#attached' => array(
        'css' => array(
          drupal_get_path('module', 'ews') . '/css/list.css',
        ),
        'js' => array(
          array(
            'data' => drupal_get_path('module', 'ews') . '/js/helper.js',
            'weight' => 1,
          ),
          array(
            'data' => drupal_get_path('module', 'ews') . '/js/list.js',
            'weight' => 2,
          ),
          array(
            'type' => 'setting',
            'data' => array(
              'ews-list-' . $ews_list_id . '-settings' => $timeline_settings,
            ),
          ),
        ),
      ),
    ),
  );

  $ews_list_id++;

  return $ret;
}

/**
 * Edit form callback.
 */
function ews_list_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $users = entity_load('user');

  $user_options = array();
  foreach ($users as $user) {
    if ($user->mail) {
      $user_options[$user->mail] = $user->mail;
    }
  }

  $form['timeline_start_time'] = array(
    '#type' => 'textfield',
    '#title' => t('Timeline start time'),
    '#description' => t('24h format'),
    '#size' => 2,
    '#default_value' => $conf['timeline_start_time'],
  );
  $form['timeline_end_time'] = array(
    '#type' => 'textfield',
    '#title' => t('Timeline end time'),
    '#description' => t('24h format'),
    '#size' => 2,
    '#default_value' => $conf['timeline_end_time'],
  );
  // TODO: change this to choose emails from the drupal users.
  /*
  $form['calendar_emails'] = array(
  '#type' => 'select',
  '#multiple' => true,
  '#title' => t('Choose user calendars'),
  '#default_value' => $conf['calendar_emails'],
  '#options' => $user_options,
  );
  */
  $form['calendar_emails'] = array(
    '#type' => 'textfield',
    '#title' => t('Choose user calendars'),
    '#default_value' => implode(',', $conf['calendar_emails']),
  );
  $form['sort'] = array(
    '#title' => t('Sort'),
    '#type' => 'checkbox',
    '#default_value' => $conf['sort'],
  );
  $form['refresh_time'] = array(
    '#title' => t('Expiration'),
    '#type' => 'select',
    '#options' => array(
      5 => '5',
      10 => '10',
      15 => '15',
    ),
    '#default_value' => $conf['refresh_time'],
  );
  $form['day_offset'] = array(
    '#title' => t('Days to show'),
    '#type' => 'select',
    '#options' => array(
      1 => '1',
      2 => '2',
      3 => '3',
      4 => '4',
      5 => '5',
      6 => '6',
      7 => '7',
    ),
    '#default_value' => $conf['day_offset'],
  );
  $form['email_filtration'] = array(
    '#title' => t('Email filtration'),
    '#type' => 'checkbox',
    '#default_value' => $conf['email_filtration'],
  );

  return $form;
}

/**
 * Submit handler.
 */
function ews_list_edit_form_submit($form, &$form_state) {
  $form_state['conf']['timeline_start_time'] = $form_state['values']['timeline_start_time'];
  $form_state['conf']['timeline_end_time'] = $form_state['values']['timeline_end_time'];
  // TODO: change this to use drupal users emails.
  $form_state['conf']['calendar_emails'] = explode(',', $form_state['values']['calendar_emails']);
  $form_state['conf']['sort'] = $form_state['values']['sort'];
  $form_state['conf']['email_filtration'] = $form_state['values']['email_filtration'];
  $form_state['conf']['day_offset'] = $form_state['values']['day_offset'];
  $form_state['conf']['refresh_time'] = $form_state['values']['refresh_time'];
}
