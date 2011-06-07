<?php
/**
 * @file
 * austrofeedr_hochwasser_fake.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_fake_default_rules_configuration() {
  $items = array();
  $items['rules_hochwasser_fake_processor'] = entity_import('rules_config', '{ "rules_hochwasser_fake_processor" : {
      "LABEL" : "Hochwasser Fake Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "wsclient", "rules" ],
      "USES VARIABLES" : { "date" : { "label" : "Schedule date", "type" : "date" } },
      "DO" : [
        { "wsclient_hw_pegelaktuell_ehyd_fake_pegelaktuell" : { "PROVIDE" : { "result" : { "result" : "Pegelaktuell" } } } },
        { "LOOP" : {
            "USING" : { "list" : [ "result:featureMember" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "entity_query" : {
                  "USING" : {
                    "type" : "node",
                    "property" : "field_hw_dbmsnr",
                    "value" : [ "list-item:pegelaktuell:dbmsnr" ],
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "messstelle" : "Messstelle" } }
                }
              },
              { "component_rules_hw_pegelaktuell_item_processor" : {
                  "pegelaktuell_item" : [ "list-item:pegelaktuell" ],
                  "messstelle" : [ "messstelle:0" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
