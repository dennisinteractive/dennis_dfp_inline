<?php
/**
 * @file
 * Dennis Placeholder/Wysiwyg API integration.
 */
define("DENNIS_DFP_INLINE_PLACEHOLDER", '<div class="dfpinline-auto-placeholder"></div>');

/**
 * Implements hook_wysiwyg_plugin().
 */
function dennis_placeholder_wysiwyg_dfpinline_plugin() {
  $plugins['dfpinline'] = array(
    'title'      => t('Inline Ads'),
    'icon file'  => 'dfpinline.png',
    'icon title' => t('Insert inline ad slot placeholder'),
    'settings'   => array(
      'placeholderPattern' => variable_get('dennis_placeholder_placeholder', DENNIS_DFP_INLINE_PLACEHOLDER),
    ),
  );

  return $plugins;
}