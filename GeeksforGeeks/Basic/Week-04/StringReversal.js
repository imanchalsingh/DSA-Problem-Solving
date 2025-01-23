class Solution {
  //Function to reverse a string.
  reverseString(s) {
    let result = "";
    let seen = new Set();

    for (let i = s.length - 1; i >= 0; i--) {
      let char = s[i];
      if (char !== " " && !seen.has(char)) {
        result += char;
        seen.add(char);
      }
    }
    return result;
  }
}
