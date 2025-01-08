class MyQueue {
  constructor() {
    this.front = 0;
    this.rear = 0;
    this.arr = new Array(100005);
  }

  //Function to push an element x in a queue.
  push(x) {
    this.arr[this.rear] = x;
    this.rear++;
  }

  //Function to pop an element from queue and return that element.
  pop() {
    if (this.front === this.rear) {
      return -1;
    }
    const x = this.arr[this.front];
    this.front++;
    return x;
  }
}
