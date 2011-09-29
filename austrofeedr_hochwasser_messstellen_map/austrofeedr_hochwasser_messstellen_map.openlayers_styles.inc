<?php
/**
 * @file
 * austrofeedr_hochwasser_messstellen_map.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function austrofeedr_hochwasser_messstellen_map_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'hw_messstellen_map_style';
  $openlayers_styles->title = 'Messstellen Style';
  $openlayers_styles->description = 'Basic Messstellen style.';
  $openlayers_styles->data = array(
    'pointRadius' => 7,
    'fillColor' => '#333333',
    'strokeColor' => '#000000',
    'strokeWidth' => 1,
    'fillOpacity' => 0.8,
    'strokeOpacity' => 0.9,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['hw_messstellen_map_style'] = $openlayers_styles;

  return $export;
}
