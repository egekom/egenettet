<?php

/**
 * @file
 * homebox-block.tpl.php
 * Default theme implementation each homebox block.
 */

?>
<div id="homebox-block-<?php print $block->key; ?>" class="<?php print $block->homebox_classes ?> clearfix block block-<?php print $block->module ?><?php print ' user-dashboard-'.$block->delta; ?>">
  <div class="homebox-portlet-inner">
    <h3 class="portlet-header">
      <?php if ($block->closable): ?>
        <a class="portlet-icon portlet-close"></a>
        <div class="confirmation-box">
          <p><?php print t("Do you really want to close it?"); ?></p>
          <span class="confirm"><?php print t("Yes"); ?></span>
          <span class="refuse"><?php print t("No"); ?></span>
        </div>
      <?php endif; ?>
      <a class="portlet-icon portlet-maximize"></a>
      <a class="portlet-icon portlet-minus"></a>
      <?php if ($page->settings['color'] || isset($block->edit_form)): ?>
        <a class="portlet-icon portlet-settings"></a>
      <?php endif; ?>
      

    </h3>
    <div class="portlet-config">
      <?php if ($page->settings['color']): ?>
        <div class="clearfix"><div class="homebox-colors">
          <span class="homebox-color-message"><?php print t('Select a color') . ':'; ?></span>
          <?php for ($i=0; $i < HOMEBOX_NUMBER_OF_COLOURS; $i++): ?>
            <span class="homebox-color-selector" style="background-color: <?php print $page->settings['colors'][$i] ?>;">&nbsp;</span>
          <?php endfor ?>
        </div></div>
      <?php endif; ?>
      <?php if (isset($block->edit_form)): print $block->edit_form; endif; ?>
    </div>
    <?php if ($block->delta=='custom') { ?><a class="portlet-settings icon-pen" original-title=""></a> <?php } ?>
    <div class="portlet-content-wrapper">
      <h3 class="portlet-title pane-title"><?php print $block->subject ?></h3>
       <div class="portlet-content content"><?php if (is_string($block->content)){ print $block->content; } else { print drupal_render($block->content); } ?></div>
    </div>
  </div>
</div>
