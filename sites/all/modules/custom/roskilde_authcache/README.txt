To support language prefix, uncomment the corresponding example line given in sub authcache_key_path:

  // Example of a multilingual site relying on path prefixes.
  # set req.http.X-Authcache-Key-Path = "/en/authcache-varnish-get-key";



To support caching of my-department page with separate cache-key for each department,
a change in the Varnish VCL is required.

The following code must be added to the end of sub authcache_key_cid 
in default.vcl which was copied from example.vcl in the authcache_varnish module:

  // ADDED BY PROPEOPLE: Use a separate cache-key for my-department page.
  if (req.url ~ "^(/en|/dk|)/my-department(\?.*)?$") {
    set req.http.X-Authcache-Key-CID = req.http.X-Authcache-Key-CID + "+my-department";
  }

If an alias is added for the my-department page, the above regular expression will need to be updated to match it.
The same regular expression check is done in the module itself as well, so update it there too.
