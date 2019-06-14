$(document).ready(function(){
    $("#on-btn").click(function(){
        $("#lamp").css({"background-color":"#ffd700","box-shadow":"0px 0px 100px 10px #ffd700"});
    });
    $("#off-btn").click(function(){
        $("#lamp").css({"background-color":"#a3a3a3","box-shadow":"none"});
    });
});
