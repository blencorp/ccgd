<?php
/**
 * @file
 * sponsor_landing_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function sponsor_landing_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsor_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Sponsor Landing Page';
  $page->admin_description = 'This is the landing page for the sponsors.';
  $page->path = 'sponsor';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsor_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sponsor_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'test',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '9',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_63_37_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '835f7707-95d0-4f62-a03f-34be76ad5317';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0be4a313-51e2-4af0-9a2c-71eae0d107f2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Sponorship Details',
      'title' => 'Sponsorship Details',
      'body' => 'Details of the sponsorship Goes here',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0be4a313-51e2-4af0-9a2c-71eae0d107f2';
    $display->content['new-0be4a313-51e2-4af0-9a2c-71eae0d107f2'] = $pane;
    $display->panels['left'][0] = 'new-0be4a313-51e2-4af0-9a2c-71eae0d107f2';
    $pane = new stdClass();
    $pane->pid = 'new-4c4acf88-9e4d-45f5-b8a5-deda31d1c98e';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'cod_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c4acf88-9e4d-45f5-b8a5-deda31d1c98e';
    $display->content['new-4c4acf88-9e4d-45f5-b8a5-deda31d1c98e'] = $pane;
    $display->panels['left'][1] = 'new-4c4acf88-9e4d-45f5-b8a5-deda31d1c98e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsor_landing_page'] = $page;

  return $pages;

}
