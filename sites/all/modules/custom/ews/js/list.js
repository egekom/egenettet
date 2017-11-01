var EwsList;

(function($) {
  Drupal.behaviors.ewsList = {
    attach: function (context, settings) {
      $('.ews-list', context).once('ews-list', function(i) {
        var instanceId = $(this).attr('id');
        var instanceSettings = settings[instanceId + '-settings'];
        var chart = new EwsList(this,
          instanceSettings['data'],
          instanceSettings['emails'],
          instanceSettings['start_date'],
          instanceSettings['end_date'],
          instanceSettings['timeline_start_time'],
          instanceSettings['timeline_end_time'],
          instanceSettings['email_filtration'],
          instanceSettings['day_offset']
          );

        setInterval(function () {
          $.ajax({
            type: "POST",
            dataType: 'json',
            data: {
              emails: chart.getEmails(),
              minutes: instanceSettings['refresh_time']
            },
            url: Drupal.settings.basePath + Drupal.settings.pathPrefix + 'ews/ajax/data',
            success: function(data) {
              chart.refresh(data);
            }
          });
        }, instanceSettings['refresh_time'] * 60000);
      });
    }
  };

  EwsList = function(container, data, emails, start_date, end_date, timeline_start_time, timeline_end_time, email_filtration, day_offset) {
    this.container = container;
    this.data = this.prepareData(data);
    this.emails = emails;
    this.start_date = new Date(start_date);
    this.end_date = new Date(end_date);
    this.chart_start_hour = parseInt(timeline_start_time);
    this.chart_end_hour = parseInt(timeline_end_time);
    this.email_filter = email_filtration ? '' : false;
    this.day_offset = parseInt(day_offset);

    this.$nav = $('<div></div>');
    this.$timeline = $('<div></div>');
    $(this.container).empty();
    $(this.container).append(this.$nav);
    $(this.container).append(this.$timeline);

    this.current_date = new Date(this.start_date);

    this.render(this.current_date.formatDate());
  };

  EwsList.prototype.refresh = function(data) {
    this.data = this.prepareData(data);
    this.render(this.current_date.formatDate());
  }

  EwsList.prototype.getEmails = function() {
    return this.emails;
  }

  EwsList.prototype.render = function(day) {
    this.$table = $('<div class="ews_timeline"></div>');
    if (1 < this.day_offset) {
      this.$table.addClass('ews_timeline_multilist ews_timeline_' + this.day_offset + '_lists');
    }
    for (var offset = 0; offset < this.day_offset; offset++) {
      var current_date = new Date(day);
      current_date.setDate(current_date.getDate() + offset);
      if (current_date > this.end_date) {
        continue;
      }
      this.setInit(current_date);

      this.$table.append(this.buildList(offset));
    }

    this.setInit(new Date(day));
    this.$nav.empty().append(this.renderNav());
    this.$timeline.empty().append(this.$table);
  };

  EwsList.prototype.setInit = function(day) {
    this.current_date = new Date(day);
    // Limit the chart to the following start and end dates
    this.chart_start_date = new Date(this.current_date);
    this.chart_start_date.setHours(this.chart_start_hour);

    this.chart_end_date = new Date(this.current_date);
    this.chart_end_date.setHours(this.chart_end_hour);

    this.chart_length = this.chart_end_date.getTime() - this.chart_start_date.getTime();
  }

  EwsList.prototype.buildList = function(offset) {
    var $div = $('<div class="ews_list_chunk"></div>');
    $div.addClass('ews_list_' + offset + '_chunk');
    if (1 < this.day_offset) {
      $div.append(this.renderHeaderRow(offset));
    }
    for (var email in this.data) {
      if (false !== this.email_filter && this.email_filter && this.email_filter != email) {
        continue;
      }
      var events = this.getCurrentData(this.data[email]);
      $div.append(this.renderCalendarRow(email, events, offset));
    }

    return $div;
  }

  EwsList.prototype.fixTimelineHeights = function() {
    var fix_height;
    $('.ews_row').each(function() {
      fix_height = 0;
      $('.ews_tl_container a', this).each(function() {
        var position = $(this).position();
        fix_height = Math.max($(this).height() + position.top, fix_height);
      });
      $(this).height(fix_height);
    });
  };

  EwsList.prototype.renderNav = function() {
    var $div = $('<h2></h2>');
    var $prev = $('<a href="#" class="ews_prev_button"> </a>');
    var $week_prev = $('<a href="#" class="ews_prev_button double"> </a>');
    var $next = $('<a href="#" class="ews_next_button"> </a>');
    var $week_next = $('<a href="#" class="ews_next_button double"> </a>');
    var $datepicker_button = $('<span class="ews_next_button date-picker"> </span>');
    var timeline = this;

    var next_date = new Date(this.current_date);
    next_date.addDays(1);

    var week_next_date = new Date(this.current_date);
    week_next_date.addDays(7);

    var prev_date = new Date(this.current_date);
    prev_date.addDays(-1);

    var week_prev_date = new Date(this.current_date);
    week_prev_date.addDays(-7);

    $prev.click(function(ev) {
      timeline.render(prev_date.formatDate());
      return false;
    });

    $week_prev.click({timeline:timeline}, function(ev) {
      timeline.render(timeline.start_date > week_prev_date ? timeline.start_date.formatDate() : week_prev_date.formatDate());
      return false;
    });

    $next.click(function(ev) {
      timeline.render(next_date.formatDate());
      return false;
    });

    $week_next.click({timeline:timeline}, function(ev) {
      timeline.render(timeline.end_date < week_next_date ? timeline.end_date.formatDate() : week_next_date.formatDate());
      return false;
    });

    $datepicker_button.click(function () {
      if ($(this).children(":first").is(':visible') == false) {
        $(this).children(":first").datepicker().show();
      }
    });

    $div.append(this.current_date.formatDate());

    if (false !== timeline.email_filter) {
      var $select = $('<select class="ews_select"><option value="">' + Drupal.t('All emails') + '</option></select>');
      for (var email in this.data) {
        $select.append($('<option' + ((email == this.email_filter) ? ' selected="selected"' : '') + ' value="' + email + '">' + email + '</option>'));
      }

      $select.change({timeline:timeline}, function() {
        timeline.email_filter = this.value;
        timeline.render(timeline.current_date.formatDate());
      });

      $div.append($('<div class="select-wrapper"></div>').append($select));
    }

    if (next_date <= this.end_date) {
      $div.append($week_next);
      $div.append($next);
    } else {
      $div.append('<span class="ews_next_button double"> </span>');
      $div.append('<span class="ews_next_button"> </span>');
    }

    $datepicker_button.append(
      $('<div class="datepicker_wrapper" style="display:none;"></div>').datepicker({
        minDate: new Date(this.start_date),
        maxDate: new Date(this.end_date),
        onSelect: function() {
          timeline.render($(this).datepicker('getDate'));
          return false;
        }
      })
    );
    $div.append($datepicker_button);

    if (prev_date >= this.start_date) {
      $div.append($prev);
      $div.append($week_prev);
    } else {
      $div.append('<span class="ews_prev_button"> </span>');
      $div.append('<span class="ews_prev_button double"> </span>');
    }

    return $div;
  };

  EwsList.prototype.renderHeaderRow = function(offset) {
    var $current_day = $('<div></div>').addClass('ews_list_current_' + offset).text(this.current_date.formatDate());
    return $current_day;

  };

  EwsList.prototype.renderCalendarRow = function(calednar_name, events, offset) {
    var $user_row = $('<ul class="ews_list_user"></ul>');

    var $user_name = $('<li class="ews_list_user_name"></li>');

    var $span = $('<span></span>').text(calednar_name);

    if (1 < this.day_offset && 0 < offset) {
      $span.empty();
    }

    $user_name.append($span);

    $user_row.append($user_name);

    var $events = $('<ul class="ews_list_cal"></ul>');

    for (var i=0; i<events.length; i++) {
      $events.append(this.renderEventDiv(events[i]));
    }

    if (events.length == 0) {
      $events.append('<li class="ews_no_items">No events</li>');
    }

    $user_row.append($events);

    return $user_row;
  };

  EwsList.prototype.time_in_chart_limit = function(data) {
    return (data.start < this.chart_end_date && data.end >= this.chart_start_date);
  };

  EwsList.prototype.renderEventDiv = function(data) {
    var $event = $('<li class="ews_list_event"></li>');

    $event.append($('<span class="ews_list_time"></span>').text(data.start.formatTime() + ' - ' + data.end.formatTime()));

    $event.append($('<a class="ews_list_subject" href="' + data.url + '"></a>').text(data.subject));
    if (data.location) {
      $event.append($('<span class="ews_list_location"></span>').text('(' + data.subject + ')'));
    }

    $event.attr('title', data.subject + ' from ' + data.start + ' to ' + data.end);

    return $event;
  };

  EwsList.prototype.getCurrentData = function(data) {
    var ret = [];
    for (var i = 0; i < data.length; i++) {
      if (this.time_in_chart_limit(data[i])) {
        ret.push(data[i]);
      }
    }
    return ret;
  };

  EwsList.prototype.prepareData = function(data) {
    var ret = {};
    for (var email in data) {
      for (var i = 0; i < data[email].length; i++) {
        var start = data[email][i].start.toDate();
        var end = data[email][i].end.toDate();

        var end_day = new Date(end);
        end_day.trimTime();

        var start_day = new Date(start);
        start_day.trimTime();

        var in_dates = [];
        while (start_day <= end_day) {
          in_dates.push(start_day.formatDate());
          start_day.addDays(1);
        }

        data[email][i].start = start;
        data[email][i].end = end;
        data[email][i].in_dates = in_dates;
      }
    }
    return data;
  };

})(jQuery);
