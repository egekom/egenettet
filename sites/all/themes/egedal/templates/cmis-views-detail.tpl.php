<?php
/**
 * @file
 * Theme implementation to display CMIS views with a thumbnail and details.
 */
?>
<ul class="posts cmisposts">
<?php foreach ($variables['rows'] as $child) : ?>
<li>
  <?php if (isset($child->folder_markup)) : ?>
    <div class="field-cmis-browser2-treeview">
      <div class="pane-cmis-browser2-treeview">
        <?php echo $child->folder_markup; ?>
      </div>
    </div>
  <?php else: ?>
    <div class="block-post">
      <?php echo $child->properties["cmis:link-image"]; ?>
      <div class="cmisdetails">
        <strong class="title"><?php echo $child->properties["cmis:link-title"]; ?></strong>
      </div>
    </div>
  <?php endif; ?>
</li>
<?php endforeach; ?>
</ul>
<div style="clear:both"></div>
