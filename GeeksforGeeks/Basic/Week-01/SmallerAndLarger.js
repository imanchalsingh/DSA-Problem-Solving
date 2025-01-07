// Smaller and Larger time complexity is O(n) where n is the length of the array.
class Solution {
  // Function to get the count of elements in the array which are strictly
  // less than x and strictly more than x.
  getMoreAndLess(arr, x) {
    let smaller = 0;
    let larger = 0;
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] < x) {
        smaller++;
      } else if (arr[i] > x) {
        larger++;
      }
    }
    return [smaller, larger];
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.getMoreAndLess([1, 2, 3, 4, 5], 3)); // [2, 2]
console.log(solution.getMoreAndLess([1, 2, 3, 4, 5], 6)); // [5, 0]