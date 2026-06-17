let passwordText = document.getElementById("password")
    

function randomPasswordGen(){
    let totalChars = Number(document.getElementById("num").value)
    const LowerCases = 'abcdefghijklmnopqrstuvwxyz'
    const numberss = '1234567890'
    const symbolss = '!@#$%&*?/|~₹'
    let combinedstring = ""
    combinedstring += LowerCases;
    combinedstring += numberss;
    combinedstring += symbolss;
    let Answer = ""
    if (totalChars < 6){
        return passwordText.textContent = "number of characters should be greater than 6"
    }
    for(let i = 0;i < totalChars;i++){
        let randomNumber = Math.floor(Math.random()*combinedstring.length)
        Answer += combinedstring[randomNumber]
        
    }
    
    passwordText.textContent = Answer
}


