<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function austrofeedr_aggregation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create austrofeedr_feed content
  $permissions['create austrofeedr_feed content'] = array(
    'name' => 'create austrofeedr_feed content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any austrofeedr_feed content
  $permissions['delete any austrofeedr_feed content'] = array(
    'name' => 'delete any austrofeedr_feed content',
    'roles' => array(),
  );

  // Exported permission: delete own austrofeedr_feed content
  $permissions['delete own austrofeedr_feed content'] = array(
    'name' => 'delete own austrofeedr_feed content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any austrofeedr_feed content
  $permissions['edit any austrofeedr_feed content'] = array(
    'name' => 'edit any austrofeedr_feed content',
    'roles' => array(),
  );

  // Exported permission: edit own austrofeedr_feed content
  $permissions['edit own austrofeedr_feed content'] = array(
    'name' => 'edit own austrofeedr_feed content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
