var reverseStr = function (s, k) {
  let result = s.split("");
  for (let i = 0; i < s.length; i += 2 * k) {
    let start = i;
    let end = Math.min(i + k - 1, s.length - 1);
    while (start < end) {
      [result[start], result[end]] = [result[end], result[start]];
      start++;
      end--;
    }
  }
  return result.join("");
};
