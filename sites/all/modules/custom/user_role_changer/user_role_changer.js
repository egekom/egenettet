/**
 * Manage authcache cookie on role change.
 *
 * @param boolean add
 *   Use <strong>true</strong> to add the user's ID to the authchage page ID.
 *   Use <strong>false</strong> to remove the user's ID from authchage page ID.
 */
function resetAuthCacheCookie(add) {
  var authcache = jQuery.cookie('authcache');
  var uid = jQuery.cookie('drupal_uid');

  if (add) {
    // add uid to authcahe cookie
    if (authcache && uid && authcache.indexOf("-" + uid) === -1) {
      jQuery.cookie('authcache', authcache + "-" + uid, {
        path: '/',
        domain: "." + location.host
      });
    }
  }
  else {
    // remove uid from authcache cookie
    if (uid && authcache && authcache.indexOf("-" + uid) > -1) {
      jQuery.cookie('authcache', authcache.replace("-" + uid, ""), {
        path: '/',
        domain: "." + location.host
      });
    }
  }
}

/**
 * Touch behavior for responsive
 */
jQuery(function(){
  if(jQuery('.role-changer-title')){
    jQuery('.role-changer-title').once('role-changer-dropdown').on("touchstart", function() {
      jQuery('.role-changer-roles').fadeToggle();
    });
  }
})



