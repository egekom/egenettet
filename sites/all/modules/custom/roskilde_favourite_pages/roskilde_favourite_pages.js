Drupal.behaviors.roskildeFavouritePages = {
  attach: function (context, settings) {
    jQuery(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
      jQuery('.views-hover-balloon-wrapper',context).html('');
    });
  }
}

