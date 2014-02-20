<?php
/**
 * @file
 * manual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function manual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function manual_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function manual_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: manual.
  $custom_breadcrumbs['manual'] = array(
    'name' => 'manual',
    'titles' => 'user-manual

[node:title]',
    'paths' => '/user-manual

[node:url:path]',
    'visibility_php' => '',
    'node_type' => 'manual',
    'language' => '',
    'machine_name' => 'manual',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function manual_node_info() {
  $items = array(
    'manual' => array(
      'name' => t('manual'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
