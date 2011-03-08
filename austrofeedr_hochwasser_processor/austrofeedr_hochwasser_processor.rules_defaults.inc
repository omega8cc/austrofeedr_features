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
