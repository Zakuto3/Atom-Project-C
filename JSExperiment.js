var obj = {};
var collection = {};
let num = 0;

var k = function () {
    obj["test" + num] = document.getElementById("Obj").value;
    num++;
}
var b = function (but, text) {
    for (var ea in obj) {
        document.getElementById("test").innerHTML
            = obj["test" + ea];}
    
}

