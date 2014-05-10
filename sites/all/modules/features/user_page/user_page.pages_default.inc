<?php
/**
 * @file
 * user_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function user_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Authenticated user',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '4856dc90-e044-4811-986d-1a2b0fd7412f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34eba9a4-a406-44c6-8c5d-1d827cdd28ed';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-user_dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '34eba9a4-a406-44c6-8c5d-1d827cdd28ed';
    $display->content['new-34eba9a4-a406-44c6-8c5d-1d827cdd28ed'] = $pane;
    $display->panels['left'][0] = 'new-34eba9a4-a406-44c6-8c5d-1d827cdd28ed';
    $pane = new stdClass();
    $pane->pid = 'new-1a67affd-8b92-4554-a752-292c20cbd734';
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
    $pane->uuid = '1a67affd-8b92-4554-a752-292c20cbd734';
    $display->content['new-1a67affd-8b92-4554-a752-292c20cbd734'] = $pane;
    $display->panels['left'][1] = 'new-1a67affd-8b92-4554-a752-292c20cbd734';
    $pane = new stdClass();
    $pane->pid = 'new-95d090bf-e023-4eab-87bf-b70d36f0de91';
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
    $pane->uuid = '95d090bf-e023-4eab-87bf-b70d36f0de91';
    $display->content['new-95d090bf-e023-4eab-87bf-b70d36f0de91'] = $pane;
    $display->panels['right'][0] = 'new-95d090bf-e023-4eab-87bf-b70d36f0de91';
    $pane = new stdClass();
    $pane->pid = 'new-d2066304-bd94-4ed9-a842-5db6b2b99a35';
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
    $pane->uuid = 'd2066304-bd94-4ed9-a842-5db6b2b99a35';
    $display->content['new-d2066304-bd94-4ed9-a842-5db6b2b99a35'] = $pane;
    $display->panels['right'][1] = 'new-d2066304-bd94-4ed9-a842-5db6b2b99a35';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34eba9a4-a406-44c6-8c5d-1d827cdd28ed';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Unauthenticated',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '90c46cfe-61c0-4f32-954c-d7b317e6b7c1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1f1f5d4-c701-4e85-bd2a-83ad76dbd4ae';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'c1f1f5d4-c701-4e85-bd2a-83ad76dbd4ae';
    $display->content['new-c1f1f5d4-c701-4e85-bd2a-83ad76dbd4ae'] = $pane;
    $display->panels['left'][0] = 'new-c1f1f5d4-c701-4e85-bd2a-83ad76dbd4ae';
    $pane = new stdClass();
    $pane->pid = 'new-5bd2ddf4-bd7c-452a-b53d-926b6afaa213';
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
    $pane->uuid = '5bd2ddf4-bd7c-452a-b53d-926b6afaa213';
    $display->content['new-5bd2ddf4-bd7c-452a-b53d-926b6afaa213'] = $pane;
    $display->panels['left'][1] = 'new-5bd2ddf4-bd7c-452a-b53d-926b6afaa213';
    $pane = new stdClass();
    $pane->pid = 'new-77d6142f-9af7-40c3-9c4a-ccb21f05efb1';
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
    $pane->uuid = '77d6142f-9af7-40c3-9c4a-ccb21f05efb1';
    $display->content['new-77d6142f-9af7-40c3-9c4a-ccb21f05efb1'] = $pane;
    $display->panels['right'][0] = 'new-77d6142f-9af7-40c3-9c4a-ccb21f05efb1';
    $pane = new stdClass();
    $pane->pid = 'new-fe3c6c95-bd71-40d2-9196-b81780be7d78';
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
    $pane->uuid = 'fe3c6c95-bd71-40d2-9196-b81780be7d78';
    $display->content['new-fe3c6c95-bd71-40d2-9196-b81780be7d78'] = $pane;
    $display->panels['right'][1] = 'new-fe3c6c95-bd71-40d2-9196-b81780be7d78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c1f1f5d4-c701-4e85-bd2a-83ad76dbd4ae';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}
