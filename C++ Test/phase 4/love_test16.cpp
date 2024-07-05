// Circular Linked List
// Deletion at any position
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = this;

    }

    // destructor
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data: " << val << endl;
    }
};

// insert just before the element
void insertNode(Node* &tail, int element, int d){
    // empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else{
        // non-empty list
        Node* curr = tail;
        
        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    // if list is empty
    if(tail == NULL){
        cout << "List is empty\n";
        return;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);

    cout << endl;
}

void deleteNode(Node* & tail, int value){
    // empty list
    if(tail == NULL){
        cout << "List is empty, check again\n";
        return;
    }
    else{
        // assuming the "value" is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node LL
        if(curr == prev){
            tail = NULL;
        }

        // >= 2 Node LL
        if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main(void){
    Node* node1 = new Node(12);
    // // cout << node1->data << " " << node1->next << endl;
    Node* tail = node1;
    print(tail);
    
    // Node* tail = NULL;
    insertNode(tail, 12, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 3, 7);
    print(tail);

    cout << "deletion\n";
    deleteNode(tail, 5);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    deleteNode(tail, 7);
    print(tail);

    deleteNode(tail, 12);
    print(tail);
    
    deleteNode(tail, 12);
    print(tail);
    return 0;
}