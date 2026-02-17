let input = [2, 11, 43, 7];
let target = 9;
let n = input.length;
// output = [0,1]

for (let i = 0; i < n; i++) {
  //   console.log(input[i]);
  for (let j = i + 1; j < n; j++) {
    if (input[i] + input[j] === target) {
      console.log([i, j]);
      break;
    }
  }
}
