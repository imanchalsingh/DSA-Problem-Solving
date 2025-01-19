function valueEqualToIndex(arr) {
  let result = [];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === i + 1) {
      result.push(i + 1);
    }
  }
  return result;
}

// Example usage
console.log(valueEqualToIndex([15, 2, 45, 4, 7]));
console.log(valueEqualToIndex([1]));
console.log(valueEqualToIndex([5, 6, 3, 4, 5]));
