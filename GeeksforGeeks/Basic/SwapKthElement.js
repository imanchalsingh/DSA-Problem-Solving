function swapKthElement(arr, k) {
    let n = arr.length;

    if (k <= 0 || k > n) {
        console.log("Invalid k value");
        return arr;
    }

    [arr[k - 1], arr[n - k]] = [arr[n - k], arr[k - 1]];

    return arr;
}

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let k = 3;
console.log(swapKthElement(arr, k));
