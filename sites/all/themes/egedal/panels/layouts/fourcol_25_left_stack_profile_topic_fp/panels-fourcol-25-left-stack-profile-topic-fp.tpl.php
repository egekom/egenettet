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
<div class="panel-4col-25-left-stack-profile-topic-fp panel-display">

  <!-- Top -->
  <?php if ($content['top']): ?>
    <div class="panel-col-top panel-panel double">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif; ?>

  <!-- Left column -->
  <div class="panel-col-first">
    <!-- Left top -->
    <?php if ($content['left_top_1']): ?>
      <div class="panel-col-left-top panel-panel">
        <div class="inside">

          <!-- First Row -->
          <div class="panel-row-first row">
            <div class="panel-panel panel-col-first">
              <div class="inside"><?php print $content['left_top_1']; ?></div>
            </div>

            <div class="panel-panel panel-col">
              <div class="inside"><?php print $content['left_top_2']; ?></div>
            </div>

            <div class="panel-panel panel-col-last">
              <div class="inside"><?php print $content['left_top_3']; ?></div>
            </div>
          </div>

          <!-- Second Row -->
          <div class="panel-row-second row">
            <div class="panel-panel panel-col-first">
              <div class="inside"><?php print $content['left_top_4']; ?></div>
            </div>

            <div class="panel-panel panel-col">
              <div class="inside"><?php print $content['left_top_5']; ?></div>
            </div>

            <div class="panel-panel panel-col-last">
              <div class="inside"><?php print $content['left_top_6']; ?></div>
            </div>
          </div>

          <!-- Third Row -->
          <div class="panel-row-third row">
            <div class="panel-panel panel-col-first">
              <div class="inside"><?php print $content['left_top_7']; ?></div>
            </div>

            <div class="panel-panel panel-col">
              <div class="inside"><?php print $content['left_top_8']; ?></div>
            </div>

            <div class="panel-panel panel-col-last">
              <div class="inside"><?php print $content['left_top_9']; ?></div>
            </div>
          </div>

          <!-- Forth Row -->
          <div class="panel-row-forth row">
            <div class="panel-panel panel-col-first">
              <div class="inside"><?php print $content['left_top_10']; ?></div>
            </div>

            <div class="panel-panel panel-col">
              <div class="inside"><?php print $content['left_top_11']; ?></div>
            </div>

            <div class="panel-panel panel-col-last">
              <div class="inside"><?php print $content['left_top_12']; ?></div>
            </div>
          </div>

        </div>
      </div>
    <?php endif; ?>

    <!-- Left one -->
    <div class="panel-col-one panel-panel inner-column">
      <div class="inside"><?php print $content['left_one']; ?></div>
    </div>

    <!-- Left two -->
    <div class="panel-col-two panel-panel double">
      <div class="inside"><?php print $content['left_two']; ?></div>
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
