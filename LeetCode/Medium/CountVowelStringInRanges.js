var vowelStrings = function (words, queries) {
  const vowels = new Set(["a", "e", "i", "o", "u"]);
  const prefixSum = new Array(words.length + 1).fill(0);

  for (let i = 0; i < words.length; i++) {
    const word = words[i];
    const startsWithVowel = vowels.has(word[0]);
    const endsWithVowel = vowels.has(word[word.length - 1]);
    prefixSum[i + 1] =
      prefixSum[i] + (startsWithVowel && endsWithVowel ? 1 : 0);
  }

  const result = [];
  for (const [li, ri] of queries) {
    result.push(prefixSum[ri + 1] - prefixSum[li]);
  }

  return result;
};
