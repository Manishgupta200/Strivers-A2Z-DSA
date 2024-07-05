// Circular Linked List
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;

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

int main(void){
    Node* node1 = new Node(12);
    cout << node1->data << " " << node1->next << endl;
    
    return 0;
}