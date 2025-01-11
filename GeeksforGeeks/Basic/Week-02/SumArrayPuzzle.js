class Solution {
  sumArray(arr) {
    const totalSum = arr.reduce((sum, num) => sum + num, 0);

    for (let i = 0; i < arr.length; i++) {
      arr[i] = totalSum - arr[i];
    }

    return arr;
  }
}

// Example uses
const solution = new Solution();
