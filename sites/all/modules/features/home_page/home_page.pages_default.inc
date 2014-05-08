<?php
/**
 * @file
 * home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'This is the home page.';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'ccgd_two_column_right_top' => NULL,
      'ccgd_two_column_right_first' => NULL,
      'ccgd_two_column_right_second' => NULL,
      'ccgd_two_column_right_bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3e58ce2a-3247-4a4d-bc6f-4ca8f80a1f40';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-271d1109-5a87-43ea-b283-2ae32b2d4654';
    $pane->panel = 'bottom';
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
    $pane->uuid = '271d1109-5a87-43ea-b283-2ae32b2d4654';
    $display->content['new-271d1109-5a87-43ea-b283-2ae32b2d4654'] = $pane;
    $display->panels['bottom'][0] = 'new-271d1109-5a87-43ea-b283-2ae32b2d4654';
    $pane = new stdClass();
    $pane->pid = 'new-0160e86a-b3c0-4e09-9887-3ce54ddc7536';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'schedule-panel_pane_1';
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
    $pane->uuid = '0160e86a-b3c0-4e09-9887-3ce54ddc7536';
    $display->content['new-0160e86a-b3c0-4e09-9887-3ce54ddc7536'] = $pane;
    $display->panels['left'][0] = 'new-0160e86a-b3c0-4e09-9887-3ce54ddc7536';
    $pane = new stdClass();
    $pane->pid = 'new-f2314b28-235d-47c7-860c-98aaea462d0f';
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
    $pane->uuid = 'f2314b28-235d-47c7-860c-98aaea462d0f';
    $display->content['new-f2314b28-235d-47c7-860c-98aaea462d0f'] = $pane;
    $display->panels['right'][0] = 'new-f2314b28-235d-47c7-860c-98aaea462d0f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
