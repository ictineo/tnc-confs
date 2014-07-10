<?php
/**
 * @file
 * tnc_cont.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function tnc_cont_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'data_br';
  $formatter->label = 'Data dia hora br';
  $formatter->description = 'Introducció de salt de línia entre el dia i l\'hora';
  $formatter->mode = 'token';
  $formatter->field_types = 'datetime';
  $formatter->code = '<div class="data_wr">
    <div class="dia"> [node:field-data:value:amida:d/m/Y]</div>
    <div class="hora"> [node:field-data:value:amida:h\\h /m\\m\\i\\n]</div>
</div>';
  $formatter->fapi = '';
  $export['data_br'] = $formatter;

  return $export;
}
