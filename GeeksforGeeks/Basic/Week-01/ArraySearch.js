class Solution {
  search(arr, x) {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] === x) {
        return i;
      }
    }
    return -1;
  }
}

const solution = new Solution();
const arr = [1, 2, 3, 4, 5];
const x = 3;
console.log(solution.search(arr, x));

// We can solve it using indexOf() method, when its not required inbuilt functions.
class Solution1 {
  search(arr, x) {
    return arr.indexOf(x);
  }
}

// Example Usage
const solution1 = new Solution();
console.log(solution1.search([1, 2, 3, 4, 5], 3)); // Output: 2
console.log(solution1.search([1, 2, 3, 4, 5], 6)); // Output: -1
