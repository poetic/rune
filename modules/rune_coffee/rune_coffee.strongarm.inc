<?php
/**
 * @file
 * rune_coffee.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rune_coffee_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'coffee_settings_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'management' => 'management',
    'user-menu' => 'user-menu',
    'features' => 0,
    'navigation' => 0,
  );
  $export['coffee_settings_menus'] = $strongarm;

  return $export;
}
