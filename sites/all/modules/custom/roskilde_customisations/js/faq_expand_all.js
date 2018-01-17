(function($){
  Drupal.behaviors.roskildeFaqExpandAllLink = {
    attach: function (context, settings) {
      $('.faq-toggle-all').once('rosi-customization-faq-toggle', function(){
        var $link = $(this);
        var states_map = {
          collapsed: {
            next_state: 'expanded',
            transitionTo: function($element){
              $element.slideUp('normal').prev().removeClass('ui-accordion-header-active');
            }
          },
          expanded: {
            next_state: 'collapsed',
            transitionTo: function($element){
              $element.slideDown('normal').prev().addClass('ui-accordion-header-active');
            }
          }
        };

        // Utilities.
        var currentState = function() {
          return $link.data('state');
        };
        var nextState = function() {
          return states_map[currentState()].next_state;
        };
        var updateLabel = function() {
          $link.text($link.data(nextState() + '-label'));
        };
        var changeState = function(){
          $link.data('state', nextState());
          updateLabel();
        };

        // Initialize on atatch.
        updateLabel();

        // Attach events.
        $link.click(function(){
          var $parentContainer = $link.parents('.field-name-field-qa')[0];
          $('.ui-accordion-content', $parentContainer).each(function(){
            states_map[nextState()].transitionTo($(this));
          });
          changeState();
          return false;
        });
      });
    }
  };
})(jQuery);
