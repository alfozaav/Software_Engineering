// Elements in the array are one next to the other in memory.
// Pros: Fast lookups, fast push/pop, ordered.
// Cons: Slow inserts, slow deletes, fixed size (if using static arrays).

const elements = ['a', 'b', 'c', 'd'];

// push O(1) can be O(n) (realocate memory).
elements.push('e');

// pop O(1)
elements.pop();

// unshift O(n)
elements.unshift('x');

// splice O(n)
elements.splice(2, 0, 'alien');

// look O(1)
elements[2]

console.log(elements);