class Solution {
  subarraySum(arr, target) {
    let start = 0;
    let currentSum = 0;

    for (let end = 0; end < arr.length; end++) {
      currentSum += arr[end];

      while (currentSum > target && start <= end) {
        currentSum -= arr[start];
        start++;
      }

      if (currentSum === target) {
        return [start + 1, end + 1];
      }
    }

    return [-1];
  }
}

const solutions = new Solution();
let arr = [1,2,3,4,5,6,7];
let target = 12
console.log(solutions.subarraySum(arr, target));
