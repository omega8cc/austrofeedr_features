<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function austrofeedr_hochwasser_messstellen_map_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'messstellen_style';
  $openlayers_styles->title = 'Messstellen Style';
  $openlayers_styles->description = 'Basic Messstellen style.';
  $openlayers_styles->data = array(
    'pointRadius' => 7,
    'fillColor' => '#0033BB',
    'strokeColor' => '#000000',
    'strokeWidth' => 2,
    'fillOpacity' => 0.8,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['messstellen_style'] = $openlayers_styles;

  return $export;
}
