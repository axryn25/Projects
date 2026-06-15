function DiceRoll(){
    let num = Number(document.getElementById("number").value)
    let max = 6;
    let min = 1;
    
    let rolls = []
    const rollPics = []
    let roll;
    for(let i = 0;i < num;i ++){
        roll = Number(Math.floor(Math.random() * (max - min + 1)) + min)
        rolls.push(roll)
        rollPics.push(`<img src="images/${roll}.png" height="100px">`);
        
        
    }
    document.getElementById("Answer").textContent = "Outcomes: " + rolls
    document.getElementById("pics").innerHTML = (rollPics.join(" "))
    console.log(rollPics.join(""))

}