(function($) {
  $(document).ready(function() {
    if (!$('body').hasClass('page-search-global')) {
      return;
    }

    var $correctSearchPager = null;
    var correctSearchPager_totalPages = 0;

    // Check which pager is largest.
    $('body.page-search-global #content .panel-2col-stacked .pager > .last').each(function() {
      var totalPages = 0;
      if ($('a', this).length) {
        totalPages = $('a', this).first().attr('href').match(/page\=(\d+)/);
        if (totalPages) {
          totalPages = totalPages[1];
        }
        else {
          totalPages = 0;
        }
      }
      else {
        totalPages = $(this).text();
      }
      var $pager = $(this).closest('.item-list');
      if (totalPages > correctSearchPager_totalPages) {
        correctSearchPager_totalPages = totalPages;
        $correctSearchPager = $pager;
      }
      $pager.hide();
    });

    // Then move it.
    if ($correctSearchPager) {
      $correctSearchPager
        .insertAfter($correctSearchPager.closest('.center-wrapper'))
        .wrap('<div class="panel-col-bottom panel-panel"></div>')
        .wrap('<div class="inside" style="text-align:center;"></div>')
        .show();

      // And hide the ugly solr message.
      if (!$('#content .panel-2col-stacked .pane-apachesolr-result .search-results.apachesolr_search-results').length) {
        $('#content .panel-2col-stacked .panel-col-first').remove();
        $('#content .panel-2col-stacked .panel-col-last').css('marginLeft', 0)
      }
    }

  });
}(jQuery));
