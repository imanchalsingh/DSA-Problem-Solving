var sortSentence = function (s) {
  const words = s.split(" ");

  words.sort((a, b) => a[a.length - 1] - b[b.length - 1]);

  const result = words.map((word) => word.slice(0, word.length - 1)).join(" ");

  return result;
};
