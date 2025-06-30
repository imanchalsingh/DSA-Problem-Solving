var triangleType = function (nums) {
  nums.sort((a, b) => a - b);

  if (nums[0] + nums[1] <= nums[2]) {
    return "none";
  }

  if (nums[0] === nums[1] && nums[1] === nums[2]) {
    return "equilateral";
  } else if (nums[0] === nums[1] || nums[1] === nums[2]) {
    return "isosceles";
  } else {
    return "scalene";
  }
};

// Tests
console.log(triangleType([2, 2, 2]));
console.log(triangleType([2, 0, 6]));
console.log(triangleType([2, 3, 1]));
