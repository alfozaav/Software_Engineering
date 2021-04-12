#include <bits/stdc++.h> 

using namespace std; 

class Node {
	public:
		int data;
        Node* prev;
		Node* next;
};

// Simple linked list with 3 nodes
int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	// Allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	// Asign data to nodes
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return 0;
};

// Print contents of a linked list
void printList(Node* n) { 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 

// Insert at Front
void push(Node** head_ref, int new_data)  {  
    /* 1. allocate node */
    Node* new_node = new Node();  
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);  
  
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;  
}  

// Insert at middle

void insertAfter(Node* prev_node, int new_data)   
{ 
    
    // 1. Check if the given prev_node is NULL  
    if (prev_node == NULL)   
    {   
        cout << "the given previous node cannot be NULL";   
        return;   
    }  
    
    // 2. Allocate new node 
    Node* new_node = new Node();  
    
    // 3. Put in the data  
    new_node->data = new_data;   
    
    // 4. Make next of new node as  
    // next of prev_node  
    new_node->next = prev_node->next;   
    
    // 5. move the next of prev_node 
    // as new_node  
    prev_node->next = new_node;   
}  

// Insert at End
void append(Node** head_ref, int new_data)   {   
    
    // 1. allocate node  
    Node* new_node = new Node();  
    
    // Used in step 5  
    Node *last = *head_ref;  
    
    // 2. Put in the data  
    new_node->data = new_data;   
    
    // 3. This new node is going to be   
    // the last node, so make next of   
    // it as NULL 
    new_node->next = NULL;   
    
    // 4. If the Linked List is empty,  
    // then make the new node as head  
    if (*head_ref == NULL)   
    {   
        *head_ref = new_node;   
        return;   
    }   
    
    // 5. Else traverse till the last node  
    while (last->next != NULL)   
        last = last->next;   
    
    // 6. Change the next of last node  
    last->next = new_node;   
    return;   
}   
