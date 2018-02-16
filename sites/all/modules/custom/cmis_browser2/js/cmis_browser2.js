(function($) {
  Drupal.behaviors.cmisBrowser = {
    attach: function (context, settings) {
      $('.aciTree', context).once('aciTree', function(i) {
        // Initialize the tree using initialObjectId and then restore the
        // ajax.url back to the baseUrl.
        var initialObjectId = $(this).attr('initialObjectId');
        var drupalNodeId = $(this).attr('drupalNodeId');
        var treeviewTarget = $(this).attr('treeviewTarget');
        var baseUrl = '/admin/settings/cmis/browser2/ajax/';
        var tree = $(this).aciTree({
          ajax: { url: baseUrl + initialObjectId + '/' + drupalNodeId },
          selectable: true,
          autoInit: false,
          itemHook: function(parent, item, itemData, level) {
            var treeApi = this;
            if (!treeApi.isInode(item)) {
              var url = itemData['browse-url'];
              treeApi.setLabel(item, {
                label: '<a href="' + url + '" target="' + treeviewTarget + '">' + itemData.label + '</a>'

              });
            }
          }
        });
        var api = $(tree).aciTree('api');
        api.init({success: function(item, options) {
          api.option('ajax.url', baseUrl);
        }});

        // Handle the search form above the tree.
        $('form', $(this).parent()).submit(function(event) {
          event.preventDefault();

          var searchPath = Drupal.settings.basePath + Drupal.settings.pathPrefix + 'search/documents';

          var rootNode = $('input[name="rootnode"]', this).val();
          var searchText = $('input[name="searchtext"]', this).val();
          var mimeType = $('select[name="mimetype"]', this).val();

          if (searchText) {
            searchPath += '/' + searchText;
          } else {
            searchPath += '/*';
          }
          var nextArg = '?';
          if (mimeType && mimeType != '0') {
            searchPath += nextArg + 'cmis-field:content%dot%mimetype=' + mimeType;
            nextArg = '&';

          }

          if (rootNode) {
            searchPath += nextArg + 'rootfolder=' + rootNode;
          }

          document.location.href = searchPath;
          return false;
        });

      });
    }
  };
})(jQuery);
