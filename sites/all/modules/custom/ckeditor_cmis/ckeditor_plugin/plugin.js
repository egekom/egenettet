(function ($) {
    CKEDITOR.plugins.add( 'cmis', {
        icons: 'cmis',
        init: function( editor ) {
            editor.addCommand( 'showCMIS', {
                exec: function( editor ) {
                    var instance_name = editor.name;

                    $('#' + instance_name).once(instance_name, function() {
                        // Create Drupal ajax event that will show the browser window.
                        var url =  Drupal.settings.basePath + Drupal.settings.pathPrefix + 'admin/settings/cmis/field/ajax/' + instance_name;
                        Drupal.settings.urlIsAjaxTrusted[url] = true;
                        var element_settings = {
                            url: url,
                            event: 'show_cmis',
                            progress: { type: 'throbber' }
                        };
                        Drupal.ajax[instance_name] = new Drupal.ajax(instance_name, this, element_settings);

                        // Add event listener for when the user makes a choice from the dialog box.
                        $(this).on('link_cmis', function( event ) {
                            CKEDITOR.instances[instance_name].execCommand('linkCMIS');
                        })
                    });

                    // Trigger the Drupal ajax event.
                    $('#' + instance_name).trigger('show_cmis');

                }
            });

            editor.addCommand('linkCMIS', {
                exec: function ( editor ) {
                    var link_url = $('#' + editor.name).attr('CMISObjectPreviewLink');
                    var link_url_type = $('#' + editor.name).attr('CMISObjectPreviewLinkType');

                    var selected_element = editor.getSelection().getStartElement();

                    if (selected_element.getName() == 'a') {
                        // NOTE: WTF: you have to change data-cke-saved-href to actually change the href in the textarea...
                        selected_element.setAttribute('href', link_url);
                        selected_element.setAttribute('data-cke-saved-href', link_url);
                        if (link_url_type == 'preview') {
                            selected_element.setAttribute('target', '_blank');
                        } else {
                            selected_element.removeAttribute('target');
                        }
                    } else {
                        var link_attributes = {href: link_url};
                        if (link_url_type == 'preview') {
                            link_attributes['target'] = '_blank';
                        }
                        var style = new CKEDITOR.style( { element : 'a', attributes : link_attributes } );
                        style.type = CKEDITOR.STYLE_INLINE;
                        editor.applyStyle(style);
                    }
                }
            });

            // If the "contextmenu" plugin is loaded, register the listeners.
            if (editor.contextMenu) {
                editor.contextMenu.addListener(function(element, selection) {
                    if (!element || element.isReadOnly() || (selection.getSelectedText().length < 1 && !element.is('a'))) {
                        return null;
                    }

                    return {showCMIS: CKEDITOR.TRISTATE_OFF};
                });
            }

            // If the "menu" plugin is loaded, register the menu items.
            if (editor.addMenuItems) {
                editor.addMenuItems({
                    showCMIS: {
                        label: Drupal.t('Link to CMIS'),
                        command: 'showCMIS',
                        group: 'link',
                        order: 0
                    }
                });
            }

            editor.ui.addButton( 'cmis', {
                label: 'Insert CMIS link',
                command: 'showCMIS',
                toolbar: 'insert'
            });
        }
    });
})(jQuery);