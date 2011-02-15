<?php

/**
 * Implementation of hook_default_wsclient_service().
 */
function austrofeedr_hochwasser_pegelaktuell_import_default_wsclient_service() {
  $services = array();

  /*
  $services['hw_ehyd_pegelaktuell'] = entity_import('wsclient_service', '{
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
  */

  // Google Translate service (REST)
  $service = new WSClientServiceDescription();
  $service->name = 'hw_ehyd_pegelaktuell_custom';
  $service->label = 'Hochwasser eHYD Pegelaktuell custom';
  $service->url = 'http://localhost/afdata.xml';
  $service->type = 'rest';
  $service->settings['formatter'] = new HochwasserHttpClientXMLFormatter();

  // Add info about the REST service, which the user has to provide via the UI.
  $service->datatypes = array(
    'pegelaktuell_list' => array(
      'label' => 'Pegelaktuell liste',
      'property info' => array(
        'pegelListe' => array(
          'type' => 'list<pegelaktuell_item>',
          'label' => 'Liste von Hochwasserstand Aktualisierungen',
        ),
      ),
    ),
    'pegelaktuell_item' => array(
      'label' => 'Pegelaktuell item',
      'property info' => array(
        'wert' => array(
          'type' => 'decimal',
          'label' => 'Hochwasserstand',
        ),
        'aktualisierung' => array(
          'type' => 'date',
          'label' => 'Zeitpunkt',
        ),
        'dbmsnr' => array(
          'type' => 'text',
          'label' => 'Messstellen ID (dbmsnr)',
        ),
      ),
    ),
  );

  //xml formatter
  // wfs:FeatureCollection/gml:featuresMember/ms:wert
  // wfs:FeatureCollection/gml:featuresMember/ms:zp

  $operation['label'] = 'Pegelaktuell';
  $operation['url'] = '';
  $operation['parameter']['key'] = array('type' => 'hidden', 'default value' => '8e2b2df01bef8a1ce65c0abcf6ba39fe');
  $operation['parameter']['typename'] = array('type' => 'hidden', 'default value' => 'pegelaktuell');
  $operation['parameter']['service'] = array('type' => 'hidden', 'default value' => 'WFS');
  $operation['parameter']['REQUEST'] = array('type' => 'hidden', 'default value' => 'GetFeature');
  $operation['parameter']['VERSION'] = array('type' => 'hidden', 'default value' => '1.1.0');

  // We have to specify the version 1.0
  $operation['result'] = array('type' => 'pegelaktuell_result', 'label' => 'Pegelaktuell');
  $service->operations['pegelaktuell'] = $operation;
  $services[$service->name] = $service;

  return $services;
}
