function MyStack() {
    this.arr = [];
    this.top = -1;
  }
  
  MyStack.prototype.push = function(x) {
    this.arr.push(x);
    this.top++;
  };
  
  MyStack.prototype.pop = function() {
    if (this.top === -1) return -1;
    this.top--;
    return this.arr.pop();
  };
  
  const stack = new MyStack();
  stack.push(10);
  stack.push(20);
  console.log(stack.pop());
  console.log(stack.pop());
  console.log(stack.pop());
  