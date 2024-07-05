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

// insert at begin (pass by reference as we don't want to make a copy. We are doing in-place operation)
void insertAtBegin(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
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
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node* head = node1;
    print(head);

    insertAtBegin(head, 12);
    print(head);

    insertAtBegin(head, 15);
    print(head);

    return 0;
}