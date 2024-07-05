// Doubly Linked List
// Deletion of node at any position
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

    // destructor
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data: " << value << endl;
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

void insertAtBegin(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtLast(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);

    if(tail == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at begin
    if(position == 1){
        insertAtBegin(head, tail, d);
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
        insertAtLast(head, tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail){
    // delete from begin
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // delete at any middle or last
        // traversing
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        
        if(curr->next == NULL){
            tail = prev;
        }

        prev->next = curr->next;
        // curr->next->prev = prev;
        // curr->prev = NULL;
        curr->next = NULL;
        delete curr;        
    }
}

int main(void){
    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node*tail = NULL;
    print(head);
    
    // length of ll
    cout << "length: " << getLength(head) << endl;

    insertAtBegin(head, tail, 12);
    insertAtBegin(head, tail, 8);
    print(head);
    cout << "head: " << head->data << " " << " tail: " << tail->data << endl;
    cout << "length: " << getLength(head) << endl;

    insertAtLast(head, tail, 34);
    print(head);
    cout << "head: " << head->data << " " << " tail: " << tail->data << endl;
    cout << "length: " << getLength(head) << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head: " << head->data << " " << " tail: " << tail->data << endl;
    cout << "length: " << getLength(head) << endl;

    deleteNode(4, head, tail);
    print(head);
    cout << "head: " << head->data << " " << " tail: " << tail->data << endl;
    cout << "length: " << getLength(head) << endl;

    return 0;
}