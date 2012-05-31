<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asc_directory_filters_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  return $permissions;
}
