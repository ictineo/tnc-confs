<?php
/**
 * @file
 * tnc_cont.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tnc_cont_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'avis_portada';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Avis portada';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Avis portada';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: publica_avis */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'publica_avis';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Camp: Text lliure */
  $handler->display->display_options['fields']['field_text_lliure']['id'] = 'field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['table'] = 'field_data_field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['field'] = 'field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['label'] = '';
  $handler->display->display_options['fields']['field_text_lliure']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_lliure']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_lliure']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avis' => 'avis',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Gestió avisos */
  $handler = $view->new_display('block', 'Gestió avisos', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_text_lliure' => 'field_text_lliure',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_text_lliure' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: publica_avis */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'publica_avis';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Camp: Text lliure */
  $handler->display->display_options['fields']['field_text_lliure']['id'] = 'field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['table'] = 'field_data_field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['field'] = 'field_text_lliure';
  $handler->display->display_options['fields']['field_text_lliure']['label'] = '';
  $handler->display->display_options['fields']['field_text_lliure']['element_type'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_lliure']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_text_lliure']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_text_lliure']['field_api_classes'] = TRUE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Publica l\'avís';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Destaca avisos';
  $export['avis_portada'] = $view;

  $view = new view();
  $view->name = 'blo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Bloc calendari';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bloc calendari';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '99';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'item_id' => 'item_id',
    'host_entity_id' => 'host_entity_id',
  );
  /* Relació: Field collection item: Entity with the Dia i hores (field_dia_hora) */
  $handler->display->display_options['relationships']['field_dia_hora_node']['id'] = 'field_dia_hora_node';
  $handler->display->display_options['relationships']['field_dia_hora_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dia_hora_node']['field'] = 'field_dia_hora_node';
  /* Camp: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Camp: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_hora_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Camp: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-wrapper host-entity-nid-[host_entity_id] current-entity-nid-!2"> 
[field_sala]
[title]
[field_hora_sessio]
[field_url_compra_reserva]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Criteri d'ordenació: Field collection item: Hora (field_hora_sessio) */
  $handler->display->display_options['sorts']['field_hora_sessio_value']['id'] = 'field_hora_sessio_value';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['field'] = 'field_hora_sessio_value';
  /* Filtre contextual: Data: Data (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_dia_sessio.field_dia_sessio_value' => 'field_data_field_dia_sessio.field_dia_sessio_value',
  );
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$current_node = menu_get_object();
$nids = array($current_node->nid);

if ($current_node->type == "fitxa_premsa") {
$viewau = views_get_view(\'vistes_auxiliars_premsa\');
$viewau->set_arguments(array($current_node->nid));
$viewau->execute();
$nids[] = $viewau->result[0]->nid;
$current_node = node_load($viewau->result[0]->nid);
}
if ($current_node->type == "fitxa_entorn") {
$viewau = views_get_view(\'vistes_auxiliars\');
$viewau->set_arguments(array($current_node->nid));
$viewau->execute();
$nids[] = $viewau->result[0]->nid;
$current_node = node_load($viewau->result[0]->nid);
}
if ($current_node->type == "fitxa_espectacle") {
  foreach ($current_node->field_entorn[LANGUAGE_NONE] as $i => $field) {
    if (!in_array($field[\'target_id\'], $nids)) {
      $nids[] = $field[\'target_id\'];
    }
  }
}
$nids_or = implode(\'+\', $nids);
return $nids_or;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filtre contextual: Field collection item: Dia (field_dia_sessio) */
  $handler->display->display_options['arguments']['field_dia_sessio_value']['id'] = 'field_dia_sessio_value';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['field'] = 'field_dia_sessio_value';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dia_sessio_value']['summary_options']['items_per_page'] = '25';

  /* Display: bloc calendari */
  $handler = $view->new_display('block', 'bloc calendari', 'block');
  $handler->display->display_options['block_description'] = 'bloc calendari';

  /* Display: bloc calendari premsa */
  $handler = $view->new_display('block', 'bloc calendari premsa', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Camp: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_hora_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Camp: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-wrapper host-entity-nid-[host_entity_id] current-entity-nid-!2"> 
[field_sala]
[title]
[field_hora_sessio]
[field_url_compra_reserva]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Camp: Controlador trencat/desaparegut */
  $handler->display->display_options['fields']['field_dia']['id'] = 'field_dia';
  $handler->display->display_options['fields']['field_dia']['table'] = 'field_data_field_dia';
  $handler->display->display_options['fields']['field_dia']['field'] = 'field_dia';
  $handler->display->display_options['fields']['field_dia']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_dia']['label'] = '';
  $handler->display->display_options['fields']['field_dia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dia']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'bloc calendari';
  $export['blo'] = $view;

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'host_entity_id' => 'host_entity_id',
    'item_id' => 'item_id',
  );
  $handler->display->display_options['row_options']['separator'] = '||';
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_sala';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_sala' => '9',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    34 => '#ffffff',
    21 => '#ffffff',
    20 => '#ffffff',
  );
  /* Relació: Field collection item: Entity with the Dia i hores (field_dia_hora) */
  $handler->display->display_options['relationships']['field_dia_hora_node']['id'] = 'field_dia_hora_node';
  $handler->display->display_options['relationships']['field_dia_hora_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dia_hora_node']['field'] = 'field_dia_hora_node';
  $handler->display->display_options['relationships']['field_dia_hora_node']['required'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Field collection item: Dia */
  $handler->display->display_options['fields']['field_dia_sessio']['id'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['field'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_dia_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dia_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_dia_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['delta_offset'] = '0';
  /* Camp: Camp: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Field collection item: Dia (field_dia_sessio) */
  $handler->display->display_options['sorts']['field_dia_sessio_value']['id'] = 'field_dia_sessio_value';
  $handler->display->display_options['sorts']['field_dia_sessio_value']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['sorts']['field_dia_sessio_value']['field'] = 'field_dia_sessio_value';
  /* Criteri d'ordenació: Field collection item: Hora (field_hora_sessio) */
  $handler->display->display_options['sorts']['field_hora_sessio_value']['id'] = 'field_hora_sessio_value';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['field'] = 'field_hora_sessio_value';
  /* Filtre contextual: Data: Data (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_dia_sessio.field_dia_sessio_value' => 'field_data_field_dia_sessio.field_dia_sessio_value',
  );

  /* Display: Calendari general */
  $handler = $view->new_display('page', 'Calendari general', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendari general';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Data: Data (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_dia_sessio.field_dia_sessio_value' => 'field_data_field_dia_sessio.field_dia_sessio_value',
  );
  $handler->display->display_options['path'] = 'calendari';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Calendari home */
  $handler = $view->new_display('block', 'Calendari home', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month_home';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dia_sessio' => 'field_dia_sessio',
  );
  $handler->display->display_options['row_options']['separator'] = '||';
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_sala';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_sala' => '9',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    34 => '#ffffff',
    21 => '#ffffff',
    20 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Field collection item: Dia */
  $handler->display->display_options['fields']['field_dia_sessio']['id'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['field'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_dia_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dia_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_dia_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Data: Data (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_dia_sessio.field_dia_sessio_value' => 'field_data_field_dia_sessio.field_dia_sessio_value',
  );

  /* Display: Calendari menu */
  $handler = $view->new_display('block', 'Calendari menu', 'block_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Tot el calendari';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month_menu';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '2';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dia_sessio' => 'field_dia_sessio',
  );
  $handler->display->display_options['row_options']['separator'] = '||';
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_sala';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_sala' => '9',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    34 => '#ffffff',
    21 => '#ffffff',
    20 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Field collection item: Dia */
  $handler->display->display_options['fields']['field_dia_sessio']['id'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['field'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_dia_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dia_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_dia_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['delta_offset'] = '0';
  /* Camp: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Data: Data (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_dia_sessio.field_dia_sessio_value' => 'field_data_field_dia_sessio.field_dia_sessio_value',
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'carrega_megamenu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'càrrega Megamenú ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'càrrega Megamenú ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: men_superior */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Menú superior';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'men_superior';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Camp: Contingut: Columna 1 */
  $handler->display->display_options['fields']['field_columna_1']['id'] = 'field_columna_1';
  $handler->display->display_options['fields']['field_columna_1']['table'] = 'field_data_field_columna_1';
  $handler->display->display_options['fields']['field_columna_1']['field'] = 'field_columna_1';
  $handler->display->display_options['fields']['field_columna_1']['label'] = '';
  $handler->display->display_options['fields']['field_columna_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columna_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_columna_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_columna_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_columna_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_columna_1']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_columna_1']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Columna 2 */
  $handler->display->display_options['fields']['field_columna_2']['id'] = 'field_columna_2';
  $handler->display->display_options['fields']['field_columna_2']['table'] = 'field_data_field_columna_2';
  $handler->display->display_options['fields']['field_columna_2']['field'] = 'field_columna_2';
  $handler->display->display_options['fields']['field_columna_2']['label'] = '';
  $handler->display->display_options['fields']['field_columna_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columna_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_columna_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_columna_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_columna_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_columna_2']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_columna_2']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Columna 3 */
  $handler->display->display_options['fields']['field_columna_3']['id'] = 'field_columna_3';
  $handler->display->display_options['fields']['field_columna_3']['table'] = 'field_data_field_columna_3';
  $handler->display->display_options['fields']['field_columna_3']['field'] = 'field_columna_3';
  $handler->display->display_options['fields']['field_columna_3']['label'] = '';
  $handler->display->display_options['fields']['field_columna_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columna_3']['element_type'] = '0';
  $handler->display->display_options['fields']['field_columna_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_columna_3']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_columna_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_columna_3']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_columna_3']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Columna 4 */
  $handler->display->display_options['fields']['field_columna_4']['id'] = 'field_columna_4';
  $handler->display->display_options['fields']['field_columna_4']['table'] = 'field_data_field_columna_4';
  $handler->display->display_options['fields']['field_columna_4']['field'] = 'field_columna_4';
  $handler->display->display_options['fields']['field_columna_4']['label'] = '';
  $handler->display->display_options['fields']['field_columna_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columna_4']['element_type'] = '0';
  $handler->display->display_options['fields']['field_columna_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_columna_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_columna_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_columna_4']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_columna_4']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4 class="mm-tit-[nid]">[title]</h4>
<div class="mm-content mm-[nid]">
[field_columna_1]
[field_columna_2]
[field_columna_3]
[field_columna_4]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'mm-slide-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'megamenu' => 'megamenu',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text info';
  $handler->display->display_options['header']['area']['content'] = 'Arrossega els elements amb la creueta de la dreta fins la posició desitjada i prem "desa".';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/items_menu';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Endreça ítems del menú';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Menu superior */
  $handler = $view->new_display('block', 'Menu superior', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Menú superior';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrega_megamenu:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Dragg Menu superior */
  $handler = $view->new_display('block', 'Dragg Menu superior', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elements Menú superior';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'ops' => 'ops',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Disponible al menú superior';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;

  /* Display: Menu esquerre */
  $handler = $view->new_display('block', 'Menu esquerre', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Menú esquerre';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: men_esquerre */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Menú superior';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'men_esquerre';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrega_megamenu:block_4';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Dragg Menu esquerre */
  $handler = $view->new_display('block', 'Dragg Menu esquerre', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elements Menú esquerre';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'ops' => 'ops',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: men_esquerre */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Menú superior';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'men_esquerre';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Menú esquerre';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrega_megamenu:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Flag menú */
  $handler = $view->new_display('page', 'Flag menú', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text info';
  $handler->display->display_options['header']['area']['content'] = 'Destaca els continguts de Megamenú al menú esquerre o al menú horitzontal.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: men_superior */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_sup';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'men_superior';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relació: Marcadors: men_esquerre */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'men_esquerre';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Destaca al megamenú superior';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Destaca al megamenú lateral';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/flag_items_menu';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Crea ítems del menú';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['carrega_megamenu'] = $view;

  $view = new view();
  $view->name = 'carrousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carrousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carrousel gran vslideshow';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: carrousel_gran */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carrousel_gran';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
    'fitxa_espectacle' => 'fitxa_espectacle',
  );

  /* Display: Dragg slide portada */
  $handler = $view->new_display('block', 'Dragg slide portada', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slide portada';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_autor' => 'field_autor',
    'field_entorn' => 'field_entorn',
    'field_rol_destacat' => 'field_rol_destacat',
    'field_sala' => 'field_sala',
    'field_sessions' => 'field_sessions',
    'field_url_compra_reserva' => 'field_url_compra_reserva',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_autor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entorn' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rol_destacat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sessions' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url_compra_reserva' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: slide_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'slide_portada';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Slide de portada';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;

  /* Display: Bloc teletips portada */
  $handler = $view->new_display('block', 'Bloc teletips portada', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teletips portada';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'after';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_imatge' => 'field_imatge',
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: teletip_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'teletip_portada';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Presentació */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_8';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teletip' => 'teletip',
  );

  /* Display: Dragg teletips portada */
  $handler = $view->new_display('block', 'Dragg teletips portada', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teletips portada';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge' => 'field_imatge',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: teletip_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'teletip_portada';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_6';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teletip' => 'teletip',
  );

  /* Display: Bloc carrousel gran vslideshow */
  $handler = $view->new_display('block', 'Bloc carrousel gran vslideshow', 'block_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Per defecte',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_autor' => 0,
    'field_entorn' => 0,
    'field_rol_destacat' => 0,
    'field_sala' => 0,
    'field_url_compra_reserva' => 0,
    'field_imatge_capcalera' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_autor' => 0,
    'field_entorn' => 0,
    'field_rol_destacat' => 0,
    'field_sala' => 0,
    'field_url_compra_reserva' => 0,
    'field_imatge_capcalera' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: carrousel_gran */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carrousel_gran';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Bloc slide portada */
  $handler = $view->new_display('block', 'Bloc slide portada', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slide portada';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: slide_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'slide_portada';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'titol';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = 'L\'entorn';
  $handler->display->display_options['fields']['field_entorn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entorn']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Subtítol */
  $handler->display->display_options['fields']['field_subtitol']['id'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['table'] = 'field_data_field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['field'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['label'] = '';
  $handler->display->display_options['fields']['field_subtitol']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitol']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mm-next-slide">&nbsp;</div>
<div class="field-content-2wrapper">
[field_imatge_capcalera]
<div class="tab tab-big">
[field_url_compra_reserva]
[field_sala]
[field_data]
<h4 class="titol">[title]</h4>
[field_subtitol]
[field_autor]
[field_rol_destacat]
<div class="grup_entorn">A l\'entorn</div>
[field_entorn]
</div>
<div class="tab tab-small">
[field_sala]
[field_data]
[title]
[field_autor]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Enllaç */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_6';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Dragg carrousel petit */
  $handler = $view->new_display('block', 'Dragg carrousel petit', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carrousel petit';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_autor' => 'field_autor',
    'field_entorn' => 'field_entorn',
    'field_rol_destacat' => 'field_rol_destacat',
    'field_sala' => 'field_sala',
    'field_sessions' => 'field_sessions',
    'field_url_compra_reserva' => 'field_url_compra_reserva',
    'draggableviews' => 'draggableviews',
    'draggableviews_1' => 'draggableviews_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_autor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entorn' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rol_destacat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sessions' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url_compra_reserva' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: carrousel_petit */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carrousel_petit';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Título';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Carrousel petit';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;

  /* Display: Bloc carrousel gran */
  $handler = $view->new_display('block', 'Bloc carrousel gran', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carrousel gran';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_entorn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tab">
[field_url_compra_reserva]
[field_sala]
[field_data]
<h3 class="titol">[title]</h3>
[field_autor]
[field_rol_destacat]
<div class="grup_entorn">L\'entorn</div>
[field_entorn]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge carrousel gran de portada */
  $handler->display->display_options['fields']['field_img_carrousel']['id'] = 'field_img_carrousel';
  $handler->display->display_options['fields']['field_img_carrousel']['table'] = 'field_data_field_img_carrousel';
  $handler->display->display_options['fields']['field_img_carrousel']['field'] = 'field_img_carrousel';
  $handler->display->display_options['fields']['field_img_carrousel']['label'] = '';
  $handler->display->display_options['fields']['field_img_carrousel']['element_type'] = '0';
  $handler->display->display_options['fields']['field_img_carrousel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img_carrousel']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_img_carrousel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_img_carrousel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img_carrousel']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_img_carrousel']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Dragg carrousel gran */
  $handler = $view->new_display('block', 'Dragg carrousel gran', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sala' => 'field_sala',
    'field_sessions' => 'field_sessions',
    'title' => 'title',
    'field_autor' => 'field_autor',
    'field_rol_destacat' => 'field_rol_destacat',
    'field_entorn' => 'field_entorn',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sessions' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_autor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rol_destacat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entorn' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Carrousel gran';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;

  /* Display: Bloc carrousel petit */
  $handler = $view->new_display('block', 'Bloc carrousel petit', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Carrousel petit';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['link_url'] = 'admin/structure/views/nojs/display/carrousel/block_3/link_display';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '4';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: carrousel_petit */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carrousel_petit';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Tipus d'entorn */
  $handler->display->display_options['fields']['field_tipus_entorn']['id'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['table'] = 'field_data_field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['field'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tipus_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_4';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Endreça continguts */
  $handler = $view->new_display('page', 'Endreça continguts', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Endreça continguts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>Arrossega els elements amb la creueta de la dreta fins la posició desitjada i prem "desa"</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/draggcarrousel';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Endreça continguts de portada';
  $handler->display->display_options['menu']['description'] = 'Ordena els diferents continguts disponibles a la portada';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Gestiona teletips portada */
  $handler = $view->new_display('block', 'Gestiona teletips portada', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teletips';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge' => 'field_imatge',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: teletip_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'teletip_portada';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Presentació */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Destaca a portada';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'carrousel:block_8';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teletip' => 'teletip',
  );
  $export['carrousel'] = $view;

  $view = new view();
  $view->name = 'eva_espectacle';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eva espectacle';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'view_mode' => 'entityreference_view_widget',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextual: Contingut: Entorn (field_entorn) */
  $handler->display->display_options['arguments']['field_entorn_target_id']['id'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['arguments']['field_entorn_target_id']['field'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entorn_target_id']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_entorn_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_entorn_target_id']['validate_options']['types'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
  );
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );

  /* Display: EVA caixa espectacle */
  $handler = $view->new_display('entity_view', 'EVA caixa espectacle', 'entity_view_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Referència d'entitat: Referenced Entity */
  $handler->display->display_options['relationships']['field_entorn_target_id']['id'] = 'field_entorn_target_id';
  $handler->display->display_options['relationships']['field_entorn_target_id']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['relationships']['field_entorn_target_id']['field'] = 'field_entorn_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['alter']['text'] = '[field_data] [field_data-value] > [field_data-value2]';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Global: Mostra */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'L\'entorn';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view']['element_label_class'] = 'col-title';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'eva_espectacle';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '!nid, !1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filtre contextual: Contingut: Entorn (field_entorn) */
  $handler->display->display_options['arguments']['field_entorn_target_id']['id'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['arguments']['field_entorn_target_id']['field'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entorn_target_id']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_entorn',
  );

  /* Display: EVA sessions */
  $handler = $view->new_display('entity_view', 'EVA sessions', 'entity_view_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'sessio',
  );

  /* Display: Pàgina */
  $handler = $view->new_display('page', 'Pàgina', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'entityreference_view_widget';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Referència d'entitat: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['id'] = 'reverse_field_entorn_node';
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['field'] = 'reverse_field_entorn_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_entorn_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
  );
  $handler->display->display_options['path'] = 'viewfieldview';

  /* Display: EVA espectacle per premsa */
  $handler = $view->new_display('entity_view', 'EVA espectacle per premsa', 'entity_view_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Referència d'entitat: Referenced Entity */
  $handler->display->display_options['relationships']['field_premsa_target_id']['id'] = 'field_premsa_target_id';
  $handler->display->display_options['relationships']['field_premsa_target_id']['table'] = 'field_data_field_premsa';
  $handler->display->display_options['relationships']['field_premsa_target_id']['field'] = 'field_premsa_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['alter']['text'] = '[field_data] [field_data-value] > [field_data-value2]';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Contingut: URL compra o reserva */
  $handler->display->display_options['fields']['field_url_compra_reserva']['id'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['table'] = 'field_data_field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field'] = 'field_url_compra_reserva';
  $handler->display->display_options['fields']['field_url_compra_reserva']['label'] = '';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_compra_reserva']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_compra_reserva']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_compra_reserva']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Global: Mostra */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'L\'entorn';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view']['element_label_class'] = 'col-title';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'eva_espectacle';
  $handler->display->display_options['fields']['view']['display'] = 'page_2';
  $handler->display->display_options['fields']['view']['arguments'] = '!nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_premsa_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_premsa',
  );

  /* Display: Pàgina_premsa */
  $handler = $view->new_display('page', 'Pàgina_premsa', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'entityreference_view_widget';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Referència d'entitat: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['id'] = 'reverse_field_entorn_node';
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_entorn_node']['field'] = 'reverse_field_entorn_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_entorn_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
  );
  $handler->display->display_options['path'] = 'viewfieldview';
  $export['eva_espectacle'] = $view;

  $view = new view();
  $view->name = 'eva_taxo_tarifes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Eva Taxo tarifes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_nom' => 'field_nom',
    'field_preu_1' => 'field_preu_1',
  );
  /* Relació: Terme de taxonomia: Contingut utilitza Tarifa */
  $handler->display->display_options['relationships']['reverse_field_tarifa_node']['id'] = 'reverse_field_tarifa_node';
  $handler->display->display_options['relationships']['reverse_field_tarifa_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tarifa_node']['field'] = 'reverse_field_tarifa_node';
  /* Relació: Terme de taxonomia: Tarifa (field_camps_tarifa) */
  $handler->display->display_options['relationships']['field_camps_tarifa_value']['id'] = 'field_camps_tarifa_value';
  $handler->display->display_options['relationships']['field_camps_tarifa_value']['table'] = 'field_data_field_camps_tarifa';
  $handler->display->display_options['relationships']['field_camps_tarifa_value']['field'] = 'field_camps_tarifa_value';
  $handler->display->display_options['relationships']['field_camps_tarifa_value']['delta'] = '-1';
  /* Camp: Field collection item: Nom */
  $handler->display->display_options['fields']['field_nom']['id'] = 'field_nom';
  $handler->display->display_options['fields']['field_nom']['table'] = 'field_data_field_nom';
  $handler->display->display_options['fields']['field_nom']['field'] = 'field_nom';
  $handler->display->display_options['fields']['field_nom']['relationship'] = 'field_camps_tarifa_value';
  $handler->display->display_options['fields']['field_nom']['label'] = '';
  $handler->display->display_options['fields']['field_nom']['element_type'] = '0';
  $handler->display->display_options['fields']['field_nom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nom']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_nom']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nom']['field_api_classes'] = TRUE;
  /* Camp: Field collection item: preu */
  $handler->display->display_options['fields']['field_preu_1']['id'] = 'field_preu_1';
  $handler->display->display_options['fields']['field_preu_1']['table'] = 'field_data_field_preu';
  $handler->display->display_options['fields']['field_preu_1']['field'] = 'field_preu';
  $handler->display->display_options['fields']['field_preu_1']['relationship'] = 'field_camps_tarifa_value';
  $handler->display->display_options['fields']['field_preu_1']['label'] = '';
  $handler->display->display_options['fields']['field_preu_1']['element_label_colon'] = FALSE;
  /* Camp: Field collection item: Descripció */
  $handler->display->display_options['fields']['field_descripcio_tarifa']['id'] = 'field_descripcio_tarifa';
  $handler->display->display_options['fields']['field_descripcio_tarifa']['table'] = 'field_data_field_descripcio_tarifa';
  $handler->display->display_options['fields']['field_descripcio_tarifa']['field'] = 'field_descripcio_tarifa';
  $handler->display->display_options['fields']['field_descripcio_tarifa']['relationship'] = 'field_camps_tarifa_value';
  $handler->display->display_options['fields']['field_descripcio_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_descripcio_tarifa']['element_label_colon'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_tarifa_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filtre contextual: Camp: Tarifa (field_tarifa) */
  $handler->display->display_options['arguments']['field_tarifa_tid']['id'] = 'field_tarifa_tid';
  $handler->display->display_options['arguments']['field_tarifa_tid']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['arguments']['field_tarifa_tid']['field'] = 'field_tarifa_tid';
  $handler->display->display_options['arguments']['field_tarifa_tid']['relationship'] = 'field_camps_tarifa_value';
  $handler->display->display_options['arguments']['field_tarifa_tid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_tarifa_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tarifa_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tarifa_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tarifa_tid']['summary_options']['items_per_page'] = '25';
  /* Criteri de filtratge: Vocabulari de la taxonomia: Nom-màquina */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tarifes' => 'tarifes',
  );

  /* Display: Eva_taxo_espectacles */
  $handler = $view->new_display('entity_view', 'Eva_taxo_espectacles', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Eva Taxo';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Text sense filtrar */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Preus';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Preus';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_entorn',
    1 => 'fitxa_espectacle',
  );
  $export['eva_taxo_tarifes'] = $view;

  $view = new view();
  $view->name = 'gestio_megamenu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestió megamenú';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestió Portada';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div> Selecciona els elements disponibles per aparèixer al megamenú<div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div> Selecciona els elements de la portada i els disponibles per aparèixer al megamenú</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/menu';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Gestiona la portada';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Bloc espectacles */
  $handler = $view->new_display('block', 'Bloc espectacles', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Espectacles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '15, 20, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'ops_1' => 'ops_1',
    'ops_2' => 'ops_2',
    'ops_3' => 'ops_3',
    'ops' => 'ops',
    'ops_4' => 'ops_4',
    'ops_5' => 'ops_5',
    'ops_6' => 'ops_6',
    'ops_7' => 'ops_7',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_7' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: disponible_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Cartell';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'disponible_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relació: Marcadors: slide_portada */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Slide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'slide_portada';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relació: Marcadors: carrousel_gran */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'c_gran';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'carrousel_gran';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Relació: Marcadors: carrousel_petit */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = 'c_petit';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'carrousel_petit';
  $handler->display->display_options['relationships']['flag_content_rel_3']['user_scope'] = 'any';
  /* Relació: Marcadors: proximament_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'proximament';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'proximament_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_edu_primaria */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'primària';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'megamenu_edu_primaria';
  $handler->display->display_options['relationships']['flag_content_rel_5']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_edu_secundaria */
  $handler->display->display_options['relationships']['flag_content_rel_6']['id'] = 'flag_content_rel_6';
  $handler->display->display_options['relationships']['flag_content_rel_6']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_6']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_6']['label'] = 'secundària';
  $handler->display->display_options['relationships']['flag_content_rel_6']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_6']['flag'] = 'megamenu_edu_secundaria';
  $handler->display->display_options['relationships']['flag_content_rel_6']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_batxillerat */
  $handler->display->display_options['relationships']['flag_content_rel_7']['id'] = 'flag_content_rel_7';
  $handler->display->display_options['relationships']['flag_content_rel_7']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_7']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_7']['label'] = 'batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel_7']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_7']['flag'] = 'megamenu_batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel_7']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Destaca al slide de portada';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Destaca al carrousel gran de portada';
  $handler->display->display_options['fields']['ops_2']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_3']['id'] = 'ops_3';
  $handler->display->display_options['fields']['ops_3']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_3']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['ops_3']['label'] = 'Destaca al carrousel petit de portada';
  $handler->display->display_options['fields']['ops_3']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Espectacle "en cartell" al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_4']['id'] = 'ops_4';
  $handler->display->display_options['fields']['ops_4']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_4']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['ops_4']['label'] = 'Espectacle "pròximament" al megamenú';
  $handler->display->display_options['fields']['ops_4']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_5']['id'] = 'ops_5';
  $handler->display->display_options['fields']['ops_5']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_5']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_5']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['fields']['ops_5']['label'] = 'Educació primària al megamenú';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_6']['id'] = 'ops_6';
  $handler->display->display_options['fields']['ops_6']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_6']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_6']['relationship'] = 'flag_content_rel_6';
  $handler->display->display_options['fields']['ops_6']['label'] = 'Educació secundària al megamenú';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_7']['id'] = 'ops_7';
  $handler->display->display_options['fields']['ops_7']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_7']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_7']['relationship'] = 'flag_content_rel_7';
  $handler->display->display_options['fields']['ops_7']['label'] = 'Batxillerat al megamenú';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );

  /* Display: Bloc entorn */
  $handler = $view->new_display('block', 'Bloc entorn', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entorn';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '15, 20, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: slide_portada */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Slide';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'slide_portada';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relació: Marcadors: carrousel_gran */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'c_gran';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'carrousel_gran';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Relació: Marcadors: carrousel_petit */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = 'c_petit';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'carrousel_petit';
  $handler->display->display_options['relationships']['flag_content_rel_3']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_edu_primaria */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'primària';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'megamenu_edu_primaria';
  $handler->display->display_options['relationships']['flag_content_rel_5']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_edu_secundaria */
  $handler->display->display_options['relationships']['flag_content_rel_6']['id'] = 'flag_content_rel_6';
  $handler->display->display_options['relationships']['flag_content_rel_6']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_6']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_6']['label'] = 'secundària';
  $handler->display->display_options['relationships']['flag_content_rel_6']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_6']['flag'] = 'megamenu_edu_secundaria';
  $handler->display->display_options['relationships']['flag_content_rel_6']['user_scope'] = 'any';
  /* Relació: Marcadors: megamenu_batxillerat */
  $handler->display->display_options['relationships']['flag_content_rel_7']['id'] = 'flag_content_rel_7';
  $handler->display->display_options['relationships']['flag_content_rel_7']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_7']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_7']['label'] = 'batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel_7']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_7']['flag'] = 'megamenu_batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel_7']['user_scope'] = 'any';
  /* Relació: Marcadors: afons_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'aFons';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'afons_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relació: Marcadors: entorn_proximament */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'entorn_prox';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'entorn_proximament';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Destaca al slide de portada';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Destaca al carrousel gran de portada';
  $handler->display->display_options['fields']['ops_2']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_3']['id'] = 'ops_3';
  $handler->display->display_options['fields']['ops_3']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_3']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['ops_3']['label'] = 'Destaca al carrousel petit de portada';
  $handler->display->display_options['fields']['ops_3']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Entorn A fons';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_4']['id'] = 'ops_4';
  $handler->display->display_options['fields']['ops_4']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_4']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['ops_4']['label'] = 'Entorn pròximament';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_5']['id'] = 'ops_5';
  $handler->display->display_options['fields']['ops_5']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_5']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_5']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['fields']['ops_5']['label'] = 'Educació primària al megamenú';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_6']['id'] = 'ops_6';
  $handler->display->display_options['fields']['ops_6']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_6']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_6']['relationship'] = 'flag_content_rel_6';
  $handler->display->display_options['fields']['ops_6']['label'] = 'Educació secundària al megamenú';
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops_7']['id'] = 'ops_7';
  $handler->display->display_options['fields']['ops_7']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_7']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_7']['relationship'] = 'flag_content_rel_7';
  $handler->display->display_options['fields']['ops_7']['label'] = 'Batxillerat al megamenú';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
  );

  /* Display: Bloc premsa */
  $handler = $view->new_display('block', 'Bloc premsa', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Premsa';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '15, 20, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: dossier_premsa_megamen_ */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'premsa';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'dossier_premsa_megamen_';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['ops']['label'] = 'Premsa al megamenú';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_premsa' => 'fitxa_premsa',
  );
  $export['gestio_megamenu'] = $view;

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Camp: Field collection item: Dia */
  $handler->display->display_options['fields']['field_dia_sessio']['id'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['field'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_dia_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dia_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dia_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['settings'] = array(
    'format_type' => 'curt',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_dia_sessio']['field_api_classes'] = TRUE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_hora_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['alter']['text'] = 'Sessió a les [field_hora_sessio]';
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Camp: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['text'] = '([field_tarifa])';
  $handler->display->display_options['fields']['field_tarifa']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tarifa']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_hora_sessio] [field_tarifa]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $export['sessions'] = $view;

  $view = new view();
  $view->name = 'sessions_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'sessions node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dia_sessio' => 'field_dia_sessio',
    'field_tarifa' => 'field_tarifa',
    'field_hora_sessio' => 'field_hora_sessio',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Capçalera: Global: Text sense filtrar */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Sessions';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Pròximes Sessions';
  /* Relació: Field collection item: Entity with the Dia i hores (field_dia_hora) */
  $handler->display->display_options['relationships']['field_dia_hora_node']['id'] = 'field_dia_hora_node';
  $handler->display->display_options['relationships']['field_dia_hora_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dia_hora_node']['field'] = 'field_dia_hora_node';
  /* Camp: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Camp: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  /* Camp: Field collection item: Dia */
  $handler->display->display_options['fields']['field_dia_sessio']['id'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['field'] = 'field_dia_sessio';
  $handler->display->display_options['fields']['field_dia_sessio']['label'] = '';
  $handler->display->display_options['fields']['field_dia_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dia_sessio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dia_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dia_sessio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dia_sessio']['settings'] = array(
    'format_type' => 'curt',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_dia_sessio']['field_api_classes'] = TRUE;
  /* Camp: Camp: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['text'] = '([field_tarifa])';
  $handler->display->display_options['fields']['field_tarifa']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tarifa']['field_api_classes'] = TRUE;
  /* Camp: Field collection item: Hora */
  $handler->display->display_options['fields']['field_hora_sessio']['id'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['field'] = 'field_hora_sessio';
  $handler->display->display_options['fields']['field_hora_sessio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hora_sessio']['alter']['text'] = 'Sessió a les [field_hora_sessio]';
  $handler->display->display_options['fields']['field_hora_sessio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hora_sessio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hora_sessio']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_hora_sessio] [field_tarifa]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Criteri d'ordenació: Field collection item: Dia (field_dia_sessio) */
  $handler->display->display_options['sorts']['field_dia_sessio_value']['id'] = 'field_dia_sessio_value';
  $handler->display->display_options['sorts']['field_dia_sessio_value']['table'] = 'field_data_field_dia_sessio';
  $handler->display->display_options['sorts']['field_dia_sessio_value']['field'] = 'field_dia_sessio_value';
  /* Criteri d'ordenació: Field collection item: Hora (field_hora_sessio) */
  $handler->display->display_options['sorts']['field_hora_sessio_value']['id'] = 'field_hora_sessio_value';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['table'] = 'field_data_field_hora_sessio';
  $handler->display->display_options['sorts']['field_hora_sessio_value']['field'] = 'field_hora_sessio_value';
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: sessions */
  $handler = $view->new_display('entity_view', 'sessions', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_entorn',
    1 => 'fitxa_espectacle',
  );

  /* Display: Audiodescripció */
  $handler = $view->new_display('entity_view', 'Audiodescripció', 'entity_view_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Text sense filtrar */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Espectacle amb audiodescripció';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Espectacle amb audiodescripció per a persones cegues';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_dia_hora_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Field collection item: Audiodescripció (field_audiodescripcio) */
  $handler->display->display_options['filters']['field_audiodescripcio_value']['id'] = 'field_audiodescripcio_value';
  $handler->display->display_options['filters']['field_audiodescripcio_value']['table'] = 'field_data_field_audiodescripcio';
  $handler->display->display_options['filters']['field_audiodescripcio_value']['field'] = 'field_audiodescripcio_value';
  $handler->display->display_options['filters']['field_audiodescripcio_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_entorn',
    1 => 'fitxa_espectacle',
  );
  $export['sessions_node'] = $view;

  $view = new view();
  $view->name = 'temporada';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Temporada';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Temporada';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => 'adaptive',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Rol destacat */
  $handler->display->display_options['fields']['field_rol_destacat']['id'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['table'] = 'field_data_field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['field'] = 'field_rol_destacat';
  $handler->display->display_options['fields']['field_rol_destacat']['label'] = '';
  $handler->display->display_options['fields']['field_rol_destacat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rol_destacat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rol_destacat']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grup_entorn">A l\'entorn</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Entorn */
  $handler->display->display_options['fields']['field_entorn']['id'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['fields']['field_entorn']['field'] = 'field_entorn';
  $handler->display->display_options['fields']['field_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_entorn']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entorn']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_entorn']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_entorn']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entorn']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="bloc">
<div class="espectacle">
[field_data]
[field_sala]
[field_imatge_capcalera]
<div class="view-field-title">[title]</div>
[field_autor]
[field_rol_destacat]
</div>
<div class="entorn">
[nothing]
[field_entorn] 
</div></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri d'ordenació: Contingut: Data - data d'inici (field_data) */
  $handler->display->display_options['sorts']['field_data_value']['id'] = 'field_data_value';
  $handler->display->display_options['sorts']['field_data_value']['table'] = 'field_data_field_data';
  $handler->display->display_options['sorts']['field_data_value']['field'] = 'field_data_value';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_entorn' => 'fitxa_entorn',
    'fitxa_espectacle' => 'fitxa_espectacle',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $handler->display->display_options['path'] = 'temporada';
  $export['temporada'] = $view;

  $view = new view();
  $view->name = 'tipus_patrocinadors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tipus patrocinadors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'patrocinadors ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: patrocinadors */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'patrocinadors';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors A */
  $handler = $view->new_display('block', 'Patrocinadors A', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criteri de filtratge: Contingut: Té terme de taxonomia */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors B */
  $handler = $view->new_display('block', 'Patrocinadors B', 'block_2');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors C */
  $handler = $view->new_display('block', 'Patrocinadors C', 'block_3');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_6';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors D */
  $handler = $view->new_display('block', 'Patrocinadors D', 'block_4');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_7';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors A */
  $handler = $view->new_display('block', 'Dragg Patrocinadors A', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors A';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;

  /* Display: Dragg Patrocinadors B */
  $handler = $view->new_display('block', 'Dragg Patrocinadors B', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors B';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors C */
  $handler = $view->new_display('block', 'Dragg Patrocinadors C', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors C';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors D */
  $handler = $view->new_display('block', 'Dragg Patrocinadors D', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors D';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';
  $export['tipus_patrocinadors'] = $view;

  $view = new view();
  $view->name = 'tipus_patrocinadors_b';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tipus patrocinadors_B';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'patrocinadors ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: patrocinadors */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'patrocinadors';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors B */
  $handler = $view->new_display('block', 'Patrocinadors B', 'block_2');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors B */
  $handler = $view->new_display('block', 'Dragg Patrocinadors B', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors B';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';
  $export['tipus_patrocinadors_b'] = $view;

  $view = new view();
  $view->name = 'tipus_patrocinadors_c';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tipus patrocinadors_C';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'patrocinadors ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: patrocinadors */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'patrocinadors';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors C */
  $handler = $view->new_display('block', 'Patrocinadors C', 'block_3');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_6';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors C */
  $handler = $view->new_display('block', 'Dragg Patrocinadors C', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors C';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';
  $export['tipus_patrocinadors_c'] = $view;

  $view = new view();
  $view->name = 'tipus_patrocinadors_d';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tipus patrocinadors_D';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'patrocinadors ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: patrocinadors */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'patrocinadors';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '7',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Patrocinadors D */
  $handler = $view->new_display('block', 'Patrocinadors D', 'block_4');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'tipus_patrocinadors:block_7';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';

  /* Display: Dragg Patrocinadors D */
  $handler = $view->new_display('block', 'Dragg Patrocinadors D', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dragg patrocinadors D';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_link' => 'field_link',
    'field_imatge' => 'field_imatge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_imatge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['label'] = '';
  $handler->display->display_options['fields']['field_imatge']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imatge']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_imatge']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge']['field_api_classes'] = TRUE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'patrocinador' => 'patrocinador',
  );
  /* Criteri de filtratge: Contingut: Tipus de patrocinador (field_tipus_patrocinador) */
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['id'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['table'] = 'field_data_field_tipus_patrocinador';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['field'] = 'field_tipus_patrocinador_tid';
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tipus_patrocinador_tid']['vocabulary'] = 'patrocinadors';
  $export['tipus_patrocinadors_d'] = $view;

  $view = new view();
  $view->name = 'view_megamenu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Megamenú';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Megamenú';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relació: Marcadors: disponible_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'disponible_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Subtítol */
  $handler->display->display_options['fields']['field_subtitol']['id'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['table'] = 'field_data_field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['field'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['label'] = '';
  $handler->display->display_options['fields']['field_subtitol']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextual: Camp: Temporada (field_temporada) */
  $handler->display->display_options['arguments']['field_temporada_tid']['id'] = 'field_temporada_tid';
  $handler->display->display_options['arguments']['field_temporada_tid']['table'] = 'field_data_field_temporada';
  $handler->display->display_options['arguments']['field_temporada_tid']['field'] = 'field_temporada_tid';
  $handler->display->display_options['arguments']['field_temporada_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_temporada_tid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_temporada_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_temporada_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_temporada_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_temporada_tid']['summary_options']['items_per_page'] = '25';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Arrossega els elements amb la creueta de la dreta fins la posició desitjada i prem "desa"
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/draggmenu';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Endreça els elements del megamenú';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Espectacles en cartell */
  $handler = $view->new_display('block', 'Espectacles en cartell', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'En cartell';
  $handler->display->display_options['header']['area']['content'] = 'En cartell';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: disponible_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'disponible_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relació: Camp: Temporada (field_temporada) */
  $handler->display->display_options['relationships']['field_temporada_tid']['id'] = 'field_temporada_tid';
  $handler->display->display_options['relationships']['field_temporada_tid']['table'] = 'field_data_field_temporada';
  $handler->display->display_options['relationships']['field_temporada_tid']['field'] = 'field_temporada_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Imatge_capçalera */
  $handler->display->display_options['fields']['field_imatge_capcalera']['id'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['table'] = 'field_data_field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['field'] = 'field_imatge_capcalera';
  $handler->display->display_options['fields']['field_imatge_capcalera']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_capcalera']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_capcalera']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_capcalera']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_capcalera']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'titol';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Subtítol */
  $handler->display->display_options['fields']['field_subtitol']['id'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['table'] = 'field_data_field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['field'] = 'field_subtitol';
  $handler->display->display_options['fields']['field_subtitol']['label'] = '';
  $handler->display->display_options['fields']['field_subtitol']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitol']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitol']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subtitol']['field_api_classes'] = TRUE;
  /* Camp: Global: Text personalitzat */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nested">[field_sala] <div class="field titol">[title]</div> [field_subtitol]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_10';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextual: Terme de taxonomia: Nom */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_temporada_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $handler->display->display_options['block_description'] = 'En cartell';

  /* Display: Espectacles pròximament */
  $handler = $view->new_display('block', 'Espectacles pròximament', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_data' => 'field_data',
    'field_sala' => 'field_sala',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Pròximament';
  $handler->display->display_options['header']['area']['content'] = 'Pròximament';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: proximament_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'proximament_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Sala */
  $handler->display->display_options['fields']['field_sala']['id'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['table'] = 'field_data_field_sala';
  $handler->display->display_options['fields']['field_sala']['field'] = 'field_sala';
  $handler->display->display_options['fields']['field_sala']['label'] = '';
  $handler->display->display_options['fields']['field_sala']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sala']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sala']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sala']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_11';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Pròximament';

  /* Display: Entorn A fons */
  $handler = $view->new_display('block', 'Entorn A fons', 'block_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'A fons';
  $handler->display->display_options['header']['area']['content'] = 'A fons';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: afons_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'afons_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Contingut: Tipus d'entorn */
  $handler->display->display_options['fields']['field_tipus_entorn']['id'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['table'] = 'field_data_field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['field'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tipus_entorn']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_12';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'A fons';

  /* Display: Entorn proximament */
  $handler = $view->new_display('block', 'Entorn proximament', 'block_4');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Pròximament';
  $handler->display->display_options['header']['area']['content'] = 'Pròximament';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: entorn_proximament */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'entorn_proximament';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'mig',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Tipus d'entorn */
  $handler->display->display_options['fields']['field_tipus_entorn']['id'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['table'] = 'field_data_field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['field'] = 'field_tipus_entorn';
  $handler->display->display_options['fields']['field_tipus_entorn']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_entorn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_entorn']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tipus_entorn']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_13';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Pròximament';

  /* Display: Dossiers premsa */
  $handler = $view->new_display('block', 'Dossiers premsa', 'block_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: dossier_premsa_megamen_ */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'dossier_premsa';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'dossier_premsa_megamen_';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_14';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Primària */
  $handler = $view->new_display('block', 'Primària', 'block_6');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Obres recomanades';
  $handler->display->display_options['header']['area']['content'] = 'Obres recomanades';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_edu_primaria */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'primària';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_edu_primaria';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_15';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Secundària */
  $handler = $view->new_display('block', 'Secundària', 'block_7');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'obres recomanades';
  $handler->display->display_options['header']['area']['content'] = 'Obres recomanades';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_edu_secundaria */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'secundària';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_edu_secundaria';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_16';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Batxillerat */
  $handler = $view->new_display('block', 'Batxillerat', 'block_8');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Capçalera: Global: Àrea de text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'obres recomanades';
  $handler->display->display_options['header']['area']['content'] = 'Obres recomanades';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_batxillerat */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'view_megamenu:block_17';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Patrocinadors */
  $handler = $view->new_display('block', 'Patrocinadors', 'block_9');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Global: Mostra */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'A';
  $handler->display->display_options['fields']['view']['view'] = 'tipus_patrocinadors';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Dragg espectacles cartell */
  $handler = $view->new_display('block', 'Dragg espectacles cartell', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Espectacles en cartell disponibles al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge_capcalera' => 'field_imatge_capcalera',
    'field_sala' => 'field_sala',
    'title' => 'title',
    'field_subtitol' => 'field_subtitol',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge_capcalera' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: disponible_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'disponible_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relació: Camp: Temporada (field_temporada) */
  $handler->display->display_options['relationships']['field_temporada_tid']['id'] = 'field_temporada_tid';
  $handler->display->display_options['relationships']['field_temporada_tid']['table'] = 'field_data_field_temporada';
  $handler->display->display_options['relationships']['field_temporada_tid']['field'] = 'field_temporada_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Camp: Terme de taxonomia: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_temporada_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Temporada';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Espectacle "en cartell" al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );

  /* Display: Dragg espectacles pròximament */
  $handler = $view->new_display('block', 'Dragg espectacles pròximament', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Espectacles disponibles al megamenú secció pròximament';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: proximament_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'proximament_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Espectacle "pròximament" al megamenú';
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criteri d'ordenació: Draggableviews: Pes */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg Entorn A fons */
  $handler = $view->new_display('block', 'Dragg Entorn A fons', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entorns "a fons" disponibles al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_data' => 'field_data',
    'field_tipus_entorn' => 'field_tipus_entorn',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tipus_entorn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: afons_megamenu */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'afons_megamenu';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Entorn A fons';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg Entorn proximament */
  $handler = $view->new_display('block', 'Dragg Entorn proximament', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entorns disponibles al megamenú secció pròximament';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dia' => 'field_dia',
    'field_dia_hora' => 'field_dia_hora',
    'field_tipus_entorn' => 'field_tipus_entorn',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dia_hora' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tipus_entorn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: entorn_proximament */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'entorn_proximament';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Entorn "pròximament" al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg dossiers premsa */
  $handler = $view->new_display('block', 'Dragg dossiers premsa', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contingut disponible a Dossier de premsa al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge_capcalera' => 'field_imatge_capcalera',
    'field_sala' => 'field_sala',
    'title' => 'title',
    'field_subtitol' => 'field_subtitol',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge_capcalera' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: dossier_premsa_megamen_ */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'dossier_premsa';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'dossier_premsa_megamen_';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Secció Dossier de premsa al megamenú';
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg primària */
  $handler = $view->new_display('block', 'Dragg primària', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contingut disponible a Primària al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge_capcalera' => 'field_imatge_capcalera',
    'field_sala' => 'field_sala',
    'title' => 'title',
    'field_subtitol' => 'field_subtitol',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge_capcalera' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_edu_primaria */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'primària';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_edu_primaria';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Educació primària al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg secundària */
  $handler = $view->new_display('block', 'Dragg secundària', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contingut disponible a Secundària al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge_capcalera' => 'field_imatge_capcalera',
    'field_sala' => 'field_sala',
    'title' => 'title',
    'field_subtitol' => 'field_subtitol',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge_capcalera' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_edu_secundaria */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'secundària';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_edu_secundaria';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Educació secundària al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Dragg batxillerat */
  $handler = $view->new_display('block', 'Dragg batxillerat', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contingut disponible a Batxillerat al megamenú';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_imatge_capcalera' => 'field_imatge_capcalera',
    'field_sala' => 'field_sala',
    'title' => 'title',
    'field_subtitol' => 'field_subtitol',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_imatge_capcalera' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sala' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relació: Marcadors: megamenu_batxillerat */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'megamenu_batxillerat';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Camp: Contingut: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Camp: Marcadors: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Batxillerat al megamenú';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Camp: Draggableviews: Contingut */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['view_megamenu'] = $view;

  $view = new view();
  $view->name = 'vistes_auxiliars';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vistes auxiliars';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextual: Contingut: Entorn (field_entorn) */
  $handler->display->display_options['arguments']['field_entorn_target_id']['id'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['table'] = 'field_data_field_entorn';
  $handler->display->display_options['arguments']['field_entorn_target_id']['field'] = 'field_entorn_target_id';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entorn_target_id']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_entorn_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entorn_target_id']['summary_options']['items_per_page'] = '25';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $export['vistes_auxiliars'] = $view;

  $view = new view();
  $view->name = 'vistes_auxiliars_premsa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vistes auxiliars premsa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Camp: Contingut: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextual: Contingut: Premsa (field_premsa) */
  $handler->display->display_options['arguments']['field_premsa_target_id']['id'] = 'field_premsa_target_id';
  $handler->display->display_options['arguments']['field_premsa_target_id']['table'] = 'field_data_field_premsa';
  $handler->display->display_options['arguments']['field_premsa_target_id']['field'] = 'field_premsa_target_id';
  $handler->display->display_options['arguments']['field_premsa_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_premsa_target_id']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_premsa_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_premsa_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_premsa_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_premsa_target_id']['summary_options']['items_per_page'] = '25';
  /* Criteri de filtratge: Contingut: Publicat */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criteri de filtratge: Contingut: Tipus */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fitxa_espectacle' => 'fitxa_espectacle',
  );
  $export['vistes_auxiliars_premsa'] = $view;

  return $export;
}
