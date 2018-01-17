--Summary--
This module provides formatters for field collection that group every value of
a multi-valued field collection, using group options provided from the
field_group module.

--Word of caution--
The way this module is implemented is quite hackish, and requires black magic
to work. Basically, field_group is being used in a way that it was not meant to
be used. This module was tested on field_group-7.x-1.3 and field_group-7.x-1.4,
but it may not work for future versions of field_group, if there are changes to
how field_group works.

--Future--
In retrospect, field_group is not made to be used for grouping arbitrary render
arrays. It is a module for grouping specifically node fields in administration
and front-end. Maybe such a module exists, or will be created in the future.
Then this module could be rewritten to use that.

--Similar modules--
field_collection_fieldset module is similar in idea, but it works with
fieldsets only, and does not require field_group module.
