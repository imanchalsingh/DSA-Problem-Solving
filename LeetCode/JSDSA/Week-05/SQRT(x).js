var mySqrt = function (x) {
  if (x === 0 || x === 1) return x;

  let left = 1,
    right = x,
    ans = 0;

  while (left <= right) {
    let mid = Math.floor(left + (right - left) / 2);
    let square = mid * mid;

    if (square === x) return mid;
    else if (square < x) {
      ans = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return ans;
};
