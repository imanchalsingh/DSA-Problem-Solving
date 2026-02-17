let array = [12, 43, 53, 64, 78, 90];
let n = array.length; // length of array.
let element = 10; // element which we have to add/insert
let position = 2; // index or position where element will insert

// reverse loop to avoid overwrite elements
for (let i = n; i > position; i--) {
  array[i] = array[i - 1];
}
array[position] = element;
n++;
console.log(array);
