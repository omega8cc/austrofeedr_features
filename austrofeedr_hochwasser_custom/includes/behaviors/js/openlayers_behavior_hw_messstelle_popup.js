/*
 * Override of callback used by 'popup' behaviour to support clusters
 */
Drupal.theme.openlayersPopup2 = function(feature) {
  //dpm(feature);
  if(feature.adal_popup)
  {
    var output =
      
      '<div class="openlayers-popup openlayers-popup-image">' +
        feature.attributes.field_alumni_contact_image_fid_rendered +
      '</div>' +
	    '<div class="openlayers-popup openlayers-popup-name">' +
	      feature.attributes.name +
	    '</div>' +
	    '<div class="openlayers-popup openlayers-popup-description">' +
	      feature.attributes.description +
	    '</div>';
      output += '<div class="openlayers-popup openlayers-popup-feature">' +
        Drupal.theme.prototype.openlayersPopup(pf) + '</div>';
    return output;
  }
  else
  {
    return Drupal.theme.prototype.openlayersPopup(feature);
  }
};