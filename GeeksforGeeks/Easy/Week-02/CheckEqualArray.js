class Solution {
  checkEqual(a, b) {
    // Step 1: Check lengths
    if (a.length !== b.length) {
      return false;
    }

    const freqMap = new Map();

    for (let num of a) {
      freqMap.set(num, (freqMap.get(num) || 0) + 1);
    }

    for (let num of b) {
      if (!freqMap.has(num)) {
        return false;
      }
      freqMap.set(num, freqMap.get(num) - 1);
      if (freqMap.get(num) === 0) {
        freqMap.delete(num);
      }
    }

    return freqMap.size === 0;
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.checkEqual([1, 2, 3, 4], [4, 3, 2, 1]));
console.log(solution.checkEqual([1, 2, 3, 4], [4, 3, 2, 5]));
console.log(solution.checkEqual([1, 1, 2, 2], [2, 2, 1, 1]));
console.log(solution.checkEqual([1, 1, 2, 3], [1, 2, 2, 1]));
