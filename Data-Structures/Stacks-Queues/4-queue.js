class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.first = null;
    this.last = null;
    this.length = 0;
  }

  peek() {
    if (this.first) {
      return this.first.value;
    }
    return null;
  }

  enqueue(value) {
    const node = new Node(value);
    if (this.length === 0) {
      this.first = node;
      this.last = node;
    } else {
      this.last.next = node;
      this.last = node;
    }
    this.length++;
  }

  dequeue() {
    this.first = this.first.next; // the reference gets lose and the garbage collector manages it
    this.length--;
  }
}

const myQueue = new Queue();
myQueue.enqueue("Js");
myQueue.enqueue("Python");
myQueue.enqueue("Java");
myQueue.dequeue();
myQueue.enqueue("Pollo")
myQueue.dequeue();
myQueue.dequeue();
console.log(myQueue.peek());