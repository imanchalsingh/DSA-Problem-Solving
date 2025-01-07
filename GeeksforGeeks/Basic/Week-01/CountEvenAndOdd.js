// Count Even and Odd in array. time complexity O(n)
class Solution {
  countOddEven(arr) {
    let even = 0;
    let odd = 0;
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] % 2 === 0) {
        even++;
      } else {
        odd++;
      }
    }
    return [even, odd];
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.countOddEven([1, 2, 3, 4, 5, 6]));
console.log(solution.countOddEven([1, 3, 5]));
