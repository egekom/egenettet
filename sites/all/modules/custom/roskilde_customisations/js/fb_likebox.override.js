Drupal.behaviors.fb_likebox = {
  attach: function (context, settings) {
    if (context !== document) {
      // AJAX request.
      return;
    }

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

    /* Init the FB plugin */
    (function(d, s, id) {
      var js, fjs = d.getElementsByTagName(s)[0];
      if (d.getElementById(id)) return;
      js = d.createElement(s);
      js.id = id;
      js.src = "//connect.facebook.net/" + settings.fb_likebox_language + "/sdk.js#xfbml=1&version=v2.3";
      if (settings.fb_likebox_app_id) {
      js.src += "&appId=" + settings.fb_likebox_app_id;
      }
      fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk', settings));

    /* Reload the plugin on windows resize */
    window.addEventListener('resize', function() {
      waitForFinalEvent(function(){
        var containerWidth = jQuery('.pane-fb-likebox-0').width();
        jQuery(".fb-page").attr("data-width", containerWidth);
        FB.XFBML.parse();
      }, 25, "fb-render")
    })

    // Listen for orientation changes
    window.addEventListener('orientationchange', function() {
      var containerWidth = jQuery('.pane-fb-likebox-0').width();
      jQuery(".fb-page").attr("data-width", containerWidth);
      FB.XFBML.parse();
    }, false);

  }
};
