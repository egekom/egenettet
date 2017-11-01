<?php

/**
 * @file
 * Page callbacks for the ews module.
 */

/**
 * Page builder.
 */
function ews_all_calendar_events() {
  $items = _ews_calendar_get_data();

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
        $output .= theme('ews_calendar_see_all',
                        array(
                          'items' => $data->RootFolder->Items->CalendarItem,
                        ));
      }
    }
  }

  return $output;
}
