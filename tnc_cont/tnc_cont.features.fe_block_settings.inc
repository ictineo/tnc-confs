<?php
/**
 * @file
 * tnc_cont.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tnc_cont_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-logo_tnc_footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'logo_tnc_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tnc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tnc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-workbench_customlinks_menus'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'workbench_customlinks_menus',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tnc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tnc',
        'weight' => 0,
      ),
    ),
    'title' => 'Accessos directes a edició menus',
    'visibility' => 0,
  );

  $export['block-xxss_barra_superior'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'xxss_barra_superior',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tnc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tnc',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
