<?php
/**
 * @file
 * manual.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function manual_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_manual_pattern';
  $strongarm->value = 'user-manual/[node:title]';
  $export['pathauto_node_manual_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; 
  $strongarm->api_version = 1;
  $strongarm->name = 'overlay_paths_ui_paths';
  $strongarm->value = array(
    'user-manual*' => TRUE,
  );
  $export['overlay_paths_ui_paths'] = $strongarm;


  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_manual';
  $strongarm->value = array (
    'status' => false,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  );
  $export['node_options_manual'] = $strongarm;

  return $export;
}
