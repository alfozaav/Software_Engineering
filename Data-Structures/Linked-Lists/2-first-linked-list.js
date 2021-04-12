// 10-->5-->16

let firstlinkedList = {
  head: {
    value: 10,
    next: {
      value: 5, 
      next: {
        value: 16,
        next: null,
      }
    }
  }
};

console.log(firstlinkedList.head.next.next.value);