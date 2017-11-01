<?php

/**
 * @file
 * Exchange Web Service calendar plugin.
 */

$plugin = array(
  // TRUE means has no subtypes.
  'single' => TRUE,
  'title' => t('EWS calendar'),
  'description' => t('My events from Exchange Web Service calendar.'),
  // Name of a function which will render the block.
  'render callback' => 'ews_calendar_render',
  'edit form' => 'ews_calendar_edit_form',
  'defaults' => array(
    'days_range' => 2,
  ),
  'category' => t('Elements'),
);

/**
 * Render callback.
 */
function ews_calendar_render($subtype, $conf, $panel_args, &$context) {
  $items = _ews_calendar_get_data(array(
    'folder_ids' => array(
      EWSType_DistinguishedFolderIdNameType::CALENDAR,
      EWSType_DistinguishedFolderIdNameType::INBOX,
    ),
  ));

  $output = '';
  // Look throuth folders.
  foreach ($items as $data) {
    if (
      !($data->ResponseCode == 'NoError' && $data->ResponseClass == 'Success') ||
      !isset($data->RootFolder->TotalItemsInView)
    ) {
      if ($data->ResponseClass == 'Error') {
        $message = $data->ResponseCode . ': ' . $data->MessageText;
        drupal_set_message($message, 'error');
        watchdog('ews', $message, array(), WATCHDOG_ERROR);
      }
      continue;
    }
    if ($data->RootFolder->TotalItemsInView > 0) {
      // Show items into 'calendar' folder.
      if (isset($data->RootFolder->Items->CalendarItem)) {
        $output .= theme('ews_calendar_block', array(
          'items' => $data->RootFolder->Items->CalendarItem,
          'days_range' => $conf['days_range'],
        ));
      }
    }
  }

  if (isset($output)) {
    return (object) array('content' => $output);
  }

  return NULL;
}

/**
 * Edit form callback.
 */
function ews_calendar_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['days_range'] = array(
    '#type' => 'textfield',
    '#title' => t('Days range'),
    '#size' => 2,
    '#default_value' => (int) $conf['days_range'],
  );

  return $form;
}

/**
 * Validate handler.
 */
function ews_calendar_edit_form_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['days_range'])) {
    form_set_error('days_range', t('Number of days range must be a positive integer.'));
  }
}

/**
 * Submit handler.
 */
function ews_calendar_edit_form_submit($form, &$form_state) {
  $form_state['conf']['days_range'] = (int) $form_state['values']['days_range'];
}
