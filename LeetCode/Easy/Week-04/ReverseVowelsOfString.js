var reverseVowels = function (s) {
  let ans = "";
  let vowelsIdx = [];
  const vowels = "AEIOUaeiou";

  for (let i = 0; i < s.length; i++) {
    if (vowels.includes(s[i])) vowelsIdx.push(i);
  }

  for (let i = 0; i < s.length; i++) {
    if (vowels.includes(s[i])) ans += s[vowelsIdx.pop() || 0];
    else ans += s[i];
  }

  return ans;
};
