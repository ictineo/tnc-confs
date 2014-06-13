<?php
/**
 * @file
 * tnc_ui.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tnc_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_redirect_parameter_name';
  $strongarm->value = 'destination';
  $export['login_redirect_parameter_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_redirect_status';
  $strongarm->value = '1';
  $export['login_redirect_status'] = $strongarm;

  return $export;
}
