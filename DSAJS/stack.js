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
// string push in array
str = "Anchal";
str = str.split("");
push(str);

console.log(str);

