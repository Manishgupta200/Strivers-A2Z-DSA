// COUNT NUMBER OF ELEMENT IN THE LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head, *newnode, *temp;
    head = 0;
    int choice;
    int count = 0;
    while(choice){
        newnode = (struct Node* )malloc(sizeof(struct Node));
        newnode->next = 0;
        printf("Enter data: ");
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

    temp = head;
    while(temp != 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);
    return 0;
}