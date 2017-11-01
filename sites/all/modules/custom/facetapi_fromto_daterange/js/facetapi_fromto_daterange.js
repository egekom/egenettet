/**
 * @file
 * Attach datepicker calendar.
 */

(function($) {

  Drupal.behaviors.dateFromToFacetapi = {
    attach: function(context) {
      $(".date-fromto-calendar-form-input", context).datepicker({
        minDate: "-" + Drupal.settings.MinDateForPopup,
        maxDate: "+" + Drupal.settings.MaxDateForPopup,
        dateFormat: Drupal.settings.DateFormatForPopup,
        firstDay: Drupal.settings.FirstDay,
      });
    }
  };
})(jQuery);

