var RoskildeOrgChart;

(function($) {
  Drupal.behaviors.roskildeOrgChart = {
    attach: function (context, settings) {
      $('.roskildeOrgChart', context).once('roskildeOrgChart', function(i) {
        var instanceId = $(this).attr('id');
        var instanceSettings = settings[instanceId + '-settings'];
        var chart = new RoskildeOrgChart(
          this,
          instanceSettings['data'],
          instanceSettings['initial-node'],
          instanceSettings['allow-up-root'],
          instanceSettings['depth']
          );
      });
    }
  };

  RoskildeOrgChart = function(container, data, initialNodeId, allowRootUp, depth) {
    this.container = container;
    if (!allowRootUp) {
      this.initialNodeId = initialNodeId;
    }
    this.data = data;
    this.maxDepth = 0;
    var initialDepth = parseInt(this.getNodeById(initialNodeId).depth);
    if (depth) {
      this.maxDepth = initialDepth + parseInt(depth);
    }
    this.render(initialNodeId);
  };

  RoskildeOrgChart.prototype.render = function(nodeId) {
    this.$table = $('<table border="0" cellspacing="0" cellpadding="0"></table>');
    this.addRootNode(this.getNodeById(nodeId));
    var childNodes = this.getChildNodes(nodeId);
    for (var i = 0; i < childNodes.length; i += 2) {
      var node1 = childNodes[i];
      var node2 = null;
      if ((i+1) in childNodes) {
        node2 = childNodes[i+1];
      }
      var nextNode = false;
      if ((i+2) in childNodes) {
        nextNode = true;
      }
      this.addRow(node1, node2, nextNode);
    }

    $(this.container).empty().append(this.$table);
  };

  RoskildeOrgChart.prototype.addRootNode = function(node) {
    var $rootRow = $('<tr></tr>');
    var $rootCell = $('<td colspan="4" align="center"></td>');
    $rootCell.append(this.renderRootNode(node));
    $rootRow.append($rootCell);
    this.$table.append($rootRow);
  };

  RoskildeOrgChart.prototype.addRow = function(node1, node2, nextNode) {
    this.$table.append('<tr><td></td><td class="lines bright"></td><td class="lines bleft"></td><td></td></tr>');

    var $row = $('<tr></tr>');

    var $col1 = $('<td rowspan="2" class="leftCol"></td>');
    $col1.append(this.renderLeafNode(node1));
    var $col2 = $('<td rowspan="2" class="rightCol"></td>');
    $col2.append(this.renderLeafNode(node2));

    $row.append($col1);
    $row.append('<td class="lines bright bbottom"></td>');
    $row.append('<td class="lines bleft' + (node2 ? ' bbottom' : '') + '"></td>');
    $row.append($col2);

    this.$table.append($row);
    this.$table.append('<tr><td class="lines' + (nextNode ? ' bright' : '') + '"></td><td class="lines' + (nextNode ? ' bleft' : '') + '"></td></tr>');
  };

  RoskildeOrgChart.prototype.renderRootNode = function(node) {
    var $box = $('<div class="rootbox"></div>')
    if (node.parent != '0' && node.id != this.initialNodeId) {
      var $link = $('<a class="arrow" href="#">up</a>').click({nodeId: node.parent, orgChart: this}, this.openLeaf);
        $box.append($link);
    }
    $box.append('<div class="text"><a href="' + node.url + '">' + node.name + '</a></div>');
    return $box;
  }

  RoskildeOrgChart.prototype.renderLeafNode = function(node) {
    if (node) {
      var $box = $('<div class="box"></div>')
      $box.append('<div class="text"><a href="' + node.url + '">' + node.name + '</a></div>');
      var hasChildren = this.getChildNodes(node.id);
      if (hasChildren.length) {
        var $link = $('<a class="arrow" href="#">down</a>').click({nodeId: node.id, orgChart: this}, this.openLeaf);
        $box.append($link);
      }
      return $box;
    }
    return '';
  };

  RoskildeOrgChart.prototype.openLeaf = function(event) {
    event.stopPropagation();
    event.data.orgChart.render(event.data.nodeId);
    return false;
  }

  RoskildeOrgChart.prototype.getChildNodes = function(nodeId) {
    var ret = [];
    for (var i = 0; i < this.data.length; i++) {
      if (this.data[i].parent == nodeId) {
        if (this.maxDepth == 0 || this.data[i].depth <= this.maxDepth) {
          ret.push(this.data[i]);
        }
      }
    }
    return ret;
  }

  RoskildeOrgChart.prototype.getNodeById = function(nodeId) {
    for (var i = 0; i < this.data.length; i++) {
      if (this.data[i].id == nodeId) {
        return this.data[i];
      }
    }
    return null;
  }
})(jQuery);

