// Doubly Linked List
// Insert at begin
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtBegin(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main(void){
    Node* node1 = new Node(10);

    Node* head = node1;
    print(head);
    
    // length of ll
    cout << "length: " << getLength(head) << endl;

    insertAtBegin(head, 12);
    insertAtBegin(head, 8);
    print(head);
    cout << "length: " << getLength(head) << endl;
    return 0;
}