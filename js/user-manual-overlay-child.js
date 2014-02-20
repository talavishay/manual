
(function ($) {
  // Adjust the overlay dimensions.
  Drupal.behaviors.manual = {
    attach: function (context) {
      $('#overlay:not(.mymodule-adjusted)', context).each(function() {
//################################################
PreviewImage = function(uri) {

  //Get the HTML Elements
  imageDialog = $("#dialog");
  imageTag = $('#image');

  //Split the URI so we can get the file name
  uriParts = uri.split("/");

  //Set the image src
  imageTag.attr('src', uri);

  //When the image has loaded, display the dialog
  imageTag.load(function(){

    $('#dialog').dialog({
      modal: true,
      resizable: false,
      draggable: false,
      width: 'auto',
      title: uriParts[uriParts.length - 1]
    });
  });   
}

  $('img').click(function(event){
    console.log($(event.currentTarget).attr('src'));

    event.preventDefault();
//    PreviewImage($(event.currentTarget).attr('src'));
	$(event.currentTarget).clone().dialog({
      modal: true,
      resizable: false,
      draggable: true,
      width: 'auto',
//      title:' uriParts[uriParts.length - 1]'
    });
  });               
console.log($("img"));
//###############################################3



      }).addClass('mymodule-adjusted');
    }
  };
})(jQuery);

