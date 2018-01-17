(function($){
  Drupal.behaviors.roskildeRemoveRowWeight = {
    attach: function (context, settings) {
      $('.tabledrag-toggle-weight-wrapper').remove();
    }
  };
})(jQuery);
