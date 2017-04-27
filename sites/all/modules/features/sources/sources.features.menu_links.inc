<?php
/**
 * @file
 * sources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_sources:sources.
  $menu_links['main-menu_sources:sources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sources',
    'router_path' => 'sources',
    'link_title' => 'sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sources:sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('sources');

  return $menu_links;
}
