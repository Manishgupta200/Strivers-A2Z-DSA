#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insertion at last
void insertionAtLast(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// print
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(void){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertionAtLast(tail, 12);
    print(head);

    insertionAtLast(tail, 15);
    print(head);
    return 0;
}