"use strict"; // Turns on strict mode for this compilation unit
function myFunc(n){
    if(n > 30)
        throw 'this is not valid here';
}

try{
    myFunc(33);
}catch(err){
    console.error("ERROR: ", err)
}