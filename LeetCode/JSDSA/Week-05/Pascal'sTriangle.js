var generate = function (numRows) {
  let triangle = [];

  for (let rowNum = 0; rowNum < numRows; rowNum++) {
    let row = new Array(rowNum + 1).fill(1);

    for (let j = 1; j < rowNum; j++) {
      row[j] = triangle[rowNum - 1][j - 1] + triangle[rowNum - 1][j];
    }

    triangle.push(row);
  }

  return triangle;
};
