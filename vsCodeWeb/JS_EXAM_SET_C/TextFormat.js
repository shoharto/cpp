//For Text-Size Change
var fontSizeDD = document.getElementById('fontSizeDD');
fontSizeDD.onchange = function () {
    var txtBox = document.getElementById("txtBox")
    txtBox.style.fontSize = this.value + "px";
};

//For Color CHange
function myFunctionOne() {
    document.getElementById("txtBox").style.color = "black";

};

function myFunctionTwo() {

    document.getElementById("txtBox").style.color = "red";

};

function myFunctionThree() {

    document.getElementById("txtBox").style.color = "blue";
};