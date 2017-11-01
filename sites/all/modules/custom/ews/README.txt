Drupal for EWS
-------------------

To install:

- Make sure you have a PHP Exchange Web Services library from jamesiarmes.
  Download from https://github.com/jamesiarmes/php-ews/tree/master.
  Extract the files, and place them in sites/all/libraries/php-ews.

- Go to admin/modules page and enable the Exchange Web Service module.

- Go to admin/config/services/ews page and enter the Exchange Web Service URL.
  The URL has to be without the protocol part (e.g. mail.example.com).
