// DOUBLY LINKED LIST IMPLIMENTATION
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head, *newnode;

void create(){
    head = 0;
    struct Node* temp;
    int choice = 1;
    
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        newnode->prev = 0;
        newnode->next = 0;
        printf("Enter data: ");
        scanf("%d", &newnode->data);
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

void display(){
    struct Node* temp;
    temp = head;
    while(temp != 0){
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main(){
    create();
    display();
    getch();
}