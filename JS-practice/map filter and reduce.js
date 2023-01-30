const arr = [2, 3, 4, 5, 6];

// map creates a new array.
let mArr = arr.map((ele, index, arr) => {
    console.log(ele, index, arr);
    return ele + index;
});

console.log(mArr);

let fArr = arr.filter((ele) => {
    return ele < 5;
});

console.log(fArr);

const array = [1, 2, 3, 4];

let val = array.reduce((i, g) => {
    return i + g;
})
console.log(val);