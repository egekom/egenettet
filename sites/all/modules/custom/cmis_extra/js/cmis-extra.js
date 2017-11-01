/**
 * Implements Drupal.behaviors for the cmis_extra module.
 */
(function($) {

  function getFrame(e) {
    try {
      if (e.source.frameElement) {
        return e.source.frameElement;
      }
    }
    catch(e) {
      //
    }

    var frame;
    $('iframe').each(function () {
      if (this.contentWindow === e.source) {
        frame = this;
      }
    });
    return frame;
  }


 window.onmessage = function(e){
    var frame;
    if (e.data.iframeHeight && (frame = getFrame(e))) {
      $(frame).height(e.data.iframeHeight);
    }
  };

  Drupal.behaviors.cmisExtraFacets = {
    attach: function (context, settings) {

      $('.cmis-alfresco-facets li', context)
        .bind('click', function (event) {
          var href = $(this).children('a').attr('href');
          if (href) {
            window.location.href = href;
          }
        });

      if (Drupal.settings.RoskildeCmisUrl !== undefined) {
        $('.pane-cmis-extra-folder-pane', context).each(function() {
          var iframeName = $(this).find('table.cmis_browser_browse_children').data('cmis_view_iframe_name');
          if ($('iframe[name="' + iframeName + '"]').length > 0) {
            $(this).find("tr td:first-child a").each(function() {
              $(this).addClass('cmis-view-processed');
              if ($(this).data('document_id') !== undefined) {
                $(this).attr('target', iframeName);
                $(this).attr('href', Drupal.settings.RoskildeCmisUrl.replace("[document_id]", $(this).data('document_id')));
              }
              else {
                $(this).attr('href', '#');
                $(this).click(function(e){
                  e.preventDefault();
                });
              }
            });
          }
        });
      }

    }
  };
}(jQuery));