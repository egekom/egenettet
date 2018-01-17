<?php

/**
 * @file
 * Action wrapper class of the Exchange Web Services application.
 */

/**
 * Action wrapper class of the Exchange Web Services application.
 */
class EWS_Actions extends ExchangeWebServices {

  /**
   * Constructor.
   */
  public function __construct($server = NULL, $username = NULL, $password = NULL, $version = parent::VERSION_2007) {
    parent::__construct($server, $username, $password, $version);
  }

  /**
   * Returns the SOAP response for raw query request.
   *
   * @return object
   *   An stdClass object.
   */
  public function Query($query) {
    $this->initializeSoapClient();
    $action = "http://schemas.microsoft.com/exchange/services/2006/messages/";
    $location = $this->soap->location;
    $response = $this->soap->__doRequest($query, $location, $action, 1);

    return $this->processResponse($response);
  }

  /**
   * Returns the SOAP response for FindFolder request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *   'traversal' => EWSType_FolderQueryTraversalType::SHALLOW,
   *   'base_shape' => EWSType_DefaultShapeNamesType::ALL_PROPERTIES,
   *   'folder_ids' => array('inbox', 'calendar'),
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function FindFolder($options) {
    $request = new EWSType_FindFolderType();
    $request->Traversal = $options['traversal'];

    $request->FolderShape = new EWSType_FolderResponseShapeType();
    $request->FolderShape->BaseShape = $options['base_shape'];

    // Set the starting folder as the inbox.
    $request->ParentFolderIds = new EWSType_NonEmptyArrayOfBaseFolderIdsType();
    foreach ($options['folder_ids'] as $folder) {
      $distinguished_folder = new EWSType_DistinguishedFolderIdType();
      $distinguished_folder->Id = $folder;

      $request->ParentFolderIds->DistinguishedFolderId[] = $distinguished_folder;
    }

    return parent::FindFolder($request);
  }

  /**
   * Returns the SOAP response for FindItem request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *   'traversal' => EWSType_FolderQueryTraversalType::SHALLOW,
   *   'base_shape' => EWSType_DefaultShapeNamesType::ALL_PROPERTIES,
   *   'folder_ids' => array(EWSType_DistinguishedFolderIdNameType::CALENDAR),
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function FindItem($options) {
    $request = new EWSType_FindItemType();
    $request->Traversal = $options['traversal'];

    $request->ItemShape = new EWSType_ItemResponseShapeType();
    $request->ItemShape->BaseShape = $options['base_shape'];

    if (isset($options['addition_fields'])) {
      // Set additional properties.
      $request->ItemShape->AdditionalProperties = new EWSType_NonEmptyArrayOfPathsToElementType();
      foreach ($options['addition_fields'] as $field) {
        $addition_field = new EWSType_PathToUnindexedFieldType();
        $addition_field->FieldURI = $field;

        $request->ItemShape->AdditionalProperties->FieldURI[] = $addition_field;
      }
    }

    // Set the starting folder as the inbox.
    $request->ParentFolderIds = new EWSType_NonEmptyArrayOfBaseFolderIdsType();
    foreach ($options['folder_ids'] as $folder) {
      $distinguished_folder = new EWSType_DistinguishedFolderIdType();
      $distinguished_folder->Id = $folder;

      $request->ParentFolderIds->DistinguishedFolderId[] = $distinguished_folder;
    }

    return parent::FindItem($request);
  }

  /**
   * Returns the SOAP response for GetItem request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *  'addition_fields' => array(EWSType_UnindexedFieldURIType::CALENDAR_START),
   *  'base_shape' => EWSType_DefaultShapeNamesType::ID_ONLY,
   *  'item_ids' => array($ItemId => $ChangeKey),
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function GetItem($options) {
    // Set get item request.
    $request = new EWSType_GetItemType();

    // Set item shame.
    $request->ItemShape = new EWSType_ItemResponseShapeType();
    // Set base shape.
    $request->ItemShape->BaseShape = $options['base_shape'];

    if (isset($options['addition_fields'])) {
      // Set additional properties.
      $request->ItemShape->AdditionalProperties = new EWSType_NonEmptyArrayOfPathsToElementType();
      foreach ($options['addition_fields'] as $field) {
        $addition_field = new EWSType_PathToUnindexedFieldType();
        $addition_field->FieldURI = $field;

        $request->ItemShape->AdditionalProperties->FieldURI[] = $addition_field;
      }
    }

    // Set item ids.
    $request->ItemIds = new EWSType_NonEmptyArrayOfBaseItemIdsType();
    foreach ($options['item_ids'] as $item_id => $change_key) {
      $item = new EWSType_ItemIdType();
      $item->Id = $item_id;
      $item->ChangeKey = $change_key;

      $request->ItemIds->ItemId[] = $item;
    }

    return parent::GetItem($request);
  }

  /**
   * Returns the SOAP response for CreateItem request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *   'items' => array(
   *     0 => array(
   *       'body' => '<div style="color:red;"><p>Test <b>Body</b> <i>HTML</i>
   * </p></div>',
   *       'body_type' => EWSType_BodyTypeType::HTML,
   *       'subject' => 'Test create item V3',
   *       'date' => array('start' => '2015-01-09T17:00:00+02:00', 'end' =>
   * '2015-01-09T17:30:00+02:00'),
   *       'location' => array('room 1', 'room 2', 'test location'),
   *       'reminder' => '15',
   *       'attendees' => array('mail@example.com'),
   *     ),
   *   ),
   *   'operation_type' =>
   * EWSType_CalendarItemCreateOrDeleteOperationType::SEND_TO_NONE,
   *   'folder_id' => EWSType_DistinguishedFolderIdNameType::CALENDAR,
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function CreateItem($options) {
    // Create the request.
    $request = new EWSType_CreateItemType();

    // Look in the "calendar's folder"
    $request->SavedItemFolderId = new EWSType_TargetFolderIdType();
    $request->SavedItemFolderId->DistinguishedFolderId = new EWSType_DistinguishedFolderIdType();
    $request->SavedItemFolderId->DistinguishedFolderId->Id = $options['folder_id'];

    $request->Items = new EWSType_NonEmptyArrayOfAllItemsType();
    foreach ($options['items'] as $data) {
      // Set the basics for the calendar.
      $calendar_item = new EWSType_CalendarItemType();
      $calendar_item->Body = new EWSType_BodyType();
      $calendar_item->Body->BodyType = $data['body_type'];
      $calendar_item->Body->_ = $data['body'];
      $calendar_item->Subject = $data['subject'];
      if (isset($data['date'])) {
        $calendar_item->Start = $data['date']['start'];
        $calendar_item->End = $data['date']['end'];
      }

      if (isset($data['location'])) {
        if (!is_array($data['location'])) {
          $data['location'] = array($data['location']);
        }
        // Set the location.
        $calendar_item->Location = implode('; ', $data['location']);
      }

      // Set the reminder.
      if (isset($data['reminder']) && $data['reminder']) {
        $calendar_item->ReminderIsSet = TRUE;
        $calendar_item->ReminderMinutesBeforeStart = $data['reminder'];
      }

      if (isset($data['attendees'])) {
        $calendar_item->RequiredAttendees = new EWSType_NonEmptyArrayOfAttendeesType();
        foreach ($data['attendees'] as $mail) {
          $attendee = new EWSType_AttendeeType();
          $attendee->Mailbox = new EWSType_EmailAddressType();
          $attendee->Mailbox->EmailAddress = $mail;

          // Set the attendees.
          $calendar_item->RequiredAttendees->Attendee[] = $attendee;
        }
      }

      if (isset($data['importance'])) {
        // Set the importance of the event.
        $calendar_item->Importance = new EWSType_ImportanceChoicesType();
        $calendar_item->Importance->_ = $data['importance'];
      }

      $request->Items->CalendarItem[] = $calendar_item;
    }

    $request->SendMeetingInvitations = $options['operation_type'];

    return parent::CreateItem($request);
  }

  /**
   * Returns the SOAP response for UpdateItem request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *   'msg_dispositon' => EWSType_MessageDispositionType::SAVE_ONLY,
   *   'invitations_cancellations' =>
   * EWSType_CalendarItemUpdateOperationType::SEND_TO_NONE,
   *   'conflict_resolution' => EWSType_ConflictResolutionType::AUTO_RESOLVE,
   *   'properties' => array(
   *     0 => array(
   *       'operation' => 'set',
   *       'field_uri' => EWSType_UnindexedFieldURIType::ITEM_SENSITIVITY,
   *       'message' => EWSType_SensitivityChoicesType::PRIVATE_ITEM,
   *     ),
   *     1 => array(
   *       'operation' => 'append',
   *       'field_uri' => EWSType_UnindexedFieldURIType::ITEM_BODY,
   *       // The type should match already existing body type.
   *       'body_type' => EWSType_BodyTypeType::HTML
   *       'message' => 'Some additional text to append',
   *     ),
   *     2 => array(
   *       'operation' => 'delete',
   *       'field_uri' => EWSType_UnindexedFieldURIType::ITEM_BODY,
   *     ),
   *   ),
   *   'item_ids' => array($ItemId => $ChangeKey),
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function UpdateItem($options) {
    // Create the request.
    $request = new EWSType_UpdateItemType();

    $request->MessageDisposition = $options['msg_dispositon'];
    $request->SendMeetingInvitationsOrCancellations = $options['invitations_cancellations'];

    if (isset($options['conflict_resolution'])) {
      $request->ConflictResolution = $options['conflict_resolution'];
    }

    $request->ItemChanges = new EWSType_NonEmptyArrayOfItemChangesType();
    foreach ($options['item_ids'] as $item_id => $change_key) {
      $item = new EWSType_ItemChangeType();
      $item->ItemId = new EWSType_ItemIdType();
      $item->ItemId->Id = $item_id;
      $item->ItemId->ChangeKey = $change_key;

      $item->Updates = new EWSType_NonEmptyArrayOfItemChangeDescriptionsType();
      foreach ($options['properties'] as $propertie) {
        switch ($propertie['operation']) {
          // Append action.
          case 'append':
            $append_field = new EWSType_AppendToItemFieldType();
            $append_field->FieldURI = new EWSType_PathToUnindexedFieldType();
            $append_field->FieldURI->FieldURI = $propertie['field_uri'];
            $append_field->Message = new EWSType_MessageType();
            $append_field->Message->Body = new EWSType_BodyType();
            $append_field->Message->Body->BodyType = 'Text';
            if (isset($propertie['body_type'])) {
              $append_field->Message->Body->BodyType = $propertie['body_type'];
            }
            $append_field->Message->Body->_ = $propertie['message'];

            $item->Updates->AppendToItemField[] = $append_field;
            break;

          // Set action.
          case 'set':
            $set_field = new EWSType_SetItemFieldType();
            $set_field->FieldURI = new EWSType_PathToUnindexedFieldType();
            $set_field->FieldURI->FieldURI = $propertie['field_uri'];
            $set_field->Message = new EWSType_MessageType();
            $set_field->Message->Sensitivity = $propertie['message'];

            $item->Updates->SetItemField[] = $set_field;
            break;

          // Delete action.
          case 'delete':
            $delete_field = new EWSType_DeleteItemFieldType();
            $delete_field->FieldURI = new EWSType_PathToUnindexedFieldType();
            $delete_field->FieldURI->FieldURI = $propertie['field_uri'];

            $item->Updates->DeleteItemField[] = $delete_field;
            break;
        }
      }

      $request->ItemChanges->ItemChange[] = $item;
    }

    return parent::UpdateItem($request);
  }

  /**
   * Returns the SOAP response for DeleteItem request.
   *
   * @param array $options
   *   The request options.
   *
   * @code
   * $options = array(
   *   'type' => EWSType_DisposalType::HARD_DELETE,
   *   'send_operation' =>
   * EWSType_CalendarItemCreateOrDeleteOperationType::SEND_TO_NONE,
   *   'item_ids' => array($ItemId),
   * );
   * @endcode
   *
   * @return object
   *   An stdClass object.
   */
  public function DeleteItem($options) {
    // Create the request.
    $request = new EWSType_DeleteItemType();

    $request->DeleteType = $options['type'];
    $request->SendMeetingCancellations = $options['send_operation'];
    $request->ItemIds = new EWSType_NonEmptyArrayOfBaseItemIdsType();
    foreach ($options['item_ids'] as $item_id) {
      $item = new EWSType_ItemIdType();
      $item->Id = $item_id;
      $request->ItemIds->ItemId[] = $item;
    }

    return parent::DeleteItem($request);
  }

  /**
   * Get username.
   */
  public function getUsername() {
    return $this->username;
  }

  /**
   * Get server.
   */
  public function getServer() {
    return $this->server;
  }

  /**
   * Formats timestamps to proper ews date.
   *
   * @param int $dt
   *   The date to format
   *
   * @return string
   *   The formatted date.
   */
  private function formatEwsDate($dt) {
    $dt = date('Y-m-d H:i:s', $dt);
    $dt = preg_replace('/\s+/', 'T', $dt);
    return $dt;
  }

  /**
   * Extracts the calendar items properly.
   *
   * @param object $response
   *   The ews response object that should be processed.
   *
   * @return array
   *   The array of calendar items.
   */
  public function extractCalendarData($response) {
    // dpm($response);
    if ($response->ResponseMessages->FindItemResponseMessage->ResponseClass == 'Success') {
      $calendar_items = $response->ResponseMessages->FindItemResponseMessage->RootFolder->Items->CalendarItem;
      if (!is_array($calendar_items)) {
        $calendar_items = array($calendar_items);
      }
      return $calendar_items;
    }
    else {
      // dpm($response);
      watchdog('ews', 'Response error: "' . $response->ResponseMessages->FindItemResponseMessage->ResponseClass . '" - ' . $response->ResponseMessages->FindItemResponseMessage->ResponseCode . ' - ' . $response->ResponseMessages->FindItemResponseMessage->MessageText);
    }
    return array();
  }

  /**
   * Processes the FreeBusy Response and returns the calendar items.
   */
  public function processFreeBusyResponse($response) {
    $response_message = NULL;
    if (isset($response->FreeBusyResponseArray->FreeBusyResponse->ResponseMessage)) {
      $response_message = $response->FreeBusyResponseArray->FreeBusyResponse->ResponseMessage;
      if (isset($response->FreeBusyResponseArray->FreeBusyResponse->FreeBusyView->CalendarEventArray->CalendarEvent)) {
        $items = $response->FreeBusyResponseArray->FreeBusyResponse->FreeBusyView->CalendarEventArray->CalendarEvent;
      }
    }

    if (!$response_message) {
      watchdog('ews', 'The response is not EWS FreeBusyResponseArray.');
      return array();
    }

    if ($response_message->ResponseClass != 'Success') {
      watchdog('ews', 'Response error: "' . $response->ResponseClass . '" - ' . $response->ResponseCode . ' - ' . $response->MessageText);
      return array();
    }

    if (!is_array($items)) {
      $items = array($items);
    }

    return $items;
  }

  /**
   * Normalizes the FreeBusyItems to a common data format.
   *
   * That format is more like the CalendarItem.
   */
  public function processFreeBusyItems($items) {
    foreach($items as $item) {
      $item->Subject = $item->CalendarEventDetails->Subject;
      $item->Start = $item->StartTime;
      $item->End = $item->EndTime;
      $item->CalendarItemType = NULL;
      $item->LegacyFreeBusyStatus = NULL;
      $item->Location = $item->CalendarEventDetails->Location;
      $item->Organizer = NULL;
      $item->ItemId = new StdClass();
      $item->ItemId->Id = $item->CalendarEventDetails->ID;
    }
    return $items;
  }


  /**
   * Gets the calendar items for a single user.
   *
   * @param string $user_email
   *   The exchange user email.
   * @param int $from_date
   *   Get events starting from this date.
   * @param int $to_date
   *   Get events ending this date.
   * @param int|boolean $minutes
   *   Cache the results for given minutes.
   *
   * @return object
   *   The ews object containing the response.
   */
  public function findUserCalendarItems($user_email, $from_date, $to_date, $minutes = FALSE) {
    $cid = 'ews:' . $this->getUsername();
    $cid .= ':' . md5($this->getServer());
    $cid .= ':' . md5(serialize(array($user_email, $from_date, $to_date, $minutes)));

    // Cache get.
    if (($cache = cache_get($cid)) && !empty($cache->data)) {
      return $cache->data;
    }

    $from_date = $this->formatEwsDate($from_date);
    $to_date = $this->formatEwsDate($to_date);

    $request = new EWSType_FindItemType();

    $request->Traversal = EWSType_ItemQueryTraversalType::SHALLOW;

    $request->ItemShape = new EWSType_ItemResponseShapeType();
    $request->ItemShape->BaseShape = EWSType_DefaultShapeNamesType::DEFAULT_PROPERTIES;

    $request->CalendarView = new EWSType_CalendarViewType();
    $request->CalendarView->StartDate = $from_date;
    $request->CalendarView->EndDate = $to_date;

    $request->ParentFolderIds = new EWSType_NonEmptyArrayOfBaseFolderIdsType();
    $request->ParentFolderIds->DistinguishedFolderId = new EWSType_DistinguishedFolderIdType();
    $request->ParentFolderIds->DistinguishedFolderId->Id = EWSType_DistinguishedFolderIdNameType::CALENDAR;
    $request->ParentFolderIds->DistinguishedFolderId->Mailbox = new EWSType_EmailAddressType();
    $request->ParentFolderIds->DistinguishedFolderId->Mailbox->EmailAddress = $user_email;

    $response = parent::FindItem($request);

    // Cache set.
    if ($minutes) {
      cache_set($cid, $response, 'cache', REQUEST_TIME + (60 * $minutes));
    }

    return $response;
  }

  /**
   * Gets a single calendar item data.
   *
   * @param string $id
   *   The id of the item.
   */
  public function GetCalendarItem($id) {
    $request = new EWSType_GetItemType();

    $request->ItemShape = new EWSType_ItemResponseShapeType();
    $request->ItemShape->BaseShape = EWSType_DefaultShapeNamesType::ALL_PROPERTIES;

    $request->ItemIds = new EWSType_NonEmptyArrayOfBaseItemIdsType();
    $request->ItemIds->ItemId = new EWSType_ItemIdType();
    $request->ItemIds->ItemId->Id = $id;

    $response = parent::GetItem($request);

    if ($response->ResponseMessages->GetItemResponseMessage->ResponseClass == 'Success') {
      return $response->ResponseMessages->GetItemResponseMessage->Items->CalendarItem;
    }
    return NULL;
  }

  /**
   * Gets the users availability by user email.
   *
   * NOTE: Basicaly this returns the calendar items so we're using
   * findUserCalendarItems instead.
   *
   * @param string $user_email
   *   The exchange email account to get calendr for.
   */
  public function GetUserAvailabilityByUser($user_email, $from_date, $to_date) {
    $request = new EWSType_GetUserAvailabilityRequestType();

    $request->FreeBusyViewOptions = new EWSType_FreeBusyViewOptionsType();
    $request->FreeBusyViewOptions->MergedFreeBusyIntervalInMinutes = 15;
    $request->FreeBusyViewOptions->RequestedView = EWSType_FreeBusyViewType::DETAILED_MERGED;
    $request->FreeBusyViewOptions->TimeWindow = new EWSType_Duration();

    $request->FreeBusyViewOptions->TimeWindow->StartTime = $from_date;
    $request->FreeBusyViewOptions->TimeWindow->EndTime = $to_date;

    $request->MailboxDataArray = array();

    $mbox = new EWSType_MailboxData();
    $mbox->AttendeeType = EWSType_MeetingAttendeeType::REQUIRED;
    $mbox->Email = new EWSType_EmailAddressType();
    $mbox->Email->Address = $user_email;
    $mbox->Email->EmailAddress = $user_email;

    $request->MailboxDataArray[] = $mbox;

    $request->TimeZone = $this->GetSerializableTimeZoneCopenhagen();

    return $this->GetUserAvailability($request);

  }

  /**
   * Returns the time zone definition for Copenhagen.
   *
   * The EU summer time starts on the last (5th) Sunday of March
   * and ends on the last (5th) Sunday of October. I'm not exactly sure
   * for the '02:00:00' time but it should work.
   */
  public function GetSerializableTimeZoneCopenhagen() {
    $timezone = new EWSType_SerializableTimeZone();
    $timezone->Bias = -60;
    $timezone->StandardTime = new EWSType_SerializableTimeZoneTime();
    $timezone->StandardTime->Bias = 0;
    $timezone->StandardTime->Time = '02:00:00';
    $timezone->StandardTime->DayOfWeek = EWSType_DayOfWeekType::SUNDAY;
    $timezone->StandardTime->DayOrder = 5;
    $timezone->StandardTime->Month = 10;
    $timezone->DaylightTime = new EWSType_SerializableTimeZoneTime();
    $timezone->DaylightTime->Bias = -60;
    $timezone->DaylightTime->Time = '02:00:00';
    $timezone->DaylightTime->DayOfWeek = EWSType_DayOfWeekType::SUNDAY;
    $timezone->DaylightTime->DayOrder = 5;
    $timezone->DaylightTime->Month = 3;
    return $timezone;
  }

  /**
   * Gets the available rooms to book.
   *
   * TODO: this is not ready yet.
   */
  public function MyGetRooms() {
    $request = new EWSType_GetRoomListsType();

    return parent::GetRoomLists($request);
  }

  /**
   * Creates an event for a room.
   */
  public function CreateEvent($subject, $start, $end, $room_email, $room_name) {
    $request = new EWSType_CreateItemType();
    $request->Items = new EWSType_NonEmptyArrayOfAllItemsType();
    $request->Items->CalendarItem = new EWSType_CalendarItemType();

    $request->Items->CalendarItem->Subject = $subject;

    $request->Items->CalendarItem->Start = $start->format('c');
    $request->Items->CalendarItem->End = $end->format('c');

    // TODO: set reminder?
    $request->Items->CalendarItem->ReminderIsSet = TRUE;
    $request->Items->CalendarItem->ReminderMinutesBeforeStart = 15;

    $request->Items->CalendarItem->Location = $room_name;

    $attendee = new EWSType_AttendeeType();
    $attendee->Mailbox = new EWSType_EmailAddressType();
    $attendee->Mailbox->EmailAddress = $room_email;
    $attendee->Mailbox->Name = $room_name;

    $request->Items->CalendarItem->Resources = array($attendee);

    // TODO: set body?
    // $request->Items->CalendarItem->Body = new EWSType_BodyType();
    // $request->Items->CalendarItem->Body->BodyType = EWSType_BodyTypeType::HTML;
    // $request->Items->CalendarItem->Body->_ = 'This is <b>the</b> body';

    // TODO: Set the item class type (not required)?
    // $request->Items->CalendarItem->ItemClass = new EWSType_ItemClassType();
    // $request->Items->CalendarItem->ItemClass->_ = EWSType_ItemClassType::APPOINTMENT;

    // TODO: Set the sensativity of the event (defaults to normal)?
    // $request->Items->CalendarItem->Sensitivity = new EWSType_SensitivityChoicesType();
    // $request->Items->CalendarItem->Sensitivity->_ = EWSType_SensitivityChoicesType::NORMAL;

    // TODO: Set the importance of the event?
    // $request->Items->CalendarItem->Importance = new EWSType_ImportanceChoicesType();
    // $request->Items->CalendarItem->Importance->_ = EWSType_ImportanceChoicesType::NORMAL;

    // NOTE: needed bacause oF the room reservation.
    $request->SendMeetingInvitations = EWSType_CalendarItemCreateOrDeleteOperationType::SEND_ONLY_TO_ALL;

    return parent::CreateItem($request);
  }
}
