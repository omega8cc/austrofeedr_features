<?php
/**
 * @file
 * austrofeedr_hochwasser_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_admin_default_rules_configuration() {
  $items = array();
  $items['rules_hw_processor_rework_content'] = entity_import('rules_config', '{ "rules_hw_processor_rework_content" : {
      "LABEL" : "Hochwasser Processor Rework Content",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "type",
              "value" : "update",
              "limit" : "50"
            },
            "PROVIDE" : { "entity_fetched" : { "updates" : "Updates" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "updates" ] },
            "ITEM" : { "current_update" : "Current update" },
            "DO" : [
              { "component_rules_hw_update_processor" : { "node" : [ "current-update" ] } },
              { "entity_save" : { "data" : [ "current-update" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
