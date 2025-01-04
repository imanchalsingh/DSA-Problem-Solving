class Solution {
  peakElement(arr) {
    for (let i = 0; i < arr.length; i++) {
      if (
        (i === 0 || arr[i] > arr[i - 1]) &&
        (i === arr.length - 1 || arr[i] > arr[i + 1])
      ) {
        return i;
      }
    }
    return -1;
  }
}
