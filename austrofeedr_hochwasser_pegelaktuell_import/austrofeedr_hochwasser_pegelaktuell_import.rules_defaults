<?php

/**
 * Implementation of hook_default_rules_configuration().
 */
function austrofeedr_hochwasser_pegelaktuell_import_default_rules_configuration() {
  $items = array();
  $items['rules_hw_pegelaktuell_processor'] = entity_import('rules_config', '{ "rules_hw_pegelaktuell_processor" : {
      "LABEL" : "Hochwasser Pegelaktuell Processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "pegelaktuell_result" : {
          "label" : "Pegelaktuell result",
          "type" : "wsclient_hw_ehyd_pegelaktuell_custom_pegelaktuell_result"
        }
      },
      "DO" : [
        { "LOOP OVER" : [
            { "variable_add" : {
                "USING" : { "type" : "text", "value" : [ "pegelaktuell-result:pegelListe:0:wert" ] },
                "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
              }
            }
          ]
        },
        { "LOOP OVER" : [
            { "variable_add" : {
                "USING" : { "type" : "text", "value" : [ "list-item" ] },
                "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
              }
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
