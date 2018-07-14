#ifndef Node_h
#define Node_h

// Define the Node struct below
struct Node{
    int data;
    Node* next;


};


//Define the append function below
void append (Node* head, int value){
     Node* n = new Node();
    n -> data = value;
    n -> next = NULL;

    Node* curr = head;

    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = n;
}


// Do not write any code below this line
#endif
