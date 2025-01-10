class Solution {
  leftRotate(arr, d) {
    const n = arr.length;
    d = d % n;
    const reverse = (arr, l, r) => {
      while (l < r) {
        [arr[l], arr[r]] = [arr[r], arr[l]];
        l++;
        r--;
      }
    };
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    return arr;
  }
}
