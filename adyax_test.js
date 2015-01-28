/**
 * @file
 * Javascript for Adyax Test.
 */

/**
 * Provides a farbtastic colorpicker for the fancier widget.
 */
(function ($) {
  Drupal.behaviors.adyax_test_colorpicker = {
    attach: function(context) {
      // url.match( /http:\/\/(www\.)?vimeo.com\/(\d+)($|\/)/);
      $('.field-type-adyax-test-rgb .form-text').change(function() {
        console.log(this);
      });
    }
  }
})(jQuery);
