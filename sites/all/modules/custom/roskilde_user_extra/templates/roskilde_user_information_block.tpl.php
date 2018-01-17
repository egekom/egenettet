<?php
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

?>
<div id="logged-in-area">
  <div id="logged-in-area-summary">
    <div class="user-picture">
      <?php print $user_picture; ?>
      <!-- <span class="user-name"><?php print $user_name; ?></span> -->
    </div>
  </div>
  <div id="logged-in-area-links" class="hidden">
    <?php print theme('links', array('links' => $links)); ?>
  </div>
</div>
