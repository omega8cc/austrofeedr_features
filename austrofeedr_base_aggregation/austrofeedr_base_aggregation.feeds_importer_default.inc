<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function austrofeedr_base_aggregation_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'austrofeedr_feed';
  $feeds_importer->config = array(
    'name' => 'AustroFeedr Feed',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 1,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'austrofeedr_update',
        'input_format' => 'filtered_html',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'tags',
            'target' => 'field_austrofeedr_in_tags',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'author_name',
            'target' => 'field_austrofeedr_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          7 => array(
            'source' => 'url',
            'target' => 'field_austrofeedr_item_url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
      ),
    ),
    'content_type' => 'austrofeedr_feed',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['austrofeedr_feed'] = $feeds_importer;

  return $export;
}
