class Solution {
  findSum(s) {
    let sum = 0;
    let num = "";

    for (let i = 0; i < s.length; i++) {
      if (!isNaN(s[i]) && s[i] !== " ") {
        num += s[i];
      } else {
        if (num !== "") {
          sum += parseInt(num, 10);
          num = "";
        }
      }
    }

    if (num !== "") {
      sum += parseInt(num, 10);
    }

    return sum;
  }
}

// Test Cases
const solution = new Solution();
console.log(solution.findSum("1abc23"));
console.log(solution.findSum("geeks4geeks"));
console.log(solution.findSum("abc123xyz"));
console.log(solution.findSum("12ab34cd56"));
console.log(solution.findSum("abcd"));
