/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.my_custom_behavior = {
    attach: function(context, settings) {

      $("a.print-this-page").once('print-this-page-processed').click(function(e){
        e.preventDefault();
        window.print();
        return false;
      });

    }
  };

})(jQuery, Drupal, this, this.document);


/**
 * Add fake throbbing to search forms submitting.
 */
(function($) {
  Drupal.behaviors.solrSearchForm = {
    attach: function(context, settings) {

      $('#apachesolr-panels-search-form,#search-block-form', context)
        .once('apachesolr-search-form-submit-triggered').bind('submit', function(event) {
          $(':input[name="apachesolr_panels_search_form"],:input[name="search_block_form"]', this).addClass('form-autocomplete throbbing');
          //$('.form-submit,.form-actions', this).hide();
          $(this).addClass('apachesolr-search-form-submit-triggered');
        })
    }
  }
}(jQuery));


// Settings -------------------------------------------------------------------
var animationSpeed = 200; //in ms (same as CSS transition time)
var mobileResolution = 720; //in px (same as CSS media query)
var search_url = '/search/global/';
    /* ON WINDOWS RESIZE */
    var waitForFinalEvent = (function () {
      var timers = {};
      return function (callback, ms, uniqueId) {
        if (!uniqueId) {
          uniqueId = "Don't call this twice without a uniqueId";
        }
        if (timers[uniqueId]) {
          clearTimeout (timers[uniqueId]);
        }
        timers[uniqueId] = setTimeout(callback, ms);
      };
    })();

(function ($) {
  $(document).ready(function() {

  $(function () {
    $('.pane-cmis-extra-search-orderby .item-list ul').tinyNav( {hasActive: ' a.active' });
    $('.pane-apachesolr-search-sort .item-list ul').tinyNav({ hasActive: ' a.active'});
  });

  if ($('body').hasClass('page-search')) {

    $('.facetapi-facetapi-checkbox-links li input').once().each(function() {
      $inputid = $(this).attr('id');
      $(this).wrap('<div class="checkbox-wrapper"></div>');
      $(this).after('<label for="' + $inputid + '"></label></div>')
    });

    $('.cmis-alfresco-facets li input').once().each(function() {
      $inputid = $(this).attr('id');
      $(this).wrap('<div class="checkbox-wrapper"></div>');
      $(this).after('<label for="' + $inputid + '"></label></div>')
    });

    if( $('.panel-pane').hasClass('pane-cmis-extra-search-orderby') || $('.panel-pane').hasClass('pane-apachesolr-search-sort') ) {
      $('.panel-col-first').addClass('active-sort-pane');
    }
  };

  $('.date-fromto-calendar-form-input').once().each(function() {
    $inputid = $(this).attr('id');
    $(this).attr('placeholder', 'DD.MM.AA');
  });

  (function(){
    $('.view-new-colleagues .views-field-field-phonebook-image').once('mdipu', function(){
      $(this)
        .mouseover(function() { $(this).next().show(); })
        .mouseout(function() { $(this).next().hide(); });
    });
  })();



  }); //end document ready function

  /* Custom Scrollbar for Alfresco folder tree structure and other elements --------------------------------------------------*/
  Drupal.behaviors.customScrollbar = {
    attach : function(context, settings) {

      // listen for the acitree events
      $('.aciTree').once().on('acitree', function(event, api, item, eventName, options) {
        var treeApi = api;
        if (eventName == 'init') {
          // Init the Scrollbar for each pane
          $(this).mCustomScrollbar({
            axis: "yx", // vertical & horizontal scrollbar
            scrollInertia: 0,
            advanced: {
              autoExpandHorizontalScroll: true,
              updateOnContentResize: true
            }
          });
        }
      });

      if($('body').hasClass('page-user-user-dashboard')) {
        $('.user-dashboard-custom .portlet-content').mCustomScrollbar({
          axis: "y", // vertical scrollbar
          scrollInertia: 0,
          advanced: {
            autoExpandHorizontalScroll: true,
            updateOnContentResize: true
          }
        });

        $('.portlet-config textarea').mCustomScrollbar({
          axis: "y", // vertical scrollbar
          scrollInertia: 0,
          advanced: {
            autoExpandHorizontalScroll: true,
            updateOnContentResize: true
          }
        });

      }

    }
  }

  /* Mobile search form --------------------------------------------------*/
  Drupal.behaviors.mobileMenuButtons = {
    attach : function(context, settings) {

      function checkActivity(self){
        if(!$(self).hasClass('active') && $('.mobile-navigation').find('.active').length ){
          $('.active').removeClass('active');
          $('.active-dropdown').fadeOut(animationSpeed).removeClass('active-dropdown');
        }
        $(self).toggleClass('active');
      }

      function enableMobileMenu(){
        if ($(window).width() <= 640) {
          /* Navigation Dropdown */
          $('.mobile-menu-toggle').once('mobile-menu').on('click', function(){
            checkActivity(this);
            $('#navigation').toggle(animationSpeed).toggleClass('active-dropdown');
          });
          /* Search Dropdown */
          $('.mobile-search-toggle').once('mobile2-menu').on('click', function(){
            checkActivity(this);
            $('.left-section .search-area').toggle(animationSpeed).toggleClass('active-dropdown');
          });
          /* Bookmark Dropdown */
          $('.mobile-flag-bookmark').once('mobile3-menu').on('click', function(){
            checkActivity(this);
            $('#block-views-flag-bookmarks-block-1').toggle(animationSpeed).toggleClass('active-dropdown');
          });
          /* Topic FP Dropdown */
          $('.node-type-topic-frontpage .panel-col-left-top .panel-pane').once('mobileFP-menu').on('click', function(){
            checkActivity(this);
            $(this).find('.field-name-field-links, .field-name-field-text').toggle(animationSpeed).toggleClass('active-dropdown');
          });
          /* Article menu Dropdown */
          $('.pane-menu-block-topic-pages-menu-two-levels .menu-name-main-menu > ul > .first.active-trail > a').once('article-menu').on('click', function(event){
            event.preventDefault();
            checkActivity(this);
            $(this).next().toggle(animationSpeed).toggleClass('active-dropdown');
          });
        } else{
          $('#navigation, #block-views-flag-bookmarks-block-1, .left-section .search-area, .panel-col-left-top .field-name-field-links, .panel-col-left-top .field-name-field-text, .menu-block-topic_pages_menu_two_levels > ul > li > ul').removeAttr('style');
        }
      }

      // Check for Mobile menu on Document.ready
      enableMobileMenu();

      // Check for Mobile on resize
      $(window).resize(function() {
         waitForFinalEvent(function(){
          enableMobileMenu();
        }, 25, "some link-menu-unique uniqueId")
      })

      // Listen for orientation changes
      window.addEventListener('orientationchange', function() {
        enableMobileMenu();
      }, false);

    }
  }








  /* Mobile search phonebook table ---------------------------------------*/

  Drupal.behaviors.mobileSearchPhonebook = {
    attach : function(context, settings) {

      if ($(window).width() <= 800) {
        $('tr.search-result').each(function() {
          $(this).children('td.name').once('mobile-phonebook-table').on('click', function(){
            if ($(this).children('td.name .icon').hasClass('icon-arrow-down')) {
                $(this).children('td.name .icon').removeClass('icon-arrow-down').addClass('icon-arrow-up');
                //$(this).siblings('td').show();
                $(this).siblings('td.unit').css('display', 'inline-block');
                $(this).siblings('td.area').css('display', 'inline-block');
                $(this).siblings('td.tel').css('display', 'inline-block');
                $(this).siblings('td.mail').css('display', 'inline-block');
            } else{
                $(this).children('td.name .icon').removeClass('icon-arrow-up').addClass('icon-arrow-down');
                //$(this).siblings('td').hide();
                $(this).siblings('td.unit').removeAttr('style');
                $(this).siblings('td.area').removeAttr('style');
                $(this).siblings('td.tel').removeAttr('style');
                $(this).siblings('td.mail').removeAttr('style');
            };
          })
        })
      } else {}

      $(window).resize(function() {
         waitForFinalEvent(function(){
          if ($(window).width() > 800) {
            $('tr.search-result td').removeAttr('style');
          }
          if ($(window).width() <= 800) {
            $('tr.search-result td.name .icon').removeClass('icon-arrow-up').addClass('icon-arrow-down');
          }
        }, 25, "some phonebook-unique uniqueId")
      })



    }
  }

})(jQuery);
