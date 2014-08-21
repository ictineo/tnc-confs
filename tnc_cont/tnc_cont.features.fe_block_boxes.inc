<?php
/**
 * @file
 * tnc_cont.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tnc_cont_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'logo tnc footer';
  $fe_block_boxes->format = 'editor_web';
  $fe_block_boxes->machine_name = 'logo_tnc_footer';
  $fe_block_boxes->body = '<p><img alt="" height="91" src="/tnc_jj/sites/default/files/logotnc-peu_0.png" width="95"></p><p>Teatre Nacional de Catalunya</p><p>Plaça de les Arts, 1</p><p>08013 Barcelona</p><p>Tel. 933 065 700</p>';

  $export['logo_tnc_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Workbench: accessos directes a edició menus';
  $fe_block_boxes->format = 'editor_web';
  $fe_block_boxes->machine_name = 'workbench_customlinks_menus';
  $fe_block_boxes->body = '<ul><li><a href="/tnc_mergecont/admin/structure/menu/manage/menu-compra-d-abonaments">Edita: Compra d\'abonaments</a></li><li><a href="/tnc_mergecont/admin/structure/menu/manage/menu-compra-d-entrades">Edita: Compra d\'entrades</a></li><li><a href="/tnc_mergecont/admin/structure/menu/manage/menu-peu">Edita: Informació pràctica</a></li><li><a href="/tnc_mergecont/admin/structure/menu/manage/menu-regala-tnc">Edita: Regala TNC</a></li></ul>';

  $export['workbench_customlinks_menus'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Xarxes socials de la barra superior';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'xxss_barra_superior';
  $fe_block_boxes->body = '<div class="xxss">
<div class="fb"><a href="http://www.tnc.cat/facebook">.</a></div><div class="tw"><a href="http://www.tnc.cat/twitter">.</a></div><span class="instagram"><a href="http://www.tnc.cat/instagram">.</a></span><span class="youtube"><a href="http://www.tnc.cat/youtube">.</a></span><span class="feed"><a href="http://www.tnc.cat/instagram">.</a></span>
</div>';

  $export['xxss_barra_superior'] = $fe_block_boxes;

  return $export;
}
