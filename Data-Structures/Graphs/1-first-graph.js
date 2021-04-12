// Check 1.png in the resources
// We can build a graph in diferent ways

// Edge List. Show the conexions
const graphEdgeList = [[0, 2], [2, 3], [2, 1], [1, 2]]; 
// 0 is conected with 2 and 2 is conected with 0

// Adjacent List
// We show the node (key) and the others node that are conected to the key
const graphAdjacentList = {
  0: [2],
  1: [2, 3],
  2: [0, 1, 3],
  3: [1, 2]
};

// Adjacent Matrix
// The matrix only has 0s and 1s, 0 is not conected and 1 is for conected
const graphAdjacentMatrix = [
  [0, 0, 1, 0], 
  [0, 0, 1, 1],
  [1, 1, 0, 1],
  [0, 1, 1, 0],
];