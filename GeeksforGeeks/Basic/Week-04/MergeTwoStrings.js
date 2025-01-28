class Solution {
  //Function to merge two strings.
  merge(S1, S2) {
    let result = "";
    let i = 0;
    let j = 0;

    while (i < S1.length && j < S2.length) {
      result += S1[i++];
      result += S2[j++];
    }
    if (i < S1.length) {
      result += S1.slice(i);
    }
    if (j < S2.length) {
      result += S2.slice(j);
    }

    return result;
  }
}
