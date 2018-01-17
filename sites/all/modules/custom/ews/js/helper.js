String.prototype.toDate = function() {
  // 2015-07-28 23:00:00
  var str = new String(this);
  var res = str.match(/(\d+)\-(\d+)\-(\d+) (\d+):(\d+):(\d+)/);
  return new Date(res[1], res[2]-1, res[3], res[4], res[5], res[6]);
}
Date.prototype.trimTime = function() {
  this.setHours(0);
  this.setMinutes(0);
  this.setSeconds(0);
  this.setMilliseconds(0);
};

Date.prototype.addDays = function(num_days) {
  this.setDate(this.getDate() + parseInt(num_days));
};

Date.prototype.formatTime = function() {
  return (String('00' + this.getHours()).slice(-2)) + ':' + (String('00' + this.getMinutes()).slice(-2));
}
Date.prototype.formatDate = function() {
  return this.getFullYear() + '-' + (String('00' + (this.getMonth() + 1)).slice(-2)) + '-' + (String('00' + this.getDate()).slice(-2));
};

Number.prototype.toProc = function() {
  return (Math.round(this * 10000) / 100).toString() + '%';
};

Number.prototype.formatAsTime = function() {
  return (String('00' + this.toString()).slice(-2)) + ':00';
};
