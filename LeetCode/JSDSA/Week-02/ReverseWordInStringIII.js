function reverseWordsInPlace(s) {
  const words = s.split(" ");
  const reversedWords = words.map((word) => word.split("").reverse().join(""));
  return reversedWords.join(" ");
}

// Example usage:
console.log(reverseWordsInPlace("Let's take LeetCode contest"));
console.log(reverseWordsInPlace("Mr Ding"));
