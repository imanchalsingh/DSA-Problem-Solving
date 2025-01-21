class Solution {
  // Function returns the second largest element
  getSecondLargest(arr) {
    let largest = -1;
    let secondLargest = -1;

    for (let i = 0; i < arr.length; i++) {
      if (arr[i] > largest) {
        secondLargest = largest;
        largest = arr[i];
      } else if (arr[i] > secondLargest && arr[i] !== largest) {
        secondLargest = arr[i];
      }
    }

    return secondLargest;
  }
}
