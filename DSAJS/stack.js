let arr = [];
let currentSize = arr.length;

const push = (val) => {
    arr[currentSize] = val;
    currentSize++;
}
const pop = () => {
    if (currentSize > 0) {
        currentSize--;
        arr.length = currentSize;
    }
}
push(20);
push(220);
push(26);
push(38);
pop();
console.log(arr);

