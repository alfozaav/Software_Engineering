// Linked list have nodes, each node have the data that stores and a pointer  
// that points to the next node.
// The first node its the head and the last one is the tail (apples and pears).
//                    apples
// (memory direction) 1782 --> grapes
//                             3421 --> pears
//                                       6512 --> null

// A pointer is a reference to something in memory.

// Pros: fast insertion, fast deletion, ordered, flexible size.
// Cons: slow lookup, more memory.

let obj1 = {burbi: 'pollito'};
let obj2 = obj1;
delete obj1;
obj1.burbi = 'más pollito';
console.log(obj2);