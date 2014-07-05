<?php
/**
 * @file
 * tnc_ui.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tnc_ui_user_default_roles() {
  $roles = array();

  // Exported role: Empresa.
  $roles['Empresa'] = array(
    'name' => 'Empresa',
    'weight' => 6,
  );

  // Exported role: Ensenyament.
  $roles['Ensenyament'] = array(
    'name' => 'Ensenyament',
    'weight' => 5,
  );

  // Exported role: Premsa.
  $roles['Premsa'] = array(
    'name' => 'Premsa',
    'weight' => 4,
  );

  // Exported role: Projecte artistic.
  $roles['Projecte artistic'] = array(
    'name' => 'Projecte artistic',
    'weight' => 7,
  );

  // Exported role: TNC.
  $roles['TNC'] = array(
    'name' => 'TNC',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
