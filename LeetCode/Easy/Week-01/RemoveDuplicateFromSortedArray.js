// Remove Duplicates from Sorted Array time complexity: O(n), space complexity: O(1)
var removeDuplicates = function (nums) {
    if (nums.length === 0) return 0;
    let i = 0;
    for (let j = 1; j < nums.length; j++) {
        if (nums[j] !== nums[i]) {
        i++;
        nums[i] = nums[j];
        }
    }
    return i + 1;
};

// Tests
console.log(removeDuplicates([1, 1, 2]));
console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));
console.log(removeDuplicates([1, 1, 1]));
console.log(removeDuplicates([1, 2, 3]));