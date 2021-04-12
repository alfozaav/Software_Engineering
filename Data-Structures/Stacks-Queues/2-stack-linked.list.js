class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.top = null;
    this.bottom = null;
    this.length = 0;
  }

  peek() {
    if (this.top) {
      return this.top.value;
    }
    return this.top;
  }

  push(value) {
    this.bottom = this.top;
    const node = new Node(value);
    this.top = node;
    this.top.next = this.bottom;
    this.length++;
  }

  pop() {
    delete this.top;
    this.top = this.bottom;
    this.bottom = this.top.next;
    this.length--;
  }
}

let myStack = new Stack();
console.log(myStack.peek());