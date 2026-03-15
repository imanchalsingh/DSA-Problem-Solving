let arr = [34, 21, 54, 67, 32, 4, 98];
arr.sort((a, b) => a - b);
console.log(arr);
let target = 34;
// linear search
for (let i = 0; i < arr.length; i++) {
    if (arr[i] == target) {
        console.log(i);
    }
}