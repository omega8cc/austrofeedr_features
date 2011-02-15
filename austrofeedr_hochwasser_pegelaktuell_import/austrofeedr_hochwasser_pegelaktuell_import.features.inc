<?php

/**
 * Implementation of hook_default_wsclient_service().
 */
function austrofeedr_hochwasser_pegelaktuell_import_default_wsclient_service() {
  $items = array();
  $items['hw_ehyd_pegelaktuell'] = entity_import('wsclient_service', '{
    "settings" : [],
    "operations" : { "pegelaktuell" : {
        "label" : "Pegelaktuell",
        "result" : { "type" : "date", "label" : "Wasserstand Werte" }
      }
    },
    "datatypes" : [],
    "name" : "hw_ehyd_pegelaktuell",
    "label" : "Hochwasser eHYD Pegelaktuell",
    "url" : "http:\\/\\/gis.lebensministerium.at\\/wmsgw\\/?key=8e2b2df01bef8a1ce65c0abcf6ba39fe\\u0026VERSION=1.1.0\\u0026REQUEST=GetFeature\\u0026service=WFS\\u0026typenam",
    "type" : "rest",
    "token" : "5X7CM-iB3x4ztR5WhbcHSSY59qodllDVnUqd_Lh_jpA",
    "authentication" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
