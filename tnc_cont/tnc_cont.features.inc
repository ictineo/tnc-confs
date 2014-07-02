<?php
/**
 * @file
 * tnc_cont.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tnc_cont_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tnc_cont_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Àudio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'documentacio' => array(
      'name' => t('Documentació'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'fitxa_entorn' => array(
      'name' => t('Fitxa Entorn'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'fitxa_espectacle' => array(
      'name' => t('Fitxa Espectacle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'fitxa_premsa' => array(
      'name' => t('Fitxa Premsa'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'imatge' => array(
      'name' => t('Imatge'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'megamenu' => array(
      'name' => t('Megamenú'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Pàgina estàtica'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'projecte_artistic' => array(
      'name' => t('Projecte artístic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
    'teletip' => array(
      'name' => t('Teletip'),
      'base' => 'node_content',
      'description' => t('Crea teletips que es visualitzaran a la portada de la web, per sota de la capçalera i el calendari.'),
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => t('El camp títol no es veurà a la web, és només per ús intern.'),
    ),
    'video' => array(
      'name' => t('Vídeo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
