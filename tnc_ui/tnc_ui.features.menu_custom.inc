<?php
/**
 * @file
 * tnc_ui.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tnc_ui_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-compra-d-abonaments.
  $menus['menu-compra-d-abonaments'] = array(
    'menu_name' => 'menu-compra-d-abonaments',
    'title' => 'Compra d\'abonaments',
    'description' => 'Elements de la segona columna del peu',
  );
  // Exported menu: menu-compra-d-entrades.
  $menus['menu-compra-d-entrades'] = array(
    'menu_name' => 'menu-compra-d-entrades',
    'title' => 'Compra d\'entrades',
    'description' => 'Elements de la tercera columna del footer',
  );
  // Exported menu: menu-peu.
  $menus['menu-peu'] = array(
    'menu_name' => 'menu-peu',
    'title' => 'Informació pràctica',
    'description' => 'Crea i edita els elements de la primera columna del menú del peu',
  );
  // Exported menu: menu-regala-tnc.
  $menus['menu-regala-tnc'] = array(
    'menu_name' => 'menu-regala-tnc',
    'title' => 'Regala TNC',
    'description' => 'Elements de la quarta columna del footer',
  );
  // Exported menu: menu-tauler.
  $menus['menu-tauler'] = array(
    'menu_name' => 'menu-tauler',
    'title' => 'Tauler',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Compra d\'abonaments');
  t('Compra d\'entrades');
  t('Crea i edita els elements de la primera columna del menú del peu');
  t('Elements de la quarta columna del footer');
  t('Elements de la segona columna del peu');
  t('Elements de la tercera columna del footer');
  t('Informació pràctica');
  t('Navigation');
  t('Regala TNC');
  t('Tauler');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');


  return $menus;
}
