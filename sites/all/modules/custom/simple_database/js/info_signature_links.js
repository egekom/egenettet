/**
 * @file
 * Script for phonebook links behaviou.
 */

(function ($) {
  Drupal.behaviors.linksInfoSignature = {
    attach: function (context) {
      $.ajax({
        type: "POST",
        dataType: 'json',
        data: {
          phonebook_node: Drupal.settings.phonebookNode,
        },
        url: Drupal.settings.basePath + Drupal.settings.pathPrefix + 'ajax/phonebook_edit_links',
        success: function(data) {
          $('div.phonebook-edit-info-link-wrapper span', context).each(function(){
            $(this).html(data.info);
          });
          $('div.phonebook-edit-signature-link-wrapper span', context).each(function(){
            $(this).html(data.signature);
          });
        }
      });
    }
  };
})(jQuery);
