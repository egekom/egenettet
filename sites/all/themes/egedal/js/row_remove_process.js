/**
 * @file
 * Provide view rows remove functionality.
 *
 * The script will effect views which has show type 'content'
 * and 'CSS class' was settuped with 'row-remove-process'.
 */

(function ($) {
  Drupal.behaviors.rowRemoveProcess = {
    attach: function (context, settings ) {
      // Select view content.
      var selector = $('.view.row-remove-process');
      if (selector.length > 0) {
        // Select every row from view from content type 'Teaser'.
        $.each($('div.node', selector), function(i, value){
          if ($('div.message-icon', value).length == 0) {
            // Add a new element.
            $(value).children('.content').prepend($("<i class='icon icon-minus'/>"));
          }
        });
        // Bind the new element with click handler.
        $('i.icon').off('click').on('click', function(event){

/*          if ($('i.icon').hasClass('icon-minus')) {
            $('i.icon').removeClass('icon-minus').addClass('icon-plus-1')
          } else{
            $('i.icon').removeClass('icon-plus-1').addClass('icon-minus')
          }


          if ($('.view-warning-list .node-warning ').hasClass('minimized')) {
            $('.view-warning-list .node-warning ').removeClass('minimized')
          } else{
            $('.view-warning-list .node-warning ').addClass('minimized');
          };*/

          // Minimize a view row.
          if ($(this).hasClass('icon-minus')) {
            $(this).removeClass('icon-minus').addClass('icon-plus-1')
          } else{
            $(this).removeClass('icon-plus-1').addClass('icon-minus')
          }

          if ($(this).closest('.node-warning').hasClass('minimized')) {
            $(this).closest('.node-warning').removeClass('minimized');
          } else{
            $(this).closest('.node-warning').addClass('minimized');
            $('.view-warning-list').css('width', 'auto');
          };

          $('.view-warning-list .views-row .node-warning').each(function() {
            if (!$(this).hasClass('minimized')) {
              $('.view-warning-list').css('width', '100%');
            } else{
            };
          });

/*          // Remove a view row.
          $(this).parents(".views-row").remove();
          // Prevent page redirect if the element was wrapped into 'a' tag.*/
          return false;
        })
      }
    }
  };
})(jQuery);
