let arr = [21, 34, 56, 87, 98];
let start = 0;

let target = 87;
let end = arr.length - 1;

function recursiveBinary(arr, start, end) {
    let mid = Math.floor((start + end) / 2);
    if (arr[mid] === target) {
        console.log(mid)
    } else if (arr[mid] < target) {
        recursiveBinary(arr, mid + 1, end)
    } else {
        recursiveBinary(arr, start, mid - 1)
    }
}

recursiveBinary(arr, start, end);