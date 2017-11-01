<?php

/**
 * @file
 * Template file for single ews event.
 *
 * Available variables:
 * - $event: The event from exchange calendar.
 */
?>
<div class="ews-single-event-wrapper">
  <?php if (!empty($event)): ?>
    <h2><?php echo $event->Subject; ?></h2>
    <ul class="ews-single-event">
      <li><span>Start:</span> <span><?php echo $event->Start; ?></span></li>
      <li><span>End:</span> <span><?php echo $event->End; ?></span></li>
      <li><span>Location:</span> <span><?php echo (isset($event->Location) ? $event->Location : ''); ?></span></li>
      <li><span>Sensitivity:</span> <span><?php echo $event->Sensitivity; ?></span></li>
      <li><span>Importance:</span><span> <?php echo $event->Importance; ?></span></li>
      <li><span>DateTimeCreated:</span> <span><?php echo $event->DateTimeCreated; ?></span></li>
      <li><span>IsAllDayEvent:</span> <span><?php echo $event->IsAllDayEvent; ?></span></li>
      <li><span>Organizer->Mailbox->Name:</span> <span><?php echo $event->Organizer->Mailbox->Name; ?></span></li>
    </ul>
  <?php else: ?>
    <div class="ews-no-calendar">Event not found</div>
  <?php endif; ?>
</div>
<div class="clearfix"></div>
