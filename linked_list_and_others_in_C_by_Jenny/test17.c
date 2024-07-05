// REVERSE IN LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* temp){
    int count = 0;
    while(temp != 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d\n", count);
}

int main(){
    struct Node* head, *newnode, *temp;
    head = 0;
    int choice;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        newnode->next = 0;
        printf("Enter number: ");
        scanf("%d", &newnode->data);

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }

    printList(head);

    // reversing the linked list
    struct Node* prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode != 0){
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;

    printList(head);

    return 0;
}