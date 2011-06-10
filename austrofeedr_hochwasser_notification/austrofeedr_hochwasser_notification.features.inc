<?php
/**
 * @file
 * austrofeedr_hochwasser_notification.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function austrofeedr_hochwasser_notification_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_default_message_type().
 */
function austrofeedr_hochwasser_notification_default_message_type() {
  $items = array();
  $items['austrofeedr_hochwasser_notification'] = entity_import('message_type', '{
    "name" : "austrofeedr_hochwasser_notification",
    "description" : "AustroFeedr Hochwasser Notification",
    "argument_keys" : [ "" ],
    "message_text" : { "und" : [
        {
          "value" : "AustroFeedr Hochwasser Notification",
          "format" : null,
          "safe_value" : "AustroFeedr Hochwasser Notification"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
