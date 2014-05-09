<?php
/**
 * @file
 * blog_landing_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_landing_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Blog Landing Page';
  $page->admin_description = 'This is the blog landing page.';
  $page->path = 'blog';
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
  $handler->name = 'page_blog_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_landing_page';
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
  $display->uuid = 'eeeefe2f-6e57-4339-be15-6f9b50684703';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-64eeb593-571d-451e-b723-5804175757c0';
    $pane->panel = 'footer';
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
    $pane->uuid = '64eeb593-571d-451e-b723-5804175757c0';
    $display->content['new-64eeb593-571d-451e-b723-5804175757c0'] = $pane;
    $display->panels['footer'][0] = 'new-64eeb593-571d-451e-b723-5804175757c0';
    $pane = new stdClass();
    $pane->pid = 'new-9c0ea362-b576-4e43-9bec-5bc64a2082fc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
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
    $pane->uuid = '9c0ea362-b576-4e43-9bec-5bc64a2082fc';
    $display->content['new-9c0ea362-b576-4e43-9bec-5bc64a2082fc'] = $pane;
    $display->panels['left'][0] = 'new-9c0ea362-b576-4e43-9bec-5bc64a2082fc';
    $pane = new stdClass();
    $pane->pid = 'new-168c530a-3af7-4c55-aa03-f69f2e66e208';
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
    $pane->uuid = '168c530a-3af7-4c55-aa03-f69f2e66e208';
    $display->content['new-168c530a-3af7-4c55-aa03-f69f2e66e208'] = $pane;
    $display->panels['right'][0] = 'new-168c530a-3af7-4c55-aa03-f69f2e66e208';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_landing_page'] = $page;

  return $pages;

}
