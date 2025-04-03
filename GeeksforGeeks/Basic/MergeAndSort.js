class Solution {
  mergeNsort(arr1, arr2) {
    return [...new Set([...arr1, ...arr2])].sort((a, b) => a - b);
  }
}

const solution = new Solution();

let arr1 = [3, 1, 4, 2, 6, 5];
let arr2 = [7, 3, 9, 2, 8, 6];

console.log(solution.mergeNsort(arr1, arr2));
