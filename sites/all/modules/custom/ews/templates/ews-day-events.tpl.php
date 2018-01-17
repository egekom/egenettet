<?php

/**
 * @file
 * Template file for ews_day_events block content inserted via the EWS module.
 *
 * Available variables:
 * - $events: The events from exchange calendar.
 */
?>
<div class="ews-day-events-wrapper">
<div class="ews-day-date"><?php print $day_date; ?></div>
  <?php if (!empty($events)): ?>
    <ul class="ews-day-events">
      <?php foreach ($events as $event): ?>
        <li class="ews-day-events-element">
          <div class="ews-day-event-name">
            <?php print $event['name']; ?>
          </div>
          <div class="ews-day-event-time">
            <?php print $event['start_date']['time']; ?> - <?php print $event['end_date']['time']; ?>
          </div>
          <div class="clearfix"></div>
        </li>
      <?php endforeach; ?>
    </ul>
  <?php else: ?>
    <div class="ews-no-calendar">No calendar entries</div>
  <?php endif; ?>
</div>
<div class="clearfix"></div>
