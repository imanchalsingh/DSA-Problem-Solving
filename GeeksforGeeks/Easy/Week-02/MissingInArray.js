class Solution {
  // Function to find the missing number in the array.
  missingNumber(arr) {
    let n = arr.length + 1;
    let xorAll = 0;
    let xorArr = 0;
    for (let i = 1; i <= n; i++) {
      xorAll ^= i;
    }

    for (let num of arr) {
      xorArr ^= num;
    }

    return xorAll ^ xorArr;
  }
}
