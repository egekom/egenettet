<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a three column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>

<div class="panel-display panel-3col-33 panel-3col-33-threerow rows-3 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="panel-row-first row">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['left1']; ?></div>
    </div>

    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['middle1']; ?></div>
    </div>

    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['right1']; ?></div>
    </div>
  </div>

  <div class="panel-row-second row">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['left2']; ?></div>
    </div>

    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['middle2']; ?></div>
    </div>

    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['right2']; ?></div>
    </div>
  </div>

  <div class="panel-row-third row">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['left3']; ?></div>
    </div>

    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['middle3']; ?></div>
    </div>

    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['right3']; ?></div>
    </div>
  </div>
</div>
