<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['module']: The module that implemented the search query.
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 *
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @code
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @code
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (isset($result['fields']['dm_field_datetime'])): ?>
    <div class="event-search event-date-info">
      <div class="event-date-day"><?php print $result['fields']['dm_field_datetime']['day']; ?></div>
      <div class="event-date-month"><?php print $result['fields']['dm_field_datetime']['month']; ?></div>
    </div>
  <?php endif; ?>
  <?php print render($title_prefix); ?>
  <h3 class="title"<?php print $title_attributes; ?>>
    <a href="<?php print $url; ?>"><?php print $title; ?></a>
  </h3>
  <?php print render($title_suffix); ?>
  <div class="event-search event-place-time">
    <?php if (isset($result['fields']['sm_field_place']) || isset($result['fields']['dm_field_datetime'])): ?>
      <div class="event-search event-place-info">
        <?php //print $result['fields']['sm_field_place'][0] . ' / ' . $result['fields']['dm_field_datetime']['time']; ?>
        <?php
          print $result['fields']['sm_field_place'][0];
          if (isset($result['fields']['sm_field_place']) && isset($result['fields']['dm_field_datetime'])) {
            print ' / ';
          }
          print $result['fields']['dm_field_datetime']['time'];

          print ' | ' . $result['user'];

          if (!empty($result['fields']['im_field_secondary_channel'])) {
            foreach ($result['fields']['im_field_secondary_channel'] as $key => $val) {
              print ', ' . l($result['fields']['sm_vid_Channel'][$key], current_path(), array('query' => array('f' => array('im_field_secondary_channel:' . $val ))));
            }
          }
        ?>
      </div>
    <?php endif; ?>
  </div>
</li>
