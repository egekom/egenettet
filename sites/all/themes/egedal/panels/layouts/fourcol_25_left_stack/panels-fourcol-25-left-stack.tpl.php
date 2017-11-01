<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-4col-25-left-stack panel-display">
  <!-- Top -->
  <?php if ($content['top']): ?>
    <div class="panel-col-top panel-panel double">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif; ?>

  <div class="panel-col-content-wrapper">
    <!-- First column -->
    <div class="panel-col-first wrapper panel-panel">
      <!-- Banner Left -->
      <?php if ($content['bannerl']): ?>
        <div class="panel-col-first panel-panel nested">
          <div class="inside"><?php print $content['bannerl']; ?></div>
        </div>
      <?php endif; ?>
      <!-- Banner right -->
      <?php if ($content['bannerr']): ?>
        <div class="panel-col-last panel-panel nested">
          <div class="inside"><?php print $content['bannerr']; ?></div>
        </div>
      <?php endif; ?>
      <!-- Middle wide -->
      <div class="panel-col-middle panel-panel nested double">
        <div class="inside"><?php print $content['middle']; ?></div>
      </div>
      <!-- Second column -->
      <div class="panel-col-first wrapper panel-panel nested">
        <div class="inside"><?php print $content['first']; ?></div>
      </div>
      <!-- Third column -->
      <div class="panel-col-last wrapper panel-panel nested">
        <div class="inside"><?php print $content['second']; ?></div>
      </div>
    </div>
    <!-- Middle column -->
    <div class="panel-col-middle panel-panel">
      <div class="inside"><?php print $content['third']; ?></div>
    </div>
    <!-- Last column -->
    <div class="panel-col-last panel-panel">
      <div class="inside"><?php print $content['fourth']; ?></div>
    </div>
  </div>

  <!-- Bottom -->
  <?php if ($content['bottom']): ?>
    <div class="panel-col-bottom panel-panel double">
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif; ?>

</div>
