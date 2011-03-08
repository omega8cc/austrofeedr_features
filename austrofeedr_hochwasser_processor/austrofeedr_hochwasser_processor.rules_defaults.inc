<?php

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_processor_default_rules_configuration() {
  $items = array();
  $items['rules_hochwasser_update_processing'] = entity_import('rules_config', '{ "rules_hochwasser_update_processing" : {
      "LABEL" : "Hochwasser Update Processing",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : [ "feeds_import_subscription_feeds_importer" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_update_bezirk" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "taxonomy_vocabulary",
              "property" : "machine_name",
              "value" : "hw_austria",
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "bezirke" : "Bezirke" } }
          }
        },
        { "component_rules_autotag_tag" : {
            "text" : [ "node:body:value" ],
            "vocabulary" : [ "bezirke:0" ],
            "target_terms" : [ "node:field-update-bezirk" ]
          }
        }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_item_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_item_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Item Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "austrofeedr_hochwasser_processor" ],
      "USES VARIABLES" : {
        "pegelaktuell_item" : {
          "label" : "Pegelaktuell item",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell"
        },
        "messstelle" : { "label" : "Messstelle", "type" : "node" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:wert" ] } },
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:zp" ] } },
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_werte" } },
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_status" } },
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_trend" } }
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
        { "hw_wasserstand_update" : {
            "USING" : {
              "pegelaktuell_item" : [ "pegelaktuell_item" ],
              "messstelle" : [ "messstelle" ]
            },
            "PROVIDE" : { "hw_status_term" : { "hw_status_term" : "Hochwasser status term" } }
          }
        },
        { "data_set" : {
            "data" : [ "messstelle:field-hw-status" ],
            "value" : [ "hw-status-term" ]
          }
        },
        { "entity_save" : { "data" : [ "messstelle" ] } }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [
        "rules",
        "rules_scheduler",
        "wsclient",
        "austrofeedr_hochwasser_pegelaktuell_import"
      ],
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
        { "LOOP" : {
            "USING" : { "list" : [ "result:featureMember" ] },
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
        },
        { "LOOP" : {
            "USING" : { "list" : [ "site:current-user:roles" ] },
            "DO" : [ { "af_rules_debug_action" : { "entity" : [ "list-item" ] } } ]
          }
        }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_test_trigger'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_test_trigger" : {
      "LABEL" : "Hochwasser Pegelaktuell Test Trigger",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "wasserstand" : { "label" : "Wasserstand", "type" : "decimal" },
        "messstelle_id_dbmsnr" : { "label" : "Messstelle ID (dbmsnr)", "type" : "text" }
      },
      "DO" : [
        { "data_create" : {
            "USING" : {
              "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell",
              "param_wert" : [ "wasserstand" ],
              "param_zp" : "now",
              "param_dbmsnr" : [ "messstelle-id-dbmsnr" ]
            },
            "PROVIDE" : { "data_created" : { "pegelaktuell_item" : "Pegelaktuell item" } }
          }
        },
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_hw_dbmsnr",
              "value" : [ "pegelaktuell-item:dbmsnr" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "messstellen" : "Messstellen" } }
          }
        },
        { "component_rules_hw_pegelaktuell_item_processor" : {
            "pegelaktuell_item" : [ "pegelaktuell_item" ],
            "messstelle" : [ "messstellen:0" ]
          }
        }
      ]
    }
  }');
  return $items;
}
