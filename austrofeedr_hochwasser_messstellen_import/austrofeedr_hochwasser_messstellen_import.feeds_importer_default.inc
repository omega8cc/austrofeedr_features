<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function austrofeedr_hochwasser_messstellen_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hw_messstellen_cvs_importer';
  $feeds_importer->config = array(
    'name' => 'AustroFeedr Hochwasser Messtellen',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'hw_messstelle',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'DBMSNR',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'MESSSTELLE',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'bezirk',
            'target' => 'field_hw_bezirk',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'lat',
            'target' => 'field_lat',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'lng',
            'target' => 'field_lng',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'lat',
            'target' => 'field_hw_geoposition:lat',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'lng',
            'target' => 'field_hw_geoposition:lon',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'DBMSNR',
            'target' => 'field_hw_dbmsnr',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['hw_messstellen_cvs_importer'] = $feeds_importer;

  return $export;
}
