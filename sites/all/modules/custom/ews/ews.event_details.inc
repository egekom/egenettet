<?php

/**
 * @file
 * Page callbacks for the ews module.
 */

/**
 * Page builder.
 */
function ews_event_details($id) {
  $ews = _ews_get_action_object();
  $event = $ews->GetCalendarItem(base64_decode($id));
  // dpm($event);
  $output = theme('ews_event_details', array(
    'event' => $event,
  ));
  return $output;
}
