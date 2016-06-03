<?php
/**
 * @file
 * Dennis Placeholder/Wysiwyg API integration.
 */
define("DENNIS_PLACEHOLDER_PLACEHOLDER", '<div class="dfpinline-auto-placeholder"></div>');

/**
 * Implements hook_wysiwyg_plugin().
 */
function dennis_placeholder_wysiwyg_plugin() {
  $plugins['dennis_placeholder'] = array(
    'title'      => t('Inline Ads'),
    'icon file'  => 'dfpinline.png',
    'icon title' => t('Insert inline ad slot placeholder'),
    'settings'   => array(
      'placeholderPattern' => variable_get('dennis_placeholder_placeholder', DENNIS_PLACEHOLDER_PLACEHOLDER),
    ),
  );

  return $plugins;
}
