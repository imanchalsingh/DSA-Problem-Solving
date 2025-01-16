class Solution {
  longest(arr) {
    let longest = "";
    let maxLength = 0;

    for (let name of arr) {
      if (name.length > maxLength) {
        longest = name;
        maxLength = name.length;
      }
    }

    return longest;
  }
}
