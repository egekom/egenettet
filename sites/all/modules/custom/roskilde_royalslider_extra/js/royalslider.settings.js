/**
 * @file
 * Sets the royalslider settings.
 */

(function ($) {
  Drupal.behaviors.royalsliderSettings = {
    attach: function (context) {
      // Provide the vertical tab summaries.
      $(document, context).ready(function(context) {
        $(".royalSlider").royalSlider({
          arrowsNav: true,
          arrowsNavAutoHide: false,
          fadeinLoadedSlide: false,
          controlNavigationSpacing: 0,
          controlNavigation: 'bullets',
          imageScaleMode: 'none',
          imageAlignCenter:false,
          loop: true,
          numImagesToPreload: 6,
          slidesSpacing: 0,
          autoPlay: {
            enabled: true,
            pauseOnHover: true,
            delay: 6000,
          },
          autoHeight: true
        });
      });
    }
  };
})(jQuery);
