<?php
/**
 * @file
 * home_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function home_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_community:<front>
  $menu_links['main-menu_community:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the menu link for the community page.',
      ),
      'identifier' => 'main-menu_community:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_contact-us:<front>
  $menu_links['main-menu_contact-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the menu link to contact us page.',
      ),
      'identifier' => 'main-menu_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_location:<front>
  $menu_links['main-menu_location:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Location',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the menu link for the location page',
      ),
      'identifier' => 'main-menu_location:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_program:<front>
  $menu_links['main-menu_program:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the menu link to the programs page.',
      ),
      'identifier' => 'main-menu_program:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_schedule:<front>
  $menu_links['main-menu_schedule:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the menu link to the schedule landing page.',
      ),
      'identifier' => 'main-menu_schedule:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_home:<front>',
  );
  // Exported menu link: main-menu_sponsors:sponsors
  $menu_links['main-menu_sponsors:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'identifier' => 'main-menu_sponsors:sponsors',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');
  t('Contact Us');
  t('Home');
  t('Location');
  t('Program');
  t('Schedule');
  t('Sponsors');


  return $menu_links;
}
