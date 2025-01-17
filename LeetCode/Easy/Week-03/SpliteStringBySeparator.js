var splitWordsBySeparator = function (words, separator) {
  let result = [];

  for (let word of words) {
    let splitParts = word.split(separator).filter((part) => part !== "");
    result.push(...splitParts);
  }

  return result;
};
