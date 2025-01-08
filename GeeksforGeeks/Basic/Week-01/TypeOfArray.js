class Solution {
  maxNtype(arr) {
    let n = arr.length;
    let max = arr[0];
    let min = arr[0];
    let maxIndex = 0;
    let minIndex = 0;
    for (let i = 0; i < n; i++) {
      if (arr[i] > max) {
        max = arr[i];
        maxIndex = i;
      }
      if (arr[i] < min) {
        min = arr[i];
        minIndex = i;
      }
    }
    if (maxIndex === n - 1 && minIndex === 0) {
      return 1;
    }
    if (maxIndex === 0 && minIndex === n - 1) {
      return 2;
    }
    if (maxIndex !== n - 1 && minIndex !== 0) {
      return 3;
    }
    return 3;
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.maxNtype([1, 2, 3, 4, 5]));
console.log(solution.maxNtype([5, 4, 3, 2, 1]));
