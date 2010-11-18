<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function austrofeedr_publishing_user_default_permissions() {
  $permissions = array();

  // Exported permission: create austrofeedr_subscription content
  $permissions['create austrofeedr_subscription content'] = array(
    'name' => 'create austrofeedr_subscription content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any austrofeedr_subscription content
  $permissions['delete any austrofeedr_subscription content'] = array(
    'name' => 'delete any austrofeedr_subscription content',
    'roles' => array(),
  );

  // Exported permission: delete own austrofeedr_subscription content
  $permissions['delete own austrofeedr_subscription content'] = array(
    'name' => 'delete own austrofeedr_subscription content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any austrofeedr_subscription content
  $permissions['edit any austrofeedr_subscription content'] = array(
    'name' => 'edit any austrofeedr_subscription content',
    'roles' => array(),
  );

  // Exported permission: edit own austrofeedr_subscription content
  $permissions['edit own austrofeedr_subscription content'] = array(
    'name' => 'edit own austrofeedr_subscription content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
