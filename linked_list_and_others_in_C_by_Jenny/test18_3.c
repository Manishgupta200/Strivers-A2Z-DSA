// INSERTION AT BEGINNING, END, INSERT AT POSITION IN DOUBLY LINKED LIST
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

void insertatbeg(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the beginning of the doubly linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    // if list is empty
    if(head == 0){
        head = newnode;
    }
    // if list is not empty
    else{
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertatend(){
    struct Node* newnode;
    newnode = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert at the end of doubly linked list: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;

    // if list is empty
    if(head == 0){
        head = newnode;
    }
    // if list is not empty
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

int display(){
    struct Node* temp;
    int count = 0;
    temp = head;
    while(temp != 0){
        printf("%d - ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number to element in the doubly linked list: %d", count);
}

void main(){
    create();
    display();
    insertatbeg();
    display();
    insertatend();
    
    // print & count
    struct Node* temp;
    int count = 0;
    temp = head;
    while(temp != 0){
        printf("%d - ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number to element in the doubly linked list: %d", count);

    // Insertion at position
    int pos, i = 1;
    printf("\nEnter position where you want to insert data in doubly linked list: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > count + 1){
        printf("INVALID POSITION\n");
    }
    else if(pos == 1){
        insertatbeg();
    }
    else if(pos == count + 1){
        insertatend();
    }
    else{
        struct Node* newnode, *temp;
        temp = head;
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter data that you want to insert at position \"%d\" in doubly linked list: ", pos);
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

    display();
}

// time complexity
// Insert at beginning: O(1)
// Insert at end: O(1)
// Insert at any specific position: O(n)