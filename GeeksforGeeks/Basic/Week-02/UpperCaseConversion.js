class Solution {
  convert(s) {
    const words = s.split(" ");
    const titleCaseWords = words.map(
      (word) => word.charAt(0).toUpperCase() + word.slice(1).toLowerCase()
    );
    return titleCaseWords.join(" ");
  }
}
