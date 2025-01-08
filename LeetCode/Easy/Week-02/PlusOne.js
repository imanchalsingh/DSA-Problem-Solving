var plusOne = function (digits) {
  for (let i = digits.length - 1; i >= 0; i--) {
    if (digits[i] < 9) {
      digits[i]++;
      return digits;
    } else {
      digits[i] = 0;
    }
  }
  digits.unshift(1);
  return digits;
};

console.log(plusOne([1, 2, 3, 4]));
console.log(plusOne([1, 2, 3]));
console.log(plusOne([1, 0, 4]));
console.log(plusOne([0, 3, 4]));
console.log(plusOne([1, 2, 3, 4, 5, 6, 7]));
