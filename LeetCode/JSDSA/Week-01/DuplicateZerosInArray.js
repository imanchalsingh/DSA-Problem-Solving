var duplicateZeros = function (arr) {
  let n = arr.length;
  let i = 0;
  while (i < n) {
    if (arr[i] === 0) {
      arr.splice(i, 0, 0);
      arr.pop();
      i++;
    }
    i++;
  }
  return arr;
};

// Test cases
console.log(duplicateZeros([1, 0, 2, 3, 0, 4, 5, 0]));
console.log(duplicateZeros([1, 2, 3]));
console.log(duplicateZeros([0, 0, 0]));