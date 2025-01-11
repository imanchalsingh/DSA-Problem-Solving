class Solution {
    // Function to remove duplicates from the given array.
    removeDuplicates(arr) {
         if (arr.length === 0) {
            return 0;
        }

        let i = 1;

        for (let j = 1; j < arr.length; j++) {
            if (arr[j] !== arr[j - 1]) {
                arr[i] = arr[j];
                i++; 
            }
        }

        return i; 
    }
}