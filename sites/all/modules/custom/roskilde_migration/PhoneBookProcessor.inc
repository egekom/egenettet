<?php
/**
 * @file
 * Roskilde Migration Phonebook Processor class.
 */

class PhoneBookProcessor extends FeedsNodeProcessor {
  public function process(FeedsSource $source, FeedsParserResult $parser_result) {
    return parent::process($source, $parser_result);
  }

  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($nid = parent::existingEntityId($source, $result)) {
      return $nid;
    }

    $parser_config = $source->importer()->getConfig();
    $xpath_config = $parser_config['parser']['config']['sources'];
    // There are multiple matches of KontactID used the last one as this is the one with the
      // actual number and the first one is the one for the picture
    $contact_id_key = array_search('./KontaktID', array_reverse($xpath_config));
    $user_name_key = array_search('./BrugerID', $xpath_config);

    if ($contact_id_key !== FALSE && $user_name_key !== FALSE) {
      $contact_id = $result->current_item[$contact_id_key];
      // BrugerID contains user id now as there is a temper loading the ID
      $user_id = trim($result->current_item[$user_name_key]);

      if ($user_id) {

        $account = user_load($user_id);
        if ($account !== FALSE && isset($account->field_phonebook['und'][0]['target_id'])) {
          // TODO: is this okay?
          return $account->field_phonebook['und'][0]['target_id'];
        }
      }

      if ($contact_id) {
        $query = new EntityFieldQuery();
        $query
          ->entityCondition('entity_type', 'node', '=')
          ->entityCondition('bundle', 'phonebook', '=')
          ->fieldCondition('field_phonebook_contact_id', 'value', $contact_id, '=');

        $result = $query->execute();

        if (isset($result['node']) && count($result['node']) > 0) {
          // Return the first found element.
          $node = current($result['node']);
          return $node->nid;
        }
      }
    }

    return 0;
  }
}
