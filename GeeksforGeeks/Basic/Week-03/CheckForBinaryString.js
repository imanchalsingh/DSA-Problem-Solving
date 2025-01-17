class Solution {
  isBinary(s) {
    for (let char of s) {
      if (char !== "0" && char !== "1") {
        return false;
      }
    }
    return true;
  }
}
