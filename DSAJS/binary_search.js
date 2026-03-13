let arr = [3, 14, 65, 87, 98, 102] // sorted array

let target = 98;
let start = 0;
let end = arr.length - 1;

while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    // target === mid
    if (arr[mid] === target) {
        console.log(mid);
        break;
    } else if (arr[mid] < target){
        start = mid + 1;
    } else if (arr[mid]>target){
        end = mid-1;
    } else{
        console.log("Not working this method, debug this")
    }
}