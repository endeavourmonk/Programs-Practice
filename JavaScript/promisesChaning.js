function foo(val){
    let pr = new Promise(function (resolve, reject) {
        if (val < 20)
            resolve("true");
        if (val >= 20)
            reject("false");
    })
    return pr;
}

let res = foo(2);
console.log(res);
res.then(function(result){
    console.log(result);
    return result + 2;
})
.then(function(result){
    console.log(result);
    return result + 22;
})
.then(function(result){
    console.log(result);
})