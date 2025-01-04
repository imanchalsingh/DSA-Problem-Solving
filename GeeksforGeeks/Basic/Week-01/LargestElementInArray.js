class Solution {
    largest(arr) {
        return Math.max(...arr);
    }
}

const solution = new Solution();
console.log(solution.largest([1, 3, 7, 2, 8]));
