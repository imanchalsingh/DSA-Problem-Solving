let arr = [23, 43, 0, 65, 0, 2, 0, 54];

let nonZero = arr.filter(num => num !== 0);
let zeros = arr.filter(num => num === 0);

arr = [...nonZero, ...zeros];

console.log(arr);