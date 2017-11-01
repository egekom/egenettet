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
<div class="panel-4col-25-50-25-tworows panel-display">

  <!-- Top -->
  <?php if ($content['top']): ?>
    <div class="panel-col-top panel-panel double">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif; ?>

  <div class="panel-col-content-wrapper top">
    <!-- First column -->
    <div class="panel-col-first panel-panel">
      <div class="inside"><?php print $content['top_left']; ?></div>
    </div>
    <!-- Second column -->
    <div class="panel-col-middle panel-panel double">
      <div class="inside"><?php print $content['top_middle']; ?></div>
    </div>
    <!-- Third column -->
    <div class="panel-col-last panel-panel">
      <div class="inside"><?php print $content['top_right']; ?></div>
    </div>
  </div>
  <div class="panel-col-content-wrapper bottom">
    <!-- First column -->
    <?php if ($content['bottom_left']): ?>
      <div class="panel-col-first panel-panel">
        <div class="inside"><?php print $content['bottom_left']; ?></div>
      </div>
    <?php endif; ?>
    <!-- Second column -->
    <div class="panel-col-middle panel-panel double">
      <div class="inside"><?php print $content['bottom_middle']; ?></div>
    </div>
    <!-- Third column -->
    <?php if ($content['bottom_right']): ?>
      <div class="panel-col-last panel-panel">
        <div class="inside"><?php print $content['bottom_right']; ?></div>
      </div>
    <?php endif; ?>
  </div>
  <!-- Bottom -->
  <?php if ($content['bottom']): ?>
    <div class="panel-col-bottom panel-panel double">
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif; ?>

</div>
