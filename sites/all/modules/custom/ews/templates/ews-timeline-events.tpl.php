<?php

/**
 * @file
 * Template file for ews_calendar block content inserted via the EWS module.
 *
 * Available variables:
 * - $item: The complete item being inserted.
 * - $settings: The complete item being inserted.
 */
?>
<div id="ews-timeline-scheduler">
  <div id="scheduler_here" class="dhx_cal_container" style='width:100%; height:100%;'>
    <div class="dhx_cal_navline">
      <?php if (isset($timeline_settings['toolbars']) && $timeline_settings['toolbars']): ?>
        <div class="dhx_cal_prev_button">&nbsp;</div>
        <div class="dhx_cal_next_button">&nbsp;</div>
        <div class="dhx_cal_today_button"></div>
        <div class="dhx_cal_tab" name="day_tab" style="right:204px;"></div>
        <div class="dhx_cal_tab" name="week_tab" style="right:140px;"></div>
        <div class="dhx_cal_tab" name="timeline_tab" style="right:280px;"></div>
        <div class="dhx_cal_tab" name="month_tab" style="right:76px;"></div>
      <?php endif; ?>
      <div class="dhx_cal_date"></div>
    </div>
    <div class="dhx_cal_header"></div>
    <div class="dhx_cal_data"></div>
  </div>
  <div class="ews-day-date"><?php print $day_date; ?></div>
</div>
