<?php
/**
 * @file
 * tnc_ui.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tnc_ui_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessio_premsa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessió premsa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roda de premsa';
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
  /* Capçalera: Global: Text sense filtrar */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Roda de premsa';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Roda de premsa';
  /* Camp: Contingut: Entrada */
  $handler->display->display_options['fields']['field_entrada']['id'] = 'field_entrada';
  $handler->display->display_options['fields']['field_entrada']['table'] = 'field_data_field_entrada';
  $handler->display->display_options['fields']['field_entrada']['field'] = 'field_entrada';
  $handler->display->display_options['fields']['field_entrada']['label'] = '';
  $handler->display->display_options['fields']['field_entrada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_entrada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entrada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_entrada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entrada']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Dia */
  $handler->display->display_options['fields']['field_dia']['id'] = 'field_dia';
  $handler->display->display_options['fields']['field_dia']['table'] = 'field_data_field_dia';
  $handler->display->display_options['fields']['field_dia']['field'] = 'field_dia';
  $handler->display->display_options['fields']['field_dia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dia']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dia']['field_api_classes'] = TRUE;
  /* Camp: Contingut: Hora */
  $handler->display->display_options['fields']['field_hora']['id'] = 'field_hora';
  $handler->display->display_options['fields']['field_hora']['table'] = 'field_data_field_hora';
  $handler->display->display_options['fields']['field_hora']['field'] = 'field_hora';
  $handler->display->display_options['fields']['field_hora']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hora']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hora']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hora']['field_api_classes'] = TRUE;
  /* Criteri d'ordenació: Contingut: Data de publicació */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextual: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'fitxa_premsa' => 'fitxa_premsa',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'fitxa_premsa',
  );
  $export['sessio_premsa'] = $view;

  return $export;
}
