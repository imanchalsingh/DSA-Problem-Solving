function reverseWords(s) {
  const words = s.trim().split(/\s+/).reverse();
  return words.join(" ");
}

// Example usage:
console.log(reverseWords("  hello world  "));
console.log(reverseWords("a good   example"));
console.log(reverseWords("  This   is   a test  "));
