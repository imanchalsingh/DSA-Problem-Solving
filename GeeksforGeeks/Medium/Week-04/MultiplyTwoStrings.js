class Solution {
  multiplyStrings(s1, s2) {
    s1 = s1.replace(/^0+/, "") || "0";
    s2 = s2.replace(/^0+/, "") || "0";

    if (s1 === "0" || s2 === "0") return "0";

    let negative = (s1[0] === "-") ^ (s2[0] === "-");
    if (s1[0] === "-" || s1[0] === "+") s1 = s1.slice(1);
    if (s2[0] === "-" || s2[0] === "+") s2 = s2.slice(1);

    const n = s1.length,
      m = s2.length;
    const result = Array(n + m).fill(0);

    for (let i = n - 1; i >= 0; i--) {
      for (let j = m - 1; j >= 0; j--) {
        const product = (s1[i] - "0") * (s2[j] - "0");
        const sum = product + result[i + j + 1];
        result[i + j + 1] = sum % 10;
        result[i + j] += Math.floor(sum / 10);
      }
    }

    let resultStr = result.join("").replace(/^0+/, "");

    return (negative ? "-" : "") + resultStr;
  }
}
