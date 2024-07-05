// Doubly Linked List
// Insert at any position
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

void insertAtLast(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at begin
    if(position == 1){
        insertAtBegin(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // insert at last
    if(temp->next == NULL){
        insertAtLast(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
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

    Node*tail = node1;
    insertAtLast(tail, 34);
    print(head);
    cout << "length: " << getLength(head) << endl;

    insertAtPosition(tail, head, 5, 100);
    print(head);
    cout << "length: " << getLength(head) << endl;
    return 0;
}