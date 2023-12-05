<?php

/**
 * @file
 * bitcoin_daily_exchange_rate.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bitcoin_daily_exchange_rate_node_info(): array {
  $items = array(
    'bitcoin_daily' => array(
      'name' => t('Bitcoin Daily'),
      'base' => 'node_content',
      'description' => t('Bitcoin daily'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
