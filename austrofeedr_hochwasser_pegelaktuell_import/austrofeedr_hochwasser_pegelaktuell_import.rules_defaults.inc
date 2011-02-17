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
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell"
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
              "param_timestamp" : [ "pegelaktuell-item:zp" ],
              "param_value" : [ "pegelaktuell-item:wert" ]
            },
            "PROVIDE" : { "data_created" : { "wert" : "Messwert" } }
          }
        },
        { "list_add" : { "list" : [ "messstelle:field-hw-werte" ], "item" : [ "wert" ] } },
        { "entity_save" : { "data" : [ "messstelle" ] } }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_result_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_result_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell List Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "pegelaktuell_result" : {
          "label" : "Pegelaktuell list",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell_result"
        }
      },
      "DO" : [
        { "LOOP OVER" : [
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
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_trigger'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_trigger" : {
      "LABEL" : "Hochwasser Pegelaktuell Trigger",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "wsclient" ],
      "ON" : [ "node_view" ],
      "IF" : [ { "data_is" : { "data" : [ "node:nid" ], "value" : "331" } } ],
      "DO" : [
        { "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell" : { "PROVIDE" : { "result" : { "result" : "Pegelaktuell" } } } },
        { "component_rules_hw_pegelaktuell_result_processor" : { "pegelaktuell_result" : [ "result" ] } }
      ]
    }
  }');
  return $items;
}
