class Solution {
  makeEven(str) {
    const n = str.length;
    let lastDigit = str[n - 1];
    let swapIndex = -1;

    for (let i = 0; i < n - 1; i++) {
      if ((str[i] - "0") % 2 === 0) {
        if (str[i] < lastDigit) {
          swapIndex = i;
          break;
        }

        swapIndex = i;
      }
    }

    if (swapIndex === -1) return str;

    const result = str.split("");
    [result[swapIndex], result[n - 1]] = [result[n - 1], result[swapIndex]];

    return result.join("");
  }
}
