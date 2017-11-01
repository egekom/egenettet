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

<div id="page" class="error-404">

<div class="error-404-wrapper">
<div class="error-404-content"><img src="/sites/all/themes/egedal/images/404.svg" alt="404" class="404-img"></div>
</div>

<div class="error-404-info">
  <?php print t('Skal der være tekst på denne side, skal de være her og også i 2 linier med et '); ?>
  <a href="<?php print $front_page; ?>" title="404" rel="404" class="error-link"><?php print t('tekstlink'); ?></a>
  <?php print t('indlejret eventuelt.'); ?>
</div>


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
