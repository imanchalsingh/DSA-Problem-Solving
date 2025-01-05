class Solution {
    maxNtype(arr) {
        let n = arr.length;
        let dips = 0;
        let peaks = 0;

        for (let i = 0; i < n; i++) {
            let next = arr[(i + 1) % n];
            if (arr[i] > next) dips++;
            if (arr[i] < next) peaks++;
        }

        if (dips === 0 && peaks === n - 1) return 1;
        if (peaks === 0 && dips === n - 1) return 2;
        if (dips === 1 && peaks > 0) return 4;
        if (peaks === 1 && dips > 0) return 3;

        return -1;
    }
}

// Example Usage:
const solution = new Solution();
console.log(solution.maxNtype([2, 1, 5, 4, 3])); 
console.log(solution.maxNtype([3, 4, 5, 1, 2])); 
console.log(solution.maxNtype([1, 2, 3, 4, 5]));
console.log(solution.maxNtype([5, 4, 3, 2, 1]));
