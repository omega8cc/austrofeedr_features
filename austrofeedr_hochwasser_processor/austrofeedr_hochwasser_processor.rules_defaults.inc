<?php
/**
 * @file
 * austrofeedr_hochwasser_processor.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_processor_default_rules_configuration() {
  $items = array();
  $items['rules_hochwasser_pegelaktuell_item_expiry_processor'] = entity_import('rules_config', '{ "rules_hochwasser_pegelaktuell_item_expiry_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Item Expiry Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "messstelle" : { "label" : "Messstelle", "type" : "node" },
        "hw_unbestimmt_term" : {
          "label" : "Hochwasser unbestimmt status term",
          "type" : "taxonomy_term"
        }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "messstelle" ],
            "type" : { "value" : { "hw_messstelle" : "hw_messstelle" } }
          }
        },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "messstelle:field-hw-status" ] } },
            { "NOT data_is" : {
                "data" : [ "messstelle:field-hw-status" ],
                "value" : [ "hw-unbestimmt-term" ]
              }
            }
          ]
        },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "messstelle:field-hw-last-updated" ] } },
            { "data_is" : {
                "data" : [ "messstelle:field-hw-last-updated" ],
                "op" : "\\u003c",
                "value" : "-1 day"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "messstelle:field-hw-status" ],
            "value" : [ "hw-unbestimmt-term" ]
          }
        },
        { "entity_save" : { "data" : [ "messstelle" ] } }
      ]
    }
  }');
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
              { "component_rules_hw_pegelaktuell_row_processor" : {
                  "pegelaktuell_item" : [ "list-item:pegelaktuell" ],
                  "messstellen_result" : [ "messstelle" ]
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
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "feeds" ],
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
        },
        { "feeds_skip_item" : { "entity" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_hw_import_filter'] = entity_import('rules_config', '{ "rules_hw_import_filter" : {
      "LABEL" : "Hochwasser Import Filter",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : [ "feeds_import_subscription_feeds_importer" ],
      "DO" : [ { "component_rules_hw_update_processor" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_hw_pegelaktuell_expiry_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_expiry_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Expiry Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "austrofeedr_hochwasser_processor", "rules" ],
      "DO" : [
        { "hw_get_wasserstand_unbestimmt" : { "PROVIDE" : { "hw_unbestimmt_term" : { "hw_unbestimmt_term" : "Hochwasser unbestimmt status term" } } } },
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "type",
              "value" : "hw_messstelle",
              "limit" : "500"
            },
            "PROVIDE" : { "entity_fetched" : { "alle_messstellen" : "Alle Messstellen" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "alle-messstellen" ] },
            "ITEM" : { "messstelle" : "Messstelle" },
            "DO" : [
              { "component_rules_hochwasser_pegelaktuell_item_expiry_processor" : { "messstelle" : [ "messstelle" ] } }
            ]
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
        { "node_is_of_type" : {
            "node" : [ "messstelle" ],
            "type" : { "value" : { "hw_messstelle" : "hw_messstelle" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:wert" ] } },
        { "NOT data_is_empty" : { "data" : [ "pegelaktuell-item:zp" ] } },
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
        { "component_rules_hochwasser_result_processor" : { "pegelaktuell_result" : [ "result" ] } },
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "type",
              "value" : "hw_messstelle",
              "limit" : "500"
            },
            "PROVIDE" : { "entity_fetched" : { "alle_messstellen" : "Alle Messstellen" } }
          }
        },
        { "component_rules_hw_pegelaktuell_expiry_processor" : [] }
      ]
    }
  }');
  $items['rules_hw_pegelaktuell_row_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_row_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Row Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "pegelaktuell_item" : {
          "label" : "Pegelaktuell item",
          "type" : "wsclient_hw_pegelaktuell_ehyd_service_pegelaktuell"
        },
        "messstellen_result" : { "label" : "Messtellen result", "type" : "list\\u003cnode\\u003e" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "messstellen-result" ] } },
        { "entity_has_field" : { "entity" : [ "messstellen-result:0" ], "field" : "field_hw_dbmsnr" } }
      ],
      "DO" : [
        { "component_rules_hw_pegelaktuell_item_processor" : {
            "pegelaktuell_item" : [ "pegelaktuell_item" ],
            "messstelle" : [ "messstellen-result:0" ]
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
        }
      ]
    }
  }');
  $items['rules_hw_update_bezirke'] = entity_import('rules_config', '{ "rules_hw_update_bezirke" : {
      "LABEL" : "Hochwasser Update Bezirke",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "update" : "update" } } } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "list\\u003ctaxonomy_term\\u003e",
              "value" : [ "node:field-hw-update-bezirk" ]
            },
            "PROVIDE" : { "variable_added" : { "alle_bezirke" : "Alle Bezirke" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-hw-update-bezirk" ] },
            "ITEM" : { "bezirk" : "Bezirk" },
            "DO" : [
              { "LOOP" : {
                  "USING" : { "list" : [ "bezirk:parents-all" ] },
                  "ITEM" : { "parent" : "Parent" },
                  "DO" : [
                    { "list_add" : { "list" : [ "alle-bezirke" ], "item" : [ "parent" ], "unique" : 1 } }
                  ]
                }
              }
            ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-hw-update-bezirk" ],
            "value" : [ "alle-bezirke" ]
          }
        }
      ]
    }
  }');
  $items['rules_hw_update_import_postprocessor'] = entity_import('rules_config', '{ "rules_hw_update_import_postprocessor" : {
      "LABEL" : "Hochwasser Update Import Postprocessor ",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "feeds" ],
      "USES VARIABLES" : { "node" : { "label" : "Imported node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "update" : "update" } } } },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "node:field-update-tags" ] } },
            { "data_is_empty" : { "data" : [ "node:field-hw-update-bezirk" ] } }
          ]
        }
      ],
      "DO" : [ { "feeds_skip_item" : { "entity" : [ "node" ] } } ]
    }
  }');
  $items['rules_hw_update_processor'] = entity_import('rules_config', '{ "rules_hw_update_processor" : {
      "LABEL" : "Hochwasser Update Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "update" : "update" } } } }
      ],
      "DO" : [
        { "component_rules_autotag_tag" : {
            "text" : "[node:title] [node:body] [node:field-update-subscription-tags]",
            "vocabulary" : "hw_austria",
            "target_terms" : [ "node:field-hw-update-bezirk" ]
          }
        },
        { "component_rules_autotag_tag" : {
            "text" : "[node:title] [node:body] [node:field-update-subscription-tags]",
            "vocabulary" : "update_tags",
            "target_terms" : [ "node:field-update-tags" ]
          }
        },
        { "component_rules_hw_update_bezirke" : { "node" : [ "node" ] } },
        { "component_rules_hw_update_import_postprocessor" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
