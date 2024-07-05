// Linked list implementation by jenny
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* n){
    int count = 0;
    while(n != 0){
        printf("%d -> ", n->data);
        count++;
        n = n->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);
}

int main(){
    struct Node* head, *newnode, *temp;
    head = 0;
    int choice;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("\nDo you want to continue (0, 1): ");
        scanf("%d", &choice);
    }

    printList(head);
    return 0;
}