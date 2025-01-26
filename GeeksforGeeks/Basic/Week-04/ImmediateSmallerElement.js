class Solution {
    immediateSmaller(arr) {
        for (let i = 0; i < arr.length - 1; i++) {

    if (arr[i] > arr[i + 1]) {

      arr[i] = arr[i + 1];
    } else {

      arr[i] = -1;
    }
  }

  arr[arr.length - 1] = -1;

  return arr;
    }
}