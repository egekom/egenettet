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
<div class="panel-4col-25-left-stack-profile panel-display">

  <!-- Top -->
  <?php if ($content['top']): ?>
    <div class="panel-col-top panel-panel double">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif; ?>

  <!-- Left column -->
  <div class="panel-col-first">
    <!-- Left top -->
    <?php if ($content['left_top']): ?>
      <div class="panel-col-left-top panel-panel double">
        <div class="inside"><?php print $content['left_top']; ?></div>
      </div>
    <?php endif; ?>
    <!-- Left one -->
    <div class="panel-col-one panel-panel inner-column">
      <div class="inside"><?php print $content['left_one']; ?></div>
    </div>
    <!-- Left two -->
    <div class="panel-col-two panel-panel inner-column">
      <div class="inside"><?php print $content['left_two']; ?></div>
    </div>
    <!-- Left three -->
    <div class="panel-col-three panel-panel inner-column">
      <div class="inside"><?php print $content['left_three']; ?></div>
    </div>
    <!-- Left four -->
    <div class="panel-col-four panel-panel inner-column">
      <div class="inside"><?php print $content['left_four']; ?></div>
    </div>

    <!-- Left bottom -->
    <div class="panel-col-left-bottom panel-panel double">
      <div class="inside"><?php print $content['left_bottom']; ?></div>
    </div>
  </div>

  <!-- Right column -->
  <?php if ($content['right']): ?>
    <div class="panel-col-last panel-panel">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>
  <?php endif; ?>


  <!-- Bottom -->
  <?php if ($content['bottom']): ?>
    <div class="panel-col-bottom panel-panel double">
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif; ?>

</div>
