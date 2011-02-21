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
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_werte" } },
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:wert" ] } },
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:zp" ] } }
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
  $items['rules_hw_pegelaktuell_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "rules_scheduler", "wsclient" ],
      "USES VARIABLES" : { "date" : { "label" : "Schedule date", "type" : "date" } },
      "DO" : [
        { "schedule" : {
            "component" : "rules_hw_pegelaktuell_processor",
            "date" : { "select" : "date", "date_offset" : { "value" : 3600 } },
            "identifier" : "hochwasser_pegelaktuell",
            "param_date" : { "select" : "date", "date_offset" : { "value" : 3600 } }
          }
        },
        { "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell" : { "PROVIDE" : { "result" : { "result" : "Pegelaktuell" } } } },
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
  return $items;
}
