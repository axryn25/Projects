let number = Number(document.getElementById("Count").innerHTML);
function Increase(){
    number += 1;
    document.getElementById("Count").textContent = number;
}
function Reset(){
    number = 0;
    document.getElementById("Count").textContent = number;
}
function Decrease(){
    number -= 1;
    document.getElementById("Count").textContent = number;
}