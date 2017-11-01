<?php

/**
 * @file
 * Exchange Web Service new timeline plugin.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('EWS new create event'),
  'description' => t('Create new event in Exchange calendar.'),
  'category' => t('Elements'),
  'edit form' => 'ews_create_event_edit_form',
  'render callback' => 'ews_create_event_render',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Pane render callback.
 */
function ews_create_event_render($subtype, $conf, $panel_args, &$context) {
  static $ews_create_event_id = 1;

  $form = drupal_get_form('ews_create_event_render_form');

  $ret = new stdClass();
  $ret->content = $form;

  $ews_create_event_id++;

  return $ret;
}

/**
 * Renders the create calendar event form to create event.
 */
function ews_create_event_render_form($form, &$form_state) {
  $ews = _ews_get_action_object();

  // TODO: get the rooms somehow!
  $rooms = array(
    'Room1@prpexchange.local' => 'Room1',
    'Room2@prpexchange.local' => 'Room2');
  $default_placeholder = array('placeholder' => 'DD.MM.AA');

  $form = array();
  $form['room'] = array(
    '#type' => 'select',
    '#title' => t('Room'),
    '#options' => $rooms,
  );
  $form['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#required' => TRUE,
  );
  $form['start'] = array(
    '#type' => 'date_popup',
    '#date_format' => 'd-m-Y H:i',
    '#title' => t('Event start'),
    '#required' => TRUE,
    '#attributes' => $default_placeholder,
  );
  $form['end'] = array(
    '#type' => 'date_popup',
    '#date_format' => 'd-m-Y H:i',
    '#title' => t('Event end'),
    '#required' => TRUE,
    '#attributes' => $default_placeholder,
  );
  $form['book'] = array(
    '#type' => 'submit',
    '#value' => t('Book'),
  );
  return $form;
}

/**
 * Validates the create calendar event form.
 */
function ews_create_event_render_form_validate($form, &$form_state) {

  $start = DateTime::createFromFormat('d-m-Y H:i', $form_state['input']['start']['date'] . ' ' . $form_state['input']['start']['time']);
  if ($start === FALSE) {
    form_set_error('start', 'Incorrect date value.');
  }

  $end = DateTime::createFromFormat('d-m-Y H:i', $form_state['input']['end']['date'] . ' ' . $form_state['input']['end']['time']);
  if ($end === FALSE) {
    form_set_error('end', 'Incorrect date value.');
  }
}

/**
 * Handles the create event form submit and creates the event using ews.
 */
function ews_create_event_render_form_submit($form, &$form_state) {
  $ews = _ews_get_action_object();

  // TODO: get the rooms somehow!
  $rooms = array(
    'Room1@prpexchange.local' => 'Room1',
    'Room2@prpexchange.local' => 'Room2');

  $start = DateTime::createFromFormat('d-m-Y H:i', $form_state['input']['start']['date'] . ' ' . $form_state['input']['start']['time']);

  $end = DateTime::createFromFormat('d-m-Y H:i', $form_state['input']['end']['date'] . ' ' . $form_state['input']['end']['time']);

  $res = $ews->CreateEvent(
    $form_state['input']['subject'],
    $start,
    $end,
    $form_state['input']['room'],
    $rooms[$form_state['input']['room']]
    );
  $data = $res->ResponseMessages->CreateItemResponseMessage;
  if ($data->ResponseClass == 'Success') {
    $event_id = $data->Items->CalendarItem->ItemId->Id;
    $new_item_url = url('calendar/details/' . base64_encode($event_id));
    drupal_set_message(t('<a href="@url">Event</a> created successfully.', array(
      '@url' => $new_item_url,
      )), 'status');
  }
  else {
    $message = $data->ResponseCode . ': ' . $data->MessageText;
    watchdog('ews', $message);
    drupal_set_message(t('An error occured while creating the event.'), 'error');
  }
}

/**
 * Pane edit settings form callback.
 */
function ews_create_event_edit_form($form, &$form_state) {
  // TODO: what settings should this form provide?
  return $form;
}

/**
 * Pane edit settings submit handler.
 */
function ews_create_event_edit_form_submit($form, &$form_state) {
  // TODO: what settings should this form provide?
}
