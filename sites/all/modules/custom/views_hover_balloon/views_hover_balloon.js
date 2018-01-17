Drupal.behaviors.viewsHoverBalloon = {
  attach: function (context, settings) {
    var result_wrapper = "views-hover-balloon-wrapper";
    //add html to show user details
    jQuery( ".views-hover-balloon", context).each(function( index ) {
        if(!jQuery(this).closest('div').hasClass("." + result_wrapper)){
          jQuery(this).append("<div class='" + result_wrapper +"' style='display:none'></div>");
        }
    });
    jQuery('.views-hover-balloon', context).mouseover(function(){
      var $container = jQuery(this);

      if ($container.children('.' + result_wrapper).is(':empty')) {
        Drupal.behaviors.viewsHoverBalloon.load_view_data($container, result_wrapper, true);
      }else{
        //just show popup
        $container.children('.' + result_wrapper).show();
      }
    }).mouseout(function() {
      //hide popup
      jQuery(this).children('.' + result_wrapper).hide();
    });

    // Load views data on page load.
/*    jQuery( ".views-hover-balloon", context).each(function( index ) {
        Drupal.behaviors.viewsHoverBalloon.load_view_data(jQuery(this), result_wrapper, false);
    });*/
  },

  // Load view contents inside the result wrapper.
  load_view_data: function(container, result_wrapper, show) {
    if(show === undefined) show=false;
    //if empty then make ajax call and get view content
    if (container.data('ajax_called') === undefined) {
      var url = Drupal.settings.basePath + 'views-hover-balloon/'+ container.data('viewname') + '/' + container.data(
        'displayname') + '/' + container.data('args');
      container.append('<div class="ajax-progress"><div class="throbber">&nbsp;</div></div>');
      container.data('ajax_called',1);
      jQuery.ajax({
        url: url,
        type: 'GET',
        success: function (data) {
          container.children('.' + result_wrapper).html(data.html);
          container.children(".ajax-progress").remove();
          if (show) {
            container.children('.' + result_wrapper).show();
          }
          container.removeData('ajax_called');
        }
      });
    }
  }
}
