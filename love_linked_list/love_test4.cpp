// insert at any position
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insert at begin
void insertAtBegin(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at last
void insertionAtLast(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insertion at random position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insertion at begin
    if(position == 1){
        insertAtBegin(head, d);
        return;
    }
    
    Node* temp = head;
    // traversing
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // insertion at last
    if(temp->next == NULL){
        insertionAtLast(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

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
    // cout << node1->data << endl << node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertionAtLast(tail, 12);
    print(head);

    insertionAtLast(tail, 15);
    print(head);

    insertAtPosition(tail, head, 4, 20);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    return 0;
}