<?php
/**
 * @file
 * tnc_ui.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function tnc_ui_default_roles_permissions() {
  $roles = array();

  // Exported role: Empresa
  $roles['Empresa'] = array(
    'name' => 'Empresa',
    'weight' => 6,
    'permissions' => array(
      'access dashboard' => TRUE,
      'access toolbar' => TRUE,
      'translate content' => TRUE,
      'use text format filtered_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: Ensenyament
  $roles['Ensenyament'] = array(
    'name' => 'Ensenyament',
    'weight' => 5,
    'permissions' => array(
      'access dashboard' => TRUE,
      'access toolbar' => TRUE,
      'translate content' => TRUE,
      'use text format filtered_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: Premsa
  $roles['Premsa'] = array(
    'name' => 'Premsa',
    'weight' => 4,
    'permissions' => array(
      'access dashboard' => TRUE,
      'access toolbar' => TRUE,
      'create audio content' => TRUE,
      'create documentacio content' => TRUE,
      'create fitxa_premsa content' => TRUE,
      'create imatge content' => TRUE,
      'create teletip content' => TRUE,
      'create video content' => TRUE,
      'edit own audio content' => TRUE,
      'edit own documentacio content' => TRUE,
      'edit own fitxa_premsa content' => TRUE,
      'edit own imatge content' => TRUE,
      'edit own teletip content' => TRUE,
      'edit own video content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 10' => TRUE,
      'edit terms in 11' => TRUE,
      'edit terms in 4' => TRUE,
      'edit terms in 5' => TRUE,
      'edit terms in 7' => TRUE,
      'edit terms in 9' => TRUE,
      'translate content' => TRUE,
      'use text format filtered_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: Projecte artistic
  $roles['Projecte artistic'] = array(
    'name' => 'Projecte artistic',
    'weight' => 7,
    'permissions' => array(
      'access dashboard' => TRUE,
      'access toolbar' => TRUE,
      'create projecte_artistic content' => TRUE,
      'edit own projecte_artistic content' => TRUE,
      'translate content' => TRUE,
      'use text format filtered_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: TNC
  $roles['TNC'] = array(
    'name' => 'TNC',
    'weight' => 3,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access content overview' => TRUE,
      'access dashboard' => TRUE,
      'access draggableviews' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site map' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'administer content translations' => TRUE,
      'administer menu' => TRUE,
      'administer mollom' => TRUE,
      'administer nodes' => TRUE,
      'administer taxonomy' => TRUE,
      'administer users' => TRUE,
      'change own username' => TRUE,
      'create article content' => TRUE,
      'create audio content' => TRUE,
      'create documentacio content' => TRUE,
      'create fitxa_entorn content' => TRUE,
      'create fitxa_espectacle content' => TRUE,
      'create fitxa_premsa content' => TRUE,
      'create imatge content' => TRUE,
      'create page content' => TRUE,
      'create projecte_artistic content' => TRUE,
      'create teletip content' => TRUE,
      'create video content' => TRUE,
      'delete any article content' => TRUE,
      'delete any audio content' => TRUE,
      'delete any documentacio content' => TRUE,
      'delete any fitxa_entorn content' => TRUE,
      'delete any fitxa_espectacle content' => TRUE,
      'delete any fitxa_premsa content' => TRUE,
      'delete any imatge content' => TRUE,
      'delete any page content' => TRUE,
      'delete any projecte_artistic content' => TRUE,
      'delete any teletip content' => TRUE,
      'delete any video content' => TRUE,
      'delete own article content' => TRUE,
      'delete own audio content' => TRUE,
      'delete own documentacio content' => TRUE,
      'delete own fitxa_entorn content' => TRUE,
      'delete own fitxa_espectacle content' => TRUE,
      'delete own fitxa_premsa content' => TRUE,
      'delete own imatge content' => TRUE,
      'delete own page content' => TRUE,
      'delete own projecte_artistic content' => TRUE,
      'delete own teletip content' => TRUE,
      'delete own video content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 10' => TRUE,
      'delete terms in 11' => TRUE,
      'delete terms in 2' => TRUE,
      'delete terms in 3' => TRUE,
      'delete terms in 4' => TRUE,
      'delete terms in 5' => TRUE,
      'delete terms in 7' => TRUE,
      'delete terms in 8' => TRUE,
      'delete terms in 9' => TRUE,
      'edit any article content' => TRUE,
      'edit any audio content' => TRUE,
      'edit any documentacio content' => TRUE,
      'edit any fitxa_entorn content' => TRUE,
      'edit any fitxa_espectacle content' => TRUE,
      'edit any fitxa_premsa content' => TRUE,
      'edit any imatge content' => TRUE,
      'edit any page content' => TRUE,
      'edit any projecte_artistic content' => TRUE,
      'edit any teletip content' => TRUE,
      'edit any video content' => TRUE,
      'edit own article content' => TRUE,
      'edit own audio content' => TRUE,
      'edit own documentacio content' => TRUE,
      'edit own fitxa_entorn content' => TRUE,
      'edit own fitxa_espectacle content' => TRUE,
      'edit own fitxa_premsa content' => TRUE,
      'edit own imatge content' => TRUE,
      'edit own page content' => TRUE,
      'edit own projecte_artistic content' => TRUE,
      'edit own teletip content' => TRUE,
      'edit own video content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 10' => TRUE,
      'edit terms in 11' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'edit terms in 4' => TRUE,
      'edit terms in 5' => TRUE,
      'edit terms in 7' => TRUE,
      'edit terms in 8' => TRUE,
      'edit terms in 9' => TRUE,
      'flag afons_megamenu' => TRUE,
      'flag carrousel_gran' => TRUE,
      'flag carrousel_petit' => TRUE,
      'flag disponible_megamenu' => TRUE,
      'flag disponible_secci_pr_ximament_del' => TRUE,
      'flag dossier_premsa_megamen_' => TRUE,
      'flag entorn_proximament' => TRUE,
      'flag megamenu_batxillerat' => TRUE,
      'flag megamenu_edu_primaria' => TRUE,
      'flag megamenu_edu_secundaria' => TRUE,
      'flag patrocinadors' => TRUE,
      'flag proximament_megamenu' => TRUE,
      'flag slide_portada' => TRUE,
      'flag teletip_portada' => TRUE,
      'revert revisions' => TRUE,
      'set page title' => TRUE,
      'translate content' => TRUE,
      'unflag afons_megamenu' => TRUE,
      'unflag carrousel_gran' => TRUE,
      'unflag carrousel_petit' => TRUE,
      'unflag disponible_megamenu' => TRUE,
      'unflag disponible_secci_pr_ximament_del' => TRUE,
      'unflag dossier_premsa_megamen_' => TRUE,
      'unflag entorn_proximament' => TRUE,
      'unflag megamenu_batxillerat' => TRUE,
      'unflag megamenu_edu_primaria' => TRUE,
      'unflag megamenu_edu_secundaria' => TRUE,
      'unflag patrocinadors' => TRUE,
      'unflag proximament_megamenu' => TRUE,
      'unflag slide_portada' => TRUE,
      'unflag teletip_portada' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access all views' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access devel information' => TRUE,
      'access draggableviews' => TRUE,
      'access mollom statistics' => TRUE,
      'access overlay' => TRUE,
      'access own authorizations' => TRUE,
      'access own consumers' => TRUE,
      'access rules debug' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site map' => TRUE,
      'access site reports' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'access workbench' => TRUE,
      'administer actions' => TRUE,
      'administer ais' => TRUE,
      'administer blocks' => TRUE,
      'administer comments' => TRUE,
      'administer consumers' => TRUE,
      'administer content translations' => TRUE,
      'administer content types' => TRUE,
      'administer contexts' => TRUE,
      'administer custom formatters' => TRUE,
      'administer date tools' => TRUE,
      'administer dependencies' => TRUE,
      'administer easy social' => TRUE,
      'administer features' => TRUE,
      'administer field collections' => TRUE,
      'administer fieldgroups' => TRUE,
      'administer filters' => TRUE,
      'administer flags' => TRUE,
      'administer google analytics' => TRUE,
      'administer image styles' => TRUE,
      'administer imce' => TRUE,
      'administer languages' => TRUE,
      'administer menu' => TRUE,
      'administer meta tags' => TRUE,
      'administer metatags_quick' => TRUE,
      'administer modules' => TRUE,
      'administer mollom' => TRUE,
      'administer nodes' => TRUE,
      'administer oauth' => TRUE,
      'administer page titles' => TRUE,
      'administer pathauto' => TRUE,
      'administer permissions' => TRUE,
      'administer rdf' => TRUE,
      'administer rules' => TRUE,
      'administer search' => TRUE,
      'administer semantic fields' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer taxonomy' => TRUE,
      'administer themes' => TRUE,
      'administer twitterfield pull' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'administer views' => TRUE,
      'administer workbench' => TRUE,
      'administer xmlsitemap' => TRUE,
      'block IP addresses' => TRUE,
      'bypass mollom protection' => TRUE,
      'bypass node access' => TRUE,
      'bypass rules access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'context ajax block access' => TRUE,
      'create article content' => TRUE,
      'create audio content' => TRUE,
      'create documentacio content' => TRUE,
      'create fitxa_entorn content' => TRUE,
      'create fitxa_espectacle content' => TRUE,
      'create fitxa_premsa content' => TRUE,
      'create imatge content' => TRUE,
      'create page content' => TRUE,
      'create projecte_artistic content' => TRUE,
      'create teletip content' => TRUE,
      'create url aliases' => TRUE,
      'create video content' => TRUE,
      'customize shortcut links' => TRUE,
      'delete any article content' => TRUE,
      'delete any audio content' => TRUE,
      'delete any documentacio content' => TRUE,
      'delete any fitxa_entorn content' => TRUE,
      'delete any fitxa_espectacle content' => TRUE,
      'delete any fitxa_premsa content' => TRUE,
      'delete any imatge content' => TRUE,
      'delete any page content' => TRUE,
      'delete any projecte_artistic content' => TRUE,
      'delete any teletip content' => TRUE,
      'delete any video content' => TRUE,
      'delete own article content' => TRUE,
      'delete own audio content' => TRUE,
      'delete own documentacio content' => TRUE,
      'delete own fitxa_entorn content' => TRUE,
      'delete own fitxa_espectacle content' => TRUE,
      'delete own fitxa_premsa content' => TRUE,
      'delete own imatge content' => TRUE,
      'delete own page content' => TRUE,
      'delete own projecte_artistic content' => TRUE,
      'delete own teletip content' => TRUE,
      'delete own video content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 10' => TRUE,
      'delete terms in 11' => TRUE,
      'delete terms in 2' => TRUE,
      'delete terms in 3' => TRUE,
      'delete terms in 4' => TRUE,
      'delete terms in 5' => TRUE,
      'delete terms in 7' => TRUE,
      'delete terms in 8' => TRUE,
      'delete terms in 9' => TRUE,
      'edit any article content' => TRUE,
      'edit any audio content' => TRUE,
      'edit any documentacio content' => TRUE,
      'edit any fitxa_entorn content' => TRUE,
      'edit any fitxa_espectacle content' => TRUE,
      'edit any fitxa_premsa content' => TRUE,
      'edit any imatge content' => TRUE,
      'edit any page content' => TRUE,
      'edit any projecte_artistic content' => TRUE,
      'edit any teletip content' => TRUE,
      'edit any video content' => TRUE,
      'edit meta tags' => TRUE,
      'edit metatags_quick' => TRUE,
      'edit own article content' => TRUE,
      'edit own audio content' => TRUE,
      'edit own comments' => TRUE,
      'edit own documentacio content' => TRUE,
      'edit own fitxa_entorn content' => TRUE,
      'edit own fitxa_espectacle content' => TRUE,
      'edit own fitxa_premsa content' => TRUE,
      'edit own imatge content' => TRUE,
      'edit own page content' => TRUE,
      'edit own projecte_artistic content' => TRUE,
      'edit own teletip content' => TRUE,
      'edit own video content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 10' => TRUE,
      'edit terms in 11' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'edit terms in 4' => TRUE,
      'edit terms in 5' => TRUE,
      'edit terms in 7' => TRUE,
      'edit terms in 8' => TRUE,
      'edit terms in 9' => TRUE,
      'entityconnect add button' => TRUE,
      'entityconnect edit button' => TRUE,
      'execute php code' => TRUE,
      'flag afons_megamenu' => TRUE,
      'flag carrousel_gran' => TRUE,
      'flag carrousel_petit' => TRUE,
      'flag disponible_megamenu' => TRUE,
      'flag disponible_secci_pr_ximament_del' => TRUE,
      'flag dossier_premsa_megamen_' => TRUE,
      'flag entorn_proximament' => TRUE,
      'flag megamenu_batxillerat' => TRUE,
      'flag megamenu_edu_primaria' => TRUE,
      'flag megamenu_edu_secundaria' => TRUE,
      'flag patrocinadors' => TRUE,
      'flag proximament_megamenu' => TRUE,
      'flag slide_portada' => TRUE,
      'flag teletip_portada' => TRUE,
      'generate features' => TRUE,
      'manage features' => TRUE,
      'notify of path changes' => TRUE,
      'oauth authorize any consumers' => TRUE,
      'oauth register any consumers' => TRUE,
      'opt-in or out of tracking' => TRUE,
      'post comments' => TRUE,
      'report to mollom' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'set page title' => TRUE,
      'skip comment approval' => TRUE,
      'switch shortcut sets' => TRUE,
      'switch users' => TRUE,
      'translate admin strings' => TRUE,
      'translate content' => TRUE,
      'translate interface' => TRUE,
      'translate user-defined strings' => TRUE,
      'unflag afons_megamenu' => TRUE,
      'unflag carrousel_gran' => TRUE,
      'unflag carrousel_petit' => TRUE,
      'unflag disponible_megamenu' => TRUE,
      'unflag disponible_secci_pr_ximament_del' => TRUE,
      'unflag dossier_premsa_megamen_' => TRUE,
      'unflag entorn_proximament' => TRUE,
      'unflag megamenu_batxillerat' => TRUE,
      'unflag megamenu_edu_primaria' => TRUE,
      'unflag megamenu_edu_secundaria' => TRUE,
      'unflag patrocinadors' => TRUE,
      'unflag proximament_megamenu' => TRUE,
      'unflag slide_portada' => TRUE,
      'unflag teletip_portada' => TRUE,
      'use advanced search' => TRUE,
      'use easy social wizard' => TRUE,
      'use flag import' => TRUE,
      'use PHP for title patterns' => TRUE,
      'use PHP for tracking visibility' => TRUE,
      'use text format editor_web' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view date repeats' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}