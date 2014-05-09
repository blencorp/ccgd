<?php
/**
 * @file
 * location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location';
  $page->task = 'page';
  $page->admin_title = 'Location';
  $page->admin_description = 'This page has the location page.';
  $page->path = 'location';
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
  $handler->name = 'page_location_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'location';
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
    'contexts' => array(),
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
  $display->uuid = '0d233f44-f368-4e3c-8393-bcf184f3ce4c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-45b96e13-2778-46de-8a4b-2e95e28ffb5a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '45b96e13-2778-46de-8a4b-2e95e28ffb5a';
    $display->content['new-45b96e13-2778-46de-8a4b-2e95e28ffb5a'] = $pane;
    $display->panels['left'][0] = 'new-45b96e13-2778-46de-8a4b-2e95e28ffb5a';
    $pane = new stdClass();
    $pane->pid = 'new-6bd0331a-90a8-4e4c-a7c5-52ad3812c1d3';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6bd0331a-90a8-4e4c-a7c5-52ad3812c1d3';
    $display->content['new-6bd0331a-90a8-4e4c-a7c5-52ad3812c1d3'] = $pane;
    $display->panels['right'][0] = 'new-6bd0331a-90a8-4e4c-a7c5-52ad3812c1d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6bd0331a-90a8-4e4c-a7c5-52ad3812c1d3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location'] = $page;

  return $pages;

}
