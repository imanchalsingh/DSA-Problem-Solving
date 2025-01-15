class Solution {
  firstAlphabet(str) {
    let words = str.split(" ");
    let result = words.map((word) => word[0]).join("");
    return result;
  }
}
