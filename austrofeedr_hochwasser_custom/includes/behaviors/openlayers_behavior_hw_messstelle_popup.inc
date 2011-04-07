<?php

/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * Attribution Behavior
 */
class openlayers_behavior_hw_messstelle_popup extends openlayers_behavior_popup {
  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'austrofeedr_hochwasser_custom') .
      '/includes/behaviors/js/openlayers_behavior_hw_messstelle_popup.js');
    return $this->options;
  }
}
