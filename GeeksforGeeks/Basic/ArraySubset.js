class Solution {
    isSubset(a, b) {
        const setA = new Set(a);

        for (let element of b) {
            if (!setA.has(element)) {
                return false;
            }
        }

        return true;
    }
}

const solution = new Solution();