var EwsTimeline;

(function($) {
  Drupal.behaviors.ewsTimeLine = {
    attach: function (context, settings) {
      $('.ews-timeline', context).once('ews-timeline', function(i) {
        var instanceId = $(this).attr('id');
        var instanceSettings = settings[instanceId + '-settings'];
        var chart = new EwsTimeline(this,
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

  EwsTimeline = function(container, data, emails, start_date, end_date, timeline_start_time, timeline_end_time, email_filtration, day_offset) {
    this.container = container;
    this.data = this.prepareData(data);
    this.emails = emails;
    this.start_date = new Date(start_date);
    this.end_date = new Date(end_date);
    this.chart_start_hour = parseInt(timeline_start_time);
    this.chart_end_hour = parseInt(timeline_end_time);
    this.email_filter = email_filtration ? '' : false;
    this.day_offset = parseInt(day_offset);
    this.colors = ['#7046EE', '#E9D3ED', '#7D0072', '#9B94C6'];

    this.$nav = $('<div></div>');
    this.$timeline = $('<div></div>');
    $(this.container).empty();
    $(this.container).append(this.$nav);
    $(this.container).append(this.$timeline);

    this.current_date = new Date(this.start_date);

    this.render(this.current_date.formatDate());
  };

  EwsTimeline.prototype.refresh = function(data) {
    this.data = this.prepareData(data);
    this.render(this.current_date.formatDate());
  }

  EwsTimeline.prototype.getEmails = function() {
    return this.emails;
  }

  EwsTimeline.prototype.render = function(day) {
    this.$table = $('<div class="ews_timeline"></div>');
    if (1 < this.day_offset) {
      this.$table.addClass('ews_timeline_multitable ews_timeline_' + this.day_offset + '_tables');
    }
    for (var offset = 0; offset < this.day_offset; offset++) {
      this.current_color_id = 0;
      var current_date = new Date(day);
      current_date.setDate(current_date.getDate() + offset);
      if (current_date > this.end_date) {
        continue;
      }
      this.setInit(current_date);

      this.$table.append(this.buildTable(offset));
    }

    this.setInit(new Date(day));
    this.$nav.empty().append(this.renderNav());
    this.$timeline.empty().append(this.$table);

    this.fixTimelineHeights();
  };

  EwsTimeline.prototype.setInit = function(day) {
    this.current_date = new Date(day);
    // Limit the chart to the following start and end dates
    this.chart_start_date = new Date(this.current_date);
    this.chart_start_date.setHours(this.chart_start_hour);

    this.chart_end_date = new Date(this.current_date);
    this.chart_end_date.setHours(this.chart_end_hour);

    this.chart_length = this.chart_end_date.getTime() - this.chart_start_date.getTime();
  }

  EwsTimeline.prototype.buildTable = function(offset) {
    var $div = $('<div class="ews_table_chunk"></div>');
    $div.addClass('ews_table_' + offset + '_chunk');
    $div.append(this.renderHeaderRow(offset));
    for (var email in this.data) {
      if (false !== this.email_filter && this.email_filter && this.email_filter != email) {
        continue;
      }
      var events = this.getCurrentData(this.data[email]);
      $div.append(this.renderCalendarRow(email, events, offset));
    }

    return $div;
  }

  EwsTimeline.prototype.fixTimelineHeights = function() {
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

  EwsTimeline.prototype.renderNav = function() {
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

  EwsTimeline.prototype.renderHeaderRow = function(offset) {
    var $tr = $('<div class="ews_header"></div>');
    if (0 == offset) {
      $tr.append($('<div class="ews_title">&nbsp;</div>'));
    }

    var hours = this.chart_end_hour - this.chart_start_hour;

    // TODO: fix the labels so there is no need for the 0.0001 fix
    var label_width = (1/hours) - 0.001;
    var $td = $('<div class="ews_tl_container"></div>');
    for (var i = this.chart_start_hour; i < this.chart_end_hour; i++) {
      var $label = $('<div class="ews_x_label"></div>');
      $label.text(i.formatAsTime());
      $label.css({
        'width': label_width.toProc(),
      });
      $td.append($label);
    }
    $tr.append($td);

    if (1 == this.day_offset) {
      return $tr;
    }

    var $title_date = $('<div class="title_date"></div>').text(this.current_date.formatDate());
    if (0 == offset) {
      $title_date.append($('<div class="ews_title">&nbsp;</div>'));
    }
    $title_date.append($tr);
    return $title_date;

  };

  EwsTimeline.prototype.renderCalendarRow = function(calednar_name, events, offset) {
    this.rendered_rows = [];

    var $tr = $('<div class="ews_row"></div>');

    if (0 == offset) {
      var $td_name = $('<div class="ews_title"></div>');
      var $span = $('<span></span>').text(calednar_name);
      $td_name.append($span);
      $tr.append($td_name);
    }

    var $td_cal = $('<div class="ews_tl_container"></div>');

    for (var i=0; i<events.length; i++) {
      $td_cal.append(this.renderEventDiv(events[i]));
    }

    if (events.length == 0) {
      $td_cal.append('<a class="ews_no_items">No events</a>');
    }

    $tr.append($td_cal);

    return $tr;
  };

  EwsTimeline.prototype.time_in_chart_limit = function(data) {
    return (data.start < this.chart_end_date && data.end >= this.chart_start_date);
  };

  EwsTimeline.prototype.renderEventDiv = function(data) {
    var $cal_div = $('<a></a>');

    var event_length = data.end.getTime() - data.start.getTime();

    var left_pos_p = (Math.max(data.start.getTime(), this.chart_start_date.getTime()) - this.chart_start_date.getTime()) / this.chart_length;
    var width_p = (Math.min(event_length, this.chart_length) / this.chart_length);

    if (left_pos_p + width_p > 1) {
      width_p = 1 - left_pos_p;
    }

    var render_row = this.getRenderRow(left_pos_p, width_p);

    $cal_div.css({
      'background-color': this.rotateColors(),
      'width': width_p.toProc(),
      'top': (render_row * 25).toString() + 'px',
      'left': left_pos_p.toProc(),
    });

    $cal_div.append($('<span></span>').text(data.subject));

    $cal_div.attr('href', data.url);
    $cal_div.attr('title', data.subject + ' from ' + data.start + ' to ' + data.end);

    return $cal_div;
  };

  EwsTimeline.prototype.getRenderRow = function(left_pos_p, width_p) {
    var render_row = 0;

    outer1:
    for (var row = 0; row < this.rendered_rows.length; row++) {
      for (var i = 0; i < this.rendered_rows[row].length; i++) {
        if (
          left_pos_p < (this.rendered_rows[row][i][0] + this.rendered_rows[row][i][1]) && (left_pos_p + width_p) > this.rendered_rows[row][i][0]
          ) {
          render_row++;
          continue outer1;
        }
      }
      break;
    }
    if (!this.rendered_rows[render_row]) {
      this.rendered_rows[render_row] = [];
    }
    this.rendered_rows[render_row].push([left_pos_p, width_p]);
    return render_row;
  };

  EwsTimeline.prototype.getCurrentData = function(data) {
    var ret = [];
    for (var i = 0; i < data.length; i++) {
      if (this.time_in_chart_limit(data[i])) {
        ret.push(data[i]);
      }
    }
    return ret;
  };

  EwsTimeline.prototype.rotateColors = function() {
    if (this.current_color_id >= this.colors.length) {
      this.current_color_id = 0;
    }
    var ret_color = this.colors[this.current_color_id]
    this.current_color_id++;
    return ret_color;
  };

  EwsTimeline.prototype.prepareData = function(data) {
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
