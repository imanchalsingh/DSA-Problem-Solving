class Solution {
    multiply(arr, n) {
        let product = 1;
        for (let i = 0; i < n; i++) {
            product *= arr[i];
        }
        return product;
    }
}

const solution = new Solution();
const arr = [1, 2, 3, 4];
const n = arr.length;
console.log(solution.multiply(arr, n));
