class Solution {
  lastIndex(S) {
      for (let i = S.length - 1; i >= 0; i--) {
          if (S[i] === '1') {
              return i;
          }
      }
      return -1;
  }
}

// Example usage:
const solution = new Solution();
console.log(solution.lastIndex("00001")); 
console.log(solution.lastIndex("0"));