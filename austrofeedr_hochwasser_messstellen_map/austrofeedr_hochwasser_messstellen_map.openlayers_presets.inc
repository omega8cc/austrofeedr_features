<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function austrofeedr_hochwasser_messstellen_map_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'af_messstellen';
  $openlayers_presets->title = 'AustroFeedr Messstellen';
  $openlayers_presets->description = 'AustroFeedr Hochwasser Messstellen Map';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '13.837075515151, 47.719730502444',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'af_messstellen_openlayers_1' => 'af_messstellen_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'google_physical' => 'google_physical',
      'osm_mapnik' => 'osm_mapnik',
      'osm_tah' => 'osm_tah',
      'af_messstellen_openlayers_1' => 'af_messstellen_openlayers_1',
    ),
    'layer_styles' => array(
      'af_messstellen_openlayers_1' => 'messstellen_style',
    ),
    'layer_activated' => array(
      'af_messstellen_openlayers_1' => 'af_messstellen_openlayers_1',
    ),
    'layer_switcher' => array(
      'af_messstellen_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'messstellen_style',
      'select' => 'messstellen_style',
      'temporary' => 'messstellen_style',
    ),
  );
  $export['af_messstellen'] = $openlayers_presets;

  return $export;
}
