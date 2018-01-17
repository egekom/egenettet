/**
 * @file
 * Attaches behaviors for the EWS module.
 */

(function ($) {

/**
 * Implements Drupal.behaviors for the EWS module.
 */
Drupal.behaviors.ewsTimeLine = {
  attach: function (context, settings) {
    if (Drupal.settings && Drupal.settings.ews_timeline) {
      if ($('div#' + Drupal.settings.ews_timeline.block_id).length) {
        ewsTimelineInit(Drupal.settings.ews_timeline);
      }
    }
  },
};

/**
 * Helper function: Exchange timeline initialization.
 */
function ewsTimelineInit(ews_timeline) {
  scheduler.locale.labels.timeline_tab = "Timeline";
  scheduler.config.xml_date = "%Y-%m-%d %H:%i";
  scheduler.config.readonly = true;

  //===============
  //Configuration
  //===============
  scheduler.templates.event_class = function(start, end, event) {
    event.color = (event.important) ? "red" : "";
    return "";
  };

  var sections = $.parseJSON(ews_timeline.sections);
  var parse = $.parseJSON(ews_timeline.parse);
  var now = new Date();

  scheduler.createTimelineView({
    name:	"timeline",
    x_unit:	"minute",
    x_date:	"%H:%i",
    x_step:	60,
    x_size: ews_timeline.settings.work_hours,
    x_start: ews_timeline.settings.start_time,
    x_length:	24,
    y_unit:	sections,
    y_property:	"section_id",
    render:"bar"
  });

  //===============
  //Data loading
  //===============
  scheduler.init('scheduler_here', now, "timeline");
  scheduler.parse(parse, "json");
}

})(jQuery);