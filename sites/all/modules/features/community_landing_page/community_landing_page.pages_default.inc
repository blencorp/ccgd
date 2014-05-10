<?php
/**
 * @file
 * community_landing_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function community_landing_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'community_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Community Landing Page';
  $page->admin_description = 'This is the community landing page.';
  $page->path = 'community';
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
  $handler->name = 'page_community_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'community_landing_page';
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
  $display->uuid = '2eb390b5-05b8-4b14-b87f-0c022cf1f06d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-09711db0-352c-44c3-842b-15c53e1e5c4b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'community-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09711db0-352c-44c3-842b-15c53e1e5c4b';
    $display->content['new-09711db0-352c-44c3-842b-15c53e1e5c4b'] = $pane;
    $display->panels['left'][0] = 'new-09711db0-352c-44c3-842b-15c53e1e5c4b';
    $pane = new stdClass();
    $pane->pid = 'new-75b05a37-b212-483b-8675-7779ece10ea8';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '75b05a37-b212-483b-8675-7779ece10ea8';
    $display->content['new-75b05a37-b212-483b-8675-7779ece10ea8'] = $pane;
    $display->panels['left'][1] = 'new-75b05a37-b212-483b-8675-7779ece10ea8';
    $pane = new stdClass();
    $pane->pid = 'new-fa4404bf-bdfd-4a10-9911-e7e6e6eb8652';
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
    $pane->uuid = 'fa4404bf-bdfd-4a10-9911-e7e6e6eb8652';
    $display->content['new-fa4404bf-bdfd-4a10-9911-e7e6e6eb8652'] = $pane;
    $display->panels['right'][0] = 'new-fa4404bf-bdfd-4a10-9911-e7e6e6eb8652';
    $pane = new stdClass();
    $pane->pid = 'new-3b154a2d-a354-43f9-b171-5535760c324e';
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
    $pane->uuid = '3b154a2d-a354-43f9-b171-5535760c324e';
    $display->content['new-3b154a2d-a354-43f9-b171-5535760c324e'] = $pane;
    $display->panels['right'][1] = 'new-3b154a2d-a354-43f9-b171-5535760c324e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-09711db0-352c-44c3-842b-15c53e1e5c4b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['community_landing_page'] = $page;

  return $pages;

}
