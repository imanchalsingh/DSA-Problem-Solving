let arr1 = [2, 3, 1];
let arr2 = [5, 7, 9];
let mergedArr = [];

// console.log(...arr1, ...arr2);

for (let i = 0; i < arr1.length; i++) {
  mergedArr.push(arr1[i]);
}
for (let i = 0; i < arr2.length; i++) {
  mergedArr.push(arr2[i]);
}

console.log(mergedArr);
