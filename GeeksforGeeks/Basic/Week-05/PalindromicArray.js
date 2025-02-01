class Solution {
  // Function to check if a number is a palindrome
  isPalindrome(num) {
    let str = num.toString();
    return str === str.split("").reverse().join("");
  }

  isPalinArray(arr) {
    for (let num of arr) {
      if (!this.isPalindrome(num)) return false;
    }
    return true;
  }
}
