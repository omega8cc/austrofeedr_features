<?php
/**
 * @file
 * austrofeedr_hochwasser_processor.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_processor_default_rules_configuration() {
  $items = array();
  $items['rules_hochwasser_processor_static'] = entity_import('rules_config', '{ "rules_hochwasser_processor_static" : {
      "LABEL" : "Hochwasser Processor static",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "wsclient", "rules", "austrofeedr_hochwasser_processor" ],
      "DO" : [
        { "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell" : { "PROVIDE" : { "result" : { "result" : "Pegelaktuell" } } } },
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
              { "hw_messstelle_update" : {
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
  $items['rules_hochwasser_result_processor'] = entity_import('rules_config', '{ "rules_hochwasser_result_processor" : {
      "LABEL" : "Hochwasser Result Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "pegelaktuell_result" : {
          "label" : "Pegelaktuell result",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell_result"
        }
      },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "pegelaktuell_result:featureMember" ] },
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
  $items['rules_hochwasser_update_processing'] = entity_import('rules_config', '{ "rules_hochwasser_update_processing" : {
      "LABEL" : "Hochwasser Update Processing",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_hw_update_bezirk" } }
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
            "target_terms" : [ "node:field-hw-update-bezirk" ]
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
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_trend" } },
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_last_updated" } },
        { "entity_has_field" : { "entity" : [ "messstelle" ], "field" : "field_hw_wert_aktuell" } },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "messstelle:field-hw-last-updated" ] } },
            { "NOT data_is" : {
                "data" : [ "messstelle:field-hw-last-updated" ],
                "value" : [ "pegelaktuell-item:zp" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "messstelle:field-hw-wert-aktuell" ],
            "value" : [ "pegelaktuell-item:wert" ]
          }
        },
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
        { "data_set" : {
            "data" : [ "messstelle:field-hw-last-updated" ],
            "value" : [ "pegelaktuell-item:zp" ]
          }
        },
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
        { "hw_wasserstand_update_trend" : {
            "USING" : {
              "pegelaktuell_item" : [ "pegelaktuell_item" ],
              "messstelle" : [ "messstelle" ]
            },
            "PROVIDE" : { "hw_trend_term" : { "hw_trend_term" : "Hochwasser trend term" } }
          }
        },
        { "data_set" : {
            "data" : [ "messstelle:field-hw-trend" ],
            "value" : [ "hw-trend-term" ]
          }
        },
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
        { "component_rules_hochwasser_result_processor" : { "pegelaktuell_result" : [ "result" ] } }
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
              "param_dbmsnr" : [ "messstelle-id-dbmsnr" ],
              "param_wert" : [ "wasserstand" ],
              "param_zp" : "now"
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
        },
        { "devel_debug" : [] }
      ]
    }
  }');
  return $items;
}
