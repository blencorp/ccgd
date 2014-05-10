<?php
/**
 * @file
 * fallback_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fallback_panel_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Fallback',
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
  $display->uuid = '76254b7d-7b37-4f6d-a1cf-ac1606d7463c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c04fabac-0c3d-4c4e-93bd-7d77e78d3ff4';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = 'c04fabac-0c3d-4c4e-93bd-7d77e78d3ff4';
    $display->content['new-c04fabac-0c3d-4c4e-93bd-7d77e78d3ff4'] = $pane;
    $display->panels['left'][0] = 'new-c04fabac-0c3d-4c4e-93bd-7d77e78d3ff4';
    $pane = new stdClass();
    $pane->pid = 'new-9a278b62-769d-4d39-94f2-cbca7695511a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
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
    $pane->uuid = '9a278b62-769d-4d39-94f2-cbca7695511a';
    $display->content['new-9a278b62-769d-4d39-94f2-cbca7695511a'] = $pane;
    $display->panels['left'][1] = 'new-9a278b62-769d-4d39-94f2-cbca7695511a';
    $pane = new stdClass();
    $pane->pid = 'new-cfddcc49-1c9d-40eb-b9eb-3ff31aeba9b2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'override_title' => 0,
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
    $pane->uuid = 'cfddcc49-1c9d-40eb-b9eb-3ff31aeba9b2';
    $display->content['new-cfddcc49-1c9d-40eb-b9eb-3ff31aeba9b2'] = $pane;
    $display->panels['right'][0] = 'new-cfddcc49-1c9d-40eb-b9eb-3ff31aeba9b2';
    $pane = new stdClass();
    $pane->pid = 'new-9d65b536-419f-4fc9-a87b-1363e9e25bb3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Twitter Feed',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9d65b536-419f-4fc9-a87b-1363e9e25bb3';
    $display->content['new-9d65b536-419f-4fc9-a87b-1363e9e25bb3'] = $pane;
    $display->panels['right'][1] = 'new-9d65b536-419f-4fc9-a87b-1363e9e25bb3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c04fabac-0c3d-4c4e-93bd-7d77e78d3ff4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
