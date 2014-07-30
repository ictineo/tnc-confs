<?php
/**
 * @file
 * tnc_cont.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tnc_cont_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "semantic_fields" && $api == "semantic_fields") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tnc_cont_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function tnc_cont_flag_default_flags() {
  $flags = array();
  // Exported flag: "Entorns &quot;a fons&quot;".
  $flags['afons_megamenu'] = array(
    'entity_type' => 'node',
    'title' => 'Entorns "a fons"',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
    ),
    'flag_short' => '"En cartell" al megamenú',
    'flag_long' => 'Entorn disponible per la secció en cartell del megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -14,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Carrousel gran".
  $flags['carrousel_gran'] = array(
    'entity_type' => 'node',
    'title' => 'Carrousel gran',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
      2 => 'fitxa_premsa',
    ),
    'flag_short' => 'Carrousel gran de portada',
    'flag_long' => 'Destaca al carrousel gran de portada',
    'flag_message' => '',
    'unflag_short' => 'Exclou del carrousel gran',
    'unflag_long' => 'Exclou del carrousel gran de portada',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -18,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Carrousel petit".
  $flags['carrousel_petit'] = array(
    'entity_type' => 'node',
    'title' => 'Carrousel petit',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
      2 => 'fitxa_premsa',
    ),
    'flag_short' => 'Carrousel petit de portada',
    'flag_long' => 'Destaca al carrousel petit de portada',
    'flag_message' => '',
    'unflag_short' => 'Exclou del carrousel petit',
    'unflag_long' => 'Exclou del carrousel petit de portada',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -17,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Espectacles en cartell disponibles al megamenú".
  $flags['disponible_megamenu'] = array(
    'entity_type' => 'node',
    'title' => 'Espectacles en cartell disponibles al megamenú',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_espectacle',
    ),
    'flag_short' => '"En cartell" al megamenú',
    'flag_long' => 'Contingut disponible per la secció espectacles del megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -16,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Dossier premsa megamenú".
  $flags['dossier_premsa_megamen_'] = array(
    'entity_type' => 'node',
    'title' => 'Dossier premsa megamenú',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_premsa',
    ),
    'flag_short' => 'Dossier de premsa al megamenú',
    'flag_long' => 'Dossier de premsa al megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Entorns disponibles al megamenú secció pròximament".
  $flags['entorn_proximament'] = array(
    'entity_type' => 'node',
    'title' => 'Entorns disponibles al megamenú secció pròximament',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
    ),
    'flag_short' => '"Pròximament" al megamenú',
    'flag_long' => 'Entorn disponible per la secció pròximament del megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -13,
    'show_in_links' => array(
      'rss' => 'rss',
      'full' => 0,
      'teaser' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Megamenú batxillerat".
  $flags['megamenu_batxillerat'] = array(
    'entity_type' => 'node',
    'title' => 'Megamenú batxillerat',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
    ),
    'flag_short' => 'Batxillerat al megamenú',
    'flag_long' => 'Batxillerat al megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Megamenú educació primària".
  $flags['megamenu_edu_primaria'] = array(
    'entity_type' => 'node',
    'title' => 'Megamenú educació primària',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
    ),
    'flag_short' => 'Educació primària al megamenú',
    'flag_long' => 'Educació primària al megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -11,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Megamenú educació secundària".
  $flags['megamenu_edu_secundaria'] = array(
    'entity_type' => 'node',
    'title' => 'Megamenú educació secundària',
    'global' => 0,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
    ),
    'flag_short' => 'Educació secundària al megamenú',
    'flag_long' => 'Educació secundària al megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -10,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Menú esquerre".
  $flags['men_esquerre'] = array(
    'entity_type' => 'node',
    'title' => 'Menú esquerre',
    'global' => 1,
    'types' => array(
      0 => 'megamenu',
    ),
    'flag_short' => 'Element del menú esquerre',
    'flag_long' => 'Element del menú esquerre',
    'flag_message' => '',
    'unflag_short' => 'Exclou del menú esquerre',
    'unflag_long' => 'Exclou del menú esquerre',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Menú superior".
  $flags['men_superior'] = array(
    'entity_type' => 'node',
    'title' => 'Menú superior',
    'global' => 1,
    'types' => array(
      0 => 'megamenu',
    ),
    'flag_short' => 'Element del menú superior',
    'flag_long' => 'Element del menú superior',
    'flag_message' => '',
    'unflag_short' => 'Exclou del menú superior',
    'unflag_long' => 'Exclou del menú superior',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Patrocinadors".
  $flags['patrocinadors'] = array(
    'entity_type' => 'node',
    'title' => 'Patrocinadors',
    'global' => 0,
    'types' => array(
      0 => 'patrocinador',
    ),
    'flag_short' => 'Patrocinadors al megamenú',
    'flag_long' => 'Patrocinadors al megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -12,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Espectacles disponibles al megamenú secció pròximament".
  $flags['proximament_megamenu'] = array(
    'entity_type' => 'node',
    'title' => 'Espectacles disponibles al megamenú secció pròximament',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_espectacle',
    ),
    'flag_short' => '"Pròximament" al megamenú',
    'flag_long' => 'Espectacle disponible per la secció pròximament del megamenú',
    'flag_message' => '',
    'unflag_short' => 'Exclou del megamenú ',
    'unflag_long' => 'Exclou del megamenú',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -15,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Slide portada".
  $flags['slide_portada'] = array(
    'entity_type' => 'node',
    'title' => 'Slide portada',
    'global' => 1,
    'types' => array(
      0 => 'fitxa_entorn',
      1 => 'fitxa_espectacle',
    ),
    'flag_short' => 'Capçalera de portada',
    'flag_long' => 'Destaca a la capçalera de la portada',
    'flag_message' => '',
    'unflag_short' => 'Exclou de la capçalera de la portada',
    'unflag_long' => 'Exclou de la capçalera de la portada',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -20,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Teletip portada".
  $flags['teletip_portada'] = array(
    'entity_type' => 'node',
    'title' => 'Teletip portada',
    'global' => 1,
    'types' => array(
      0 => 'teletip',
    ),
    'flag_short' => 'Publica el teletip a la portada',
    'flag_long' => 'Publica el teletip a la portada',
    'flag_message' => '',
    'unflag_short' => 'Exclou el teletip de la portada',
    'unflag_long' => 'Exclou el teletip de la portada',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -19,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'entityreference_view_widget' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tnc_cont',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

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
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patrocinador' => array(
      'name' => t('Patrocinador'),
      'base' => 'node_content',
      'description' => t('Afegeix un nou patrocinador'),
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
    'tauler' => array(
      'name' => t('Tauler'),
      'base' => 'node_content',
      'description' => t('Pàgines d\'administració'),
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
