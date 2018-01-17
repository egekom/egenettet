<?php

/**
 * @file
 * Template file for ews_calendar block content inserted via the EWS module.
 *
 * Available variables:
 * - $item: The event from exchange calendar.
 */
?>
<div class="ews-calendar-wrapper">
  <?php if (!empty($items)): ?>
    <ul class="ews-calendar">
      <?php foreach ($items as $item): ?>
        <li class="ews-calendar-element">
          <div class="ews-calendar-date-block">
            <div class="ews-calendar-day"><?php print $item['start_date']['day']; ?></div>
            <div class="ews-calendar-month"><?php print $item['start_date']['month']; ?></div>
          </div>
          <div class="ews-calendar-event-block">
            <div class="ews-calendar-time-range"><?php print $item['start_date']['time'] . '-' . $item['end_date']['time']; ?></div>
            <div class="ews-calendar-event-subject"><?php print $item['subject']; ?></div>
            <?php if (isset($item['location'])): ?>
              <div class="ews-calendar-event-location"><?php print $item['location']; ?></div>
            <?php endif; ?>
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
