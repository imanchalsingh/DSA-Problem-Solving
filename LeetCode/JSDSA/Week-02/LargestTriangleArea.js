var largestTriangleArea = function (points) {
  let maxArea = 0;

  for (let i = 0; i < points.length; i++) {
    for (let j = i + 1; j < points.length; j++) {
      for (let k = j + 1; k < points.length; k++) {
        let p1 = points[i];
        let p2 = points[j];
        let p3 = points[k];

        let area =
          Math.abs(
            p1[0] * (p2[1] - p3[1]) +
              p2[0] * (p3[1] - p1[1]) +
              p3[0] * (p1[1] - p2[1])
          ) / 2;

        maxArea = Math.max(maxArea, area);
      }
    }
  }

  return maxArea;
};

// Tests
console.log(largestTriangleArea([1, 2, 3]));
console.log(largestTriangleArea([10, 10, 3]));
console.log(largestTriangleArea([1, 2, 10]));
console.log(largestTriangleArea([1, 10, 10]));
