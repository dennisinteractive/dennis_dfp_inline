/**
 * @module dfpinline/app
 *
 * @description
 *   This application expects configuration values in `Drupal.settings` prepared
 *   by the Drupal module.
 *
 * @module dfpinline/app
 */

var dennisPlaceholder = dennisPlaceholder || {};
var Renderer;

(function () {
  Drupal.behaviors.dennisPlaceholder = {
    attach: function( context, settings ) {

      if ( window.googletag &&
          Drupal.settings.dennisPlaceholder &&
          Drupal.settings.dennisPlaceholder.config &&
          Drupal.settings.dennisPlaceholder.config.selector
        ) {
        var r = new Renderer( settings.dennisPlaceholder.config.selector, settings.dennisPlaceholder );
            r.field && r.init();
      }
    }
  };
})();
