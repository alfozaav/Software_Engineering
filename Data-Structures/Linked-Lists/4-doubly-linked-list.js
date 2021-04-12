class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
    this.prev = null;
  }
}

class DoublyLinkedList {
  constructor(value) {
    this.head = new Node(value);
    this.tail = this.head;
    this.length = 1;
  }

  prepend(value) {
    const newNode = new Node(value);
    newNode.next = this.head;
    this.head.prev = newNode;
    this.head = newNode;
    this.length--;
    return this;
  }

  append(value) {
    const newNode = new Node(value);
    this.tail.next = newNode;
    newNode.prev = this.tail;
    this.tail = newNode;
    this.length++;
    return this;
  }

  search(index) {
    let currentNode = this.head;
    for (let i = 1; i <= index; i++) {
      currentNode = currentNode.next;
    }
    return currentNode;
  }

  insert(index, value) {
    if (index === 0) {
      this.prepend(value);
    } 
    let currentNode = this.traverseToIndex(index);
    const newNode = new Node(value);
    let holdingNode = currentNode.next;
    currentNode.next = newNode;
    newNode.next = holdingNode;
    newNode.prev = currentNode;
    this.length++;
    return this;
  }
  
  remove(index) {
    let currentNode = this.traverseToIndex(index);
    let nextToRemove = currentNode.next.next;
    if (index === this.length - 1) {
      this.tail = currentNode;
    }
    delete currentNode.next;
    currentNode.next = nextToRemove;
    if (index != this.length - 1) {
      nextToRemove.prev = currentNode;
    }
    this.length--;
    return this; 
  }

  showList() {
    let nodes = [];
    let currentNode = this.head;
    while (currentNode !== null) {
      nodes.push(currentNode.value);
      currentNode = currentNode.next;
    }
    return nodes;
  }

  traverseToIndex(index) {
    let currentNode = this.head;
    for (let i = 1; i < index; i++) {
      currentNode = currentNode.next;
    }
    return currentNode;
  }
}