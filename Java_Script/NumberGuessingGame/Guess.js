const lower = 0;
const upper = 9;

let guess;

do{
    guess = window.prompt(`Guess the number between ${lower} and ${upper}`)
    if(guess == Math.floor((Math.random()* (upper - lower) + lower))){
        alert("You have guessed the number correctly")
        break;
    }

}while(guess != -1)