#linked list vs array (ArrayList)
# insert: O(n) O(n)
# prepend: O(1) O(n)
# append: O(1) O(1)
# search: O(n) O(1)

# remove at tail: O(n) O(1)
# middle: O(n) O(n)
# remove at head:  O(1) O(n)


class Node:
    def __init__ (self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self, data):
        newNode = Node(data)
        self.head = newNode
        self.tail = newNode

    def append(self, data):
        newNode = Node(data)
        self.tail.next = newNode
        self.tail = newNode

    
my_linked_list = LinkedList(2)