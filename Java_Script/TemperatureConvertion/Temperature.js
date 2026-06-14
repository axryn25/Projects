
let option1 = document.getElementById("Op1");
let option2 = document.getElementById("Op2");
let option3 = document.getElementById("Op3");
let option4 = document.getElementById("Op4");
let answer = document.getElementById("answer");
let result;
function Convert(){
    let number = Number(document.getElementById("number").value);
    if(option1.checked){
        result = (number * 9/5) + 32;
        answer.textContent = `${result} °F`
    } else if (option2.checked){
        result = ((number - 32) * 5/9);
        answer.textContent = `${result} °C`
    } else if(option3.checked){
        result = number + 273.15
        answer.textContent = `${result} K`
    }else if(option4.checked){
        result = number - 273.15;
        answer.textContent = `${result} °C`
    }

    
}