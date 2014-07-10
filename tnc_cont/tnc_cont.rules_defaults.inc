<?php
/**
 * @file
 * tnc_cont.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tnc_cont_default_rules_configuration() {
  $items = array();
  $items['rules_compra'] = entity_import('rules_config', '{ "rules_compra" : {
      "LABEL" : "Compra",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--fitxa_espectacle" : { "bundle" : "fitxa_espectacle" },
        "node_update--fitxa_espectacle" : { "bundle" : "fitxa_espectacle" },
        "node_insert--fitxa_entorn" : { "bundle" : "fitxa_entorn" },
        "node_update--fitxa_entorn" : { "bundle" : "fitxa_entorn" }
      },
      "IF" : [
        { "AND" : [
            { "NOT data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "30" } },
            { "NOT data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "31" } },
            { "NOT data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "37" } }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-url-compra-reserva:title" ],
            "value" : "Comprar"
          }
        }
      ]
    }
  }');
  $items['rules_compra_o_reserva'] = entity_import('rules_config', '{ "rules_compra_o_reserva" : {
      "LABEL" : "Compra o reserva",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--fitxa_espectacle" : { "bundle" : "fitxa_espectacle" },
        "node_update--fitxa_espectacle" : { "bundle" : "fitxa_espectacle" },
        "node_insert--fitxa_entorn" : { "bundle" : "fitxa_entorn" },
        "node_update--fitxa_entorn" : { "bundle" : "fitxa_entorn" }
      },
      "IF" : [
        { "OR" : [
            { "data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "30" } },
            { "data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "31" } },
            { "data_is" : { "data" : [ "node:field-tarifa:tid" ], "value" : "37" } }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-url-compra-reserva:title" ],
            "value" : "Reservar"
          }
        }
      ]
    }
  }');
  return $items;
}
