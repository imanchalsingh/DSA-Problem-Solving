class Solution {
    getFloorAndCeil(x, arr) {
         let floor = -1, ceil = -1;

    for (let num of arr) {
        if (num <= x) {
            floor = Math.max(floor, num);
        }
        if (num >= x) {
            ceil = ceil === -1 ? num : Math.min(ceil, num);
        }
    }

    return [floor, ceil];
    }
}
