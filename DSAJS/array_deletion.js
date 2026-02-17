let arr = [21, 43, 54, 12, 99];

// console.log(arr.slice(1)); //remove from start till given number of element
// console.log(arr.pop(1)); // remove from end except given number of element

for (let i = 2; i < arr.length - 1; i++) {
  arr[i] = arr[i + 1];
}
arr.length--;
console.log(arr);
