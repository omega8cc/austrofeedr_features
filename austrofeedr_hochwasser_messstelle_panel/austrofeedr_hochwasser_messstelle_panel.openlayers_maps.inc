<?php
/**
 * @file
 * austrofeedr_hochwasser_messstelle_panel.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function austrofeedr_hochwasser_messstelle_panel_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'hw_messstelle_map_single_preset';
  $openlayers_maps->title = 'Hochwasser Messstelle Single';
  $openlayers_maps->description = 'AustroFeedr Hochwasser Messstellen Map Single';
  $openlayers_maps->data = array(
    'width' => '200px',
    'height' => '200px',
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
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'hw_messstellen_map_openlayers_1',
        'point_zoom_level' => '11',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'hw_messstellen_map_openlayers_1' => 'hw_messstellen_map_openlayers_1',
    ),
    'layer_weight' => array(
      'hw_messstellen_map_openlayers_1' => '0',
      'hw_messstellen_map_single_openlayers_1' => '0',
    ),
    'layer_styles' => array(
      'hw_messstellen_map_single_openlayers_1' => 'hw_messstellen_map_style',
      'hw_messstellen_map_openlayers_1' => 'hw_messstellen_map_style',
    ),
    'layer_activated' => array(
      'hw_messstellen_map_openlayers_1' => 'hw_messstellen_map_openlayers_1',
      'hw_messstellen_map_single_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'hw_messstellen_map_openlayers_1' => 0,
      'hw_messstellen_map_single_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'hw_messstellen_map_style',
      'select' => 'hw_messstellen_map_style',
      'temporary' => 'hw_messstellen_map_style',
    ),
  );
  $export['hw_messstelle_map_single_preset'] = $openlayers_maps;

  return $export;
}
