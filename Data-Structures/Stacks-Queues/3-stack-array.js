class Stack {
  constructor() {
    this.stack = [];
  }

  peek() {
    if (this.stack.length === 0) {
      return null;
    }
    return this.stack[this.stack.length - 1];
  }

  push(value) {
    this.stack.push(value);
  }

  pop() {
    const value = this.stack.pop();
    return value;
  }
}

const myStack = new Stack();
myStack.push("Python");
myStack.push("Java");
myStack.push("Js");
myStack.pop()
myStack.pop()
console.log(myStack.peek());
