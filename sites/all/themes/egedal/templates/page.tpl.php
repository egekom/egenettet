<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<header class="header" id="header" role="banner">

  <div class="header-content">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>
    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <ul class="mobile-navigation">
      <li><span class="mobile-menu-toggle"><?php print t('Menu'); ?></span></li>
      <li><span class="mobile-search-toggle"><?php print t('Search'); ?></span></li>
      <li><span class="mobile-flag-bookmark"><?php print t('Saved'); ?></span></li>
      <li>
        <?php print render($page['header']['roskilde_user_extra_roskilde_user_information_block']); ?>
        <span class="mobile-user-info-block"><?php print t('Min side'); ?></span>
      </li>
    </ul>

    <div class="left-section">
      <div class="search-area">
        <?php print render($page['header']['search_form']); ?>
        <?php print render($page['header']['roskilde_phonebook_phonebook_search_form']); ?>
      </div>
      <div class="header-flag-bookmark">
        <div class="page-bookmarks"></div>
        <?php print render($page['header']['views_flag_bookmarks-block_1']); ?>
      </div>
      <?php print render($page['header']['block_1']); ?>
      <?php print render($page['header']['roskilde_user_extra_roskilde_user_information_block']); ?>
    </div>
  </div>
</header>

<div id="navigation">

  <?php if ($main_menu): ?>
    <nav id="main-menu" role="navigation" tabindex="-1">
      <?php
      // This code snippet is hard to modify. We recommend turning off the
      // "Main menu" on your sub-theme's settings form, deleting this PHP
      // code block, and, instead, using the "Menu block" module.
      // @see https://drupal.org/project/menu_block
      print theme('links__system_main_menu', array(
        'links' => $main_menu,
        'attributes' => array(
          'class' => array('links', 'inline', 'clearfix'),
        ),
        'heading' => array(
          'text' => t('Main menu'),
          'level' => 'h2',
          'class' => array('element-invisible'),
        ),
      )); ?>
    </nav>
  <?php endif; ?>

  <?php print render($page['navigation']); ?>

</div>

<div id="page">

<div id="mobile-logged-in-area">
<?php global $user; ?>
  <?php if ($user->uid > 0): ?>
    <a href="/user/<?php print $user->uid; ?>" title="<?php print t('View user profile.'); ?>" about="/user/<?php print $user->uid; ?>" class="username"><?php print $user->name; ?></a>
  <?php endif; ?>
</div>


<?php if ($secondary_menu): ?>
  <nav class="header__secondary-menu" id="mobile-secondary-menu" role="navigation">
    <?php print theme('links__system_secondary_menu', array(
      'links' => $secondary_menu,
      'attributes' => array(
        'class' => array('links', 'inline', 'clearfix'),
      ),
      'heading' => array(
        'text' => $secondary_menu_heading,
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    )); ?>
  </nav>
<?php endif; ?><!-- //mobile-secondary-menu -->

  <?php
    // Render the above content.
    $above_content  = render($page['above_content']);
  ?>
  <?php if ($above_content): ?>
    <div class="above-content-wrapper">
      <div class="above-content">
        <?php print $above_content; ?>
      </div>
    </div>
  <?php endif; ?>
  <div id="main">
    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>
    <?php if ($sidebar_first): ?>
      <aside class="sidebars first">
        <?php print $sidebar_first; ?>
      </aside>
    <?php endif; ?>


    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php //print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>


    <?php if ($sidebar_second): ?>
      <aside class="sidebars second">
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>


  </div><!-- //#main -->

  <?php
    $below_content  = render($page['below_content']);
  ?>
  <?php if ($below_content): ?>
    <div class="below-content">
      <?php print $below_content; ?>
    </div>
  <?php endif; ?>



</div><!-- //#page -->

<div class="footer-wrapper" id="footer-wrapper" role="footer">
	<div class="content">
		<?php if ($logo): ?>
			<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo header__logo" id="logo-footer"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
		<?php endif; ?>
	    <?php print render($page['footer']); ?>
	</div>
</div>
<div class="below-footer" id="below-footer" >
  <?php print render($page['bottom']); ?>
</div>
