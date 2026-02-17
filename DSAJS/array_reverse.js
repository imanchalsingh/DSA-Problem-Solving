let array = [1, 40, 53, 2, 5];
// default fn
// console.log(array.reverse());

// logic algorithms
let reversed = [];
for (let i = array.length - 1; i >= 0; i--) {
  //   console.log(array[i]);

  reversed.push(array[i]);
}
console.log(reversed);
