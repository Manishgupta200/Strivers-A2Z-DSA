// INSERT AT BEGINNING, END, AT POSITION (OPTIMIZED), AFTER THAT POSITION (OPTIMIZED) IN DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head, *tail;

void create(){
    head = 0;
    struct Node* newnode;
    int choice = 1;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if(head == 0){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }
}

void display(){
    struct Node* temp;
    temp = head;
    while(temp != 0){
        printf("%d - ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int count(){
    struct Node* temp;
    temp = head;
    int count = 0;
    while(temp != 0){
        count++;
        temp = temp->next;
    }
    printf("\nTotal number of element in the linked list: %d", count);
    return count;
}

void insertAtBeg(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the beginning of the linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    if(head == 0){
        head = newnode;
    }
    else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertAtEnd(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the end of the linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    if(head == 0){
        head = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertAtPos(int ct){
    int pos, i = 1;
    printf("\nEnter position where you want to insert: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > ct + 1){
        printf("\nTNVALID\n");
    }
    else if(pos == 1){
        insertAtBeg();
    }
    else if(pos == ct + 1){
        insertAtEnd();
    }
    else{
        struct Node* newnode, *temp;
        temp = head;
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter data that you want to insert at position \"%d\" of the doubly linked list: ", pos);
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        while(i < pos - 1){
            temp = temp->next;
            i++;
        }

        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

// Insertion after that position in doubly linked list
void insertAfterPos(int ct2){
    int pos, i = 1;
    printf("\nEnter position where you want to enter just after that position: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > ct2){
        printf("\nINVALID\n");
    }
    else if(pos == 0){
        insertAtBeg();
    }
    else if(pos == ct2){
        insertAtEnd();
    }
    else{
        struct Node* newnode, *temp;
        temp = head;
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter data that you want to insert after tha position \"%d\" in doubly linked list: ", pos);
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        while(i < pos){
            temp = temp->next;
            i++;
        }
        
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void main(){
    create();
    display();
    // count();

    // insertAtBeg();
    // display();
    // count();

    // insertAtEnd();
    // display();

    // int ct = count();
    // insertAtPos(ct);
    // display();

    int ct2 = count();
    insertAfterPos(ct2);
    display();
    count();
}


// time complexity
// Insert at beginning: O(1)
// Insert at end: O(1)
// Insert at any specific position: O(n)
// Insertion after the position: O(n)