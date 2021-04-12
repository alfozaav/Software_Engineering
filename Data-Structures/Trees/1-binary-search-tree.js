class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
    this.parent = null;
    this.level;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
    this.height = 0;
  }

  insert(data) {
    const newNode = new Node(data);
    // if it is the first node then it will be the root
    if (this.root === null) {
      this.root = newNode;
      this.height = 1;
      newNode.level = 1;
      return true;
    }
    
    // Inserting in another place
    let currentNode = this.root;
    let levelsCounters = 1;

    while (true) {
      levelsCounters++;
      // to the left
      if (newNode.data < currentNode.data) {
        // if there's not node to the left
        if (currentNode.left === null) {
          currentNode.left = newNode;
          newNode.parent = currentNode;
          newNode.level = levelsCounters;
          // check the height vs the levelsCounter
          if (levelsCounters > this.height) this.height = levelsCounters;
          return true;
        }
        // if there's a node to the left
        currentNode = currentNode.left;
        continue;
      }

      // to the right
      if (newNode.data > currentNode.data) {
        // if there's not a node to the left
        if (currentNode.right === null) {
          currentNode.right = newNode;
          newNode.parent = currentNode;
          newNode.level = levelsCounters;
          // check the height vs the levelsCounter
          if (levelsCounters > this.height) this.height = levelsCounters;
          return true;
        }

        // if there's a node to the right
        currentNode = currentNode.right;
        continue;
      }
      // if the node to insert already exists
      return false;
    }
  }

  remove(data) {
    this.heightAfterRemove = 0;
    const nodeToRemove = this.search(data);
    // first case. No children
    if (!nodeToRemove.left && !nodeToRemove.right) {
      // we check if it's the left or the right node
      if (nodeToRemove.parent.left === nodeToRemove) {
        nodeToRemove.parent.left = null;
      } else {
        nodeToRemove.parent.right = null;
      } 
      // en este caso no tenemos que cambiar niveles de ningún nodo, puesto que 
      // el nodo eliminado no tiene hijos
      return;
    }

    // second case. One child
    // comprobamos que tenga uno, y sólo un hijo
    if (!nodeToRemove.left ^ !nodeToRemove.right) {
      // revisamos si el hijo de nodeToRemove es el izquierdo o el derecho
      // En este caso el nodo hijo del nodo eliminado pasa a ocupar su lugar y por
      // lo tanto también que cambia su nivel (ahora debe tener el nivel del padre eliminado)
      if (nodeToRemove.left) {
        nodeToRemove.left.level = nodeToRemove.level; // Cambiamos el nivel del nodo
        nodeToRemove.left.parent = nodeToRemove.parent;
        nodeToRemove.parent.right = nodeToRemove.left;
      } else {
        nodeToRemove.right.level = nodeToRemove.level; // Cambiamos el nivel del nodo
        nodeToRemove.right.parent = nodeToRemove.parent;
        nodeToRemove.parent.left = nodeToRemove.right;
      }
      
    }

    // third case. Two childs
    if (nodeToRemove.left && nodeToRemove.right) {
      // buscamos el nodo más a la izquierda
      let leftMostNode = nodeToRemove.right;
      while (leftMostNode.left) {
        leftMostNode = leftMostNode.left;
      }

      // revisamos si el nodo a la derecha de nodeToRemove no tiene nodos a la izquierda
      if (leftMostNode === nodeToRemove.right) { 
        // En este caso el nodo más a la izquierda puede tener un subarbol a su derecha
        // por lo que tenemos que cambiar todos los niveles de sus hijos (se reducen en 1)
        leftMostNode.level = leftMostNode.parent.level; 
        
        this.changeTreeLevels(nodeToRemove.right);
        
        leftMostNode.parent = nodeToRemove.parent;
        nodeToRemove.parent.left = leftMostNode;

        nodeToRemove.left.parent = leftMostNode;
        leftMostNode.left = nodeToRemove.left;

        leftMostNode.level = leftMostNode.parent.level + 1;
        return;
      }
      this.changeTreeLevels(nodeToRemove.right);
      // Le asignamos al nodo el nivel de su padre
      leftMostNode.parent.left = leftMostNode.right
      if (leftMostNode.right) leftMostNode.right.parent = leftMostNode.parent;

      leftMostNode.parent = nodeToRemove.parent;
      nodeToRemove.parent.left = leftMostNode;

      leftMostNode.left = nodeToRemove.left;
      nodeToRemove.left.parent = leftMostNode;
      leftMostNode.right = nodeToRemove.right;
      nodeToRemove.right.parent = leftMostNode;

      leftMostNode.level = leftMostNode.parent.level + 1;
    }

    this.maxHeight(this.root);
  }

  changeTreeLevels(node) {
    if (node) {
      node.level -= 1;
      // console.log(`Nodo: ${node.data} Level: ${node.level} ParentLevel: ${node.parent.level}`);
      this.changeTreeLevels(node.left);
      this.changeTreeLevels(node.right);
    }
  }

  // O(log N) in a balanced BST
  search(data) {
    let currentNode = this.root;
    while (currentNode) {
      if (data === currentNode.data) return currentNode;
  
      if (data < currentNode.data) currentNode = currentNode.left;
      else currentNode = currentNode.right;
    }

    return false;
  }

  static inOrderTraversal(node) {
    if (node) {
      this.inOrderTraversal(node.left);
      console.log(`value=${node.data} level=${node.level}`);
      this.inOrderTraversal(node.right);
    }
  }

  preOrderTraversal(node) {
    if (node) {
      console.log(node.data);
      this.preOrderTraversal(node.left);
      this.preOrderTraversal(node.right);
    }
  }

  postOrderTraversal(node) {
    if (node) {
      this.postOrderTraversal(node.left);
      this.postOrderTraversal(node.right);
      console.log(node.data);
    }
  }

  maxHeight(node) {
    if (node) {
      if (node.level > this.heightAfterRemove) this.heightAfterRemove = node.level;
      this.maxHeight(node.left);
      this.maxHeight(node.right);
      this.height = this.heightAfterRemove;
    }
  }
}

const myTree = new BinarySearchTree();
myTree.insert(27);
myTree.insert(19);
myTree.insert(34);
myTree.insert(10);

myTree.remove(19);
console.log(myTree.root.left.data);

// Ignorar esto
// Función para mostrar de forma más gráfica el arbol
function traverse(node) {
  const tree = { value: node.data };
  tree.left = node.left === null ? null : traverse(node.left);
  tree.right = node.right === null ? null : traverse(node.right);
  return tree;
}
// ˆ.log(JSON.stringify(traverse(myTree.root)));