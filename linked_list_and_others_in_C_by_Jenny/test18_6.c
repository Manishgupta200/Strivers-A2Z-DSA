// DELETE FROM BEGINNING IN DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head, *newnode;

void create(){
    struct Node* temp;
    head = 0;
    int choice = 1;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }
}

void delFromBeg(){
    struct Node* temp;
    if(head == 0){
        printf("\nLIST IS EMPTY (UNDERFLOW OCCURED)");
    }
    else{
        temp = head;
        head = head->next;
        head->prev = 0;

        free(temp);
    }
}

void display(){
    struct Node* temp;
    int count = 0;
    temp = head;
    while(temp != 0){
        printf("%d - ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the doubly linked list: %d\n", count);
}

void main(){
    create();
    display();

    delFromBeg();
    display();
}