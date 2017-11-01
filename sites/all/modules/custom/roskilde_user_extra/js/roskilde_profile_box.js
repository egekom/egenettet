(function ($) {

$(document).ready(function(){

	var user_name = $.cookie('drupal_name') || false;
	var user_picture = $.cookie('drupal_picture') || false;
	if (user_name) {

		//$('#logged-in-area .user-name').html(user_name.replace(/\+/g, ' '));
		$('#logged-in-area .user-picture').html(user_picture.replace(/\+/g, ' '));

	} else
	{
		//TODO login SSO
	}
});

})(jQuery);
