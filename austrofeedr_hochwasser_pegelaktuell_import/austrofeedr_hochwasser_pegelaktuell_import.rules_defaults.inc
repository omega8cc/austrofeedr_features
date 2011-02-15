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
          "type" : "wsclient_hw_ehyd_pegelaktuell_custom_pegelaktuell_item"
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
          "type" : "wsclient_hw_ehyd_pegelaktuell_custom_pegelaktuell_list"
        }
      },
      "DO" : [
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
  return $items;
}
