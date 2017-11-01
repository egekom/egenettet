<?php

/**
 * @file
 * EWS theme functions.
 */

/**
 * Prepares variables for block template.
 *
 * Default template: ews-calendar-events.tpl.php file.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: An associative array containing the calendar's items.
 *   - days_range: An integer containing the day range to items to show.
 */
function template_preprocess_ews_calendar_block(&$variables) {
  if (is_object($variables['items'])) {
    $variables['items'] = array($variables['items']);
  }
  $items = array();
  $now = strtotime("midnight", time());
  if (isset($variables['days_range'])) {
    $range = strtotime("+{$variables['days_range']} day", $now);
  }
  foreach ($variables['items'] as $item) {
    $start_date = strtotime($item->Start);
    if (isset($range) && ($now > $start_date || $range < $start_date)) {
      continue;
    }
    $items[] = _ews_get_properties($item);
  }

  $variables['items'] = array_reverse($items);
}

/**
 * Prepares variables for page template.
 *
 * Default template: ews-calendar-see-all.tpl.php file.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: An associative array containing the calendar's items.
 */
function template_preprocess_ews_calendar_see_all(&$variables) {
  if (is_object($variables['items'])) {
    $variables['items'] = array($variables['items']);
  }
  $items = array();
  $now = strtotime("midnight", time());
  foreach ($variables['items'] as $item) {
    // Build array in ascending order.
    $items[] = _ews_get_properties($item);
  }

  $variables['items'] = array_reverse($items);
}

/**
 * Helper function: get needed properties for displaying.
 *
 * @param object $item
 *   The item from soap responce.
 *
 * @return array
 *   An array with needed properties.
 */
function _ews_get_properties($item) {
  $start_date = strtotime($item->Start);
  $end_date = strtotime($item->End);

  $itm = array(
    'subject' => $item->Subject,
    'start_date' => array(
      'day' => date('j', $start_date),
      'month' => date('M', $start_date),
      'year' => date('Y', $start_date),
      'time' => date('H:i', $start_date),
    ),
    'end_date' => array(
      'day' => date('j', $end_date),
      'month' => date('M', $end_date),
      'year' => date('Y', $end_date),
      'time' => date('H:i', $end_date),
    ),
  );
  if (isset($item->Location)) {
    $itm['location'] = $item->Location;
  }

  return $itm;
}

/**
 * Preprocess variables for the ews-timeline-events.tpl.php file.
 */
function template_preprocess_ews_timeline_events(&$variables) {
  $variables['timeline_settings'] = array(
    'toolbars' => variable_get('toolbars', FALSE),
  );
}
