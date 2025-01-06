// Replace all 0's with 5 in an input integer time complexity: O(logn)
class Solution {
  convertFive(num) {
    let result = 0;
    let decimalPlace = 1;
    if (num === 0) {
      return 5;
    }
    while (num > 0) {
      if (num % 10 === 0) {
        result += 5 * decimalPlace;
      }
      result += (num % 10) * decimalPlace;
      num = Math.floor(num / 10);
      decimalPlace *= 10;
    }
    return result;
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.convertFive(1004));
console.log(solution.convertFive(121));
console.log(solution.convertFive(0));
console.log(solution.convertFive(123));
console.log(solution.convertFive(1000));
console.log(solution.convertFive(100));
