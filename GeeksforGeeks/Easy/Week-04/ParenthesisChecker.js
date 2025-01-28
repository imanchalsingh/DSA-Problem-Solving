class Solution {
  // Function to check if brackets are balanced or not.
  isParenthesisBalanced(s) {
    let prevLength;
    do {
      prevLength = s.length;
      s = s.replace(/\(\)|\{\}|\[\]/g, "");
    } while (s.length !== prevLength);

    return s.length === 0;
  }
}
