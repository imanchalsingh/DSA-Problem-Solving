class Solution {
  binarysearch(arr, k) {
    let left = 0,
      right = arr.length - 1;
    let result = -1;

    while (left <= right) {
      let mid = Math.floor(left + (right - left) / 2);

      if (arr[mid] === k) {
        result = mid;
        right = mid - 1;
      } else if (arr[mid] < k) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    return result;
  }
}
