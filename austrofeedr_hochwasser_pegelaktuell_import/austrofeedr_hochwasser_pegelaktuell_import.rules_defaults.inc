<?php

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_pegelaktuell_import_default_rules_configuration() {
  $items = array();
  $items['rules_hw_pegelaktuell_item_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_item_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Item Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "pegelaktuell_item" : {
          "label" : "Pegelaktuell item",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell_item"
        },
        "messstelle" : { "label" : "Messstelle", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_werte" } }
      ],
      "DO" : [
        { "data_create" : {
            "USING" : {
              "type" : "field_item_datastore_field",
              "param_timestamp" : [ "pegelaktuell-item:aktualisierung" ],
              "param_value" : [ "pegelaktuell-item:wert" ]
            },
            "PROVIDE" : { "data_created" : { "wert" : "Messwert" } }
          }
        },
        { "list_add" : {
            "list" : [ "messstelle:field-hw-werte" ],
            "item" : [ "wert" ],
            "pos" : "start"
          }
        }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_list_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_list_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell List Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "pegelaktuell_list" : {
          "label" : "Pegelaktuell list",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell_list"
        }
      },
      "DO" : [
        { "drupal_message" : { "message" : "list" } },
        { "LOOP OVER" : [
            { "entity_query" : {
                "USING" : {
                  "type" : "node",
                  "property" : "field_hw_dbmsnr",
                  "value" : [ "list-item:dbmsnr" ],
                  "limit" : "1"
                },
                "PROVIDE" : { "entity_fetched" : { "messstellen" : "Messstellen" } }
              }
            },
            { "component_rules_hw_pegelaktuell_item_processor" : {
                "pegelaktuell_item" : [ "list-item" ],
                "messstelle" : [ "messstellen:0" ]
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_trigger'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_trigger" : {
      "LABEL" : "Hochwasser Pegelaktuell Trigger",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "wsclient", "austrofeedr_hochwasser_pegelaktuell_import" ],
      "ON" : [ "node_view" ],
      "IF" : [ { "data_is" : { "data" : [ "node:nid" ], "value" : "331" } } ],
      "DO" : [
        { "wsclient_hw_ehyd_pegelaktuell_custom_pegelaktuell" : { "PROVIDE" : { "result" : { "result" : "Pegelaktuell" } } } },
        { "af_rules_debug_action" : { "entity" : [ "result" ] } },
        { "drupal_message" : { "message" : "asdf" } },
        { "component_rules_hw_pegelaktuell_list_processor" : { "pegelaktuell_list" : [ "result" ] } }
      ]
    }
  }');
  return $items;
}
