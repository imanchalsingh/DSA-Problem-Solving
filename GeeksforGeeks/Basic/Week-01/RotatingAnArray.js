// Rotating an array time complexity: O(n) space complexity: O(1)
// Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.
class Solution {
  leftRotate(arr, d) {
    const n = arr.length;
    d = d % n;
    for (let i = 0; i < d; i++) {
      this.leftRotate(arr);
    }
  }
}
