// let arr = [1, 2, 3];
// console.log(arr);
// console.log("length of array: ", arr.length);
// console.log(arr[1]);
// arr.push(45);
// console.log(arr);
// arr[2] = 9;
// console.log(arr);
// console.log(arr.length);

// // destructuring assignment
// const [a, b] = arr;
// console.log(typeof a);
// console.log(typeof b);
// console.log(typeof arr);
// console.log("a = ", a);
// console.log("b = ", b);

const myObj = {
    name: "Rahul",
    age: 34,
    Roll: 23
}
// console.log(myObj)

// Destructuring names must match

const {name: x,age: y,Roll: z} = myObj;
console.log(x)


const obj = { a: 1, b: 2 };
const { a, b } = obj;
console.log(a, b);
