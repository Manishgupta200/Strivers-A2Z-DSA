// INSERTION IN SORTED LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* temp){
    int count = 0;
    while(temp!= 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);
}

int main(){
    struct Node* head, *newnode, *temp;
    head = 0;
    int choice;
    int count = 0;
    printf("Enter data in ascending order,\n");
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
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }

    temp = head;
    while(temp!= 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);

    // insertion
    struct Node* insData, *pre, *n;
    insData = (struct Node* )malloc(sizeof(struct Node));
    printf("\nEnter data that you want to insert in sorted linked list: ");
    scanf("%d", &insData->data);
    insData->next = 0;

    n = head;
    while(n->next != 0){
        n = n->next;
    }
    // just insert
    if(head == 0){
        head = insData;
    }
    // insert at begenning or insert if same number insert
    else if(insData->data < head->data || insData->data == head->data){
        insData->next = head;
        head = insData;
    }
    // insert at last
    else if(n->data < insData->data){
        n->next = insData;
    }
    // insert in sorted form except 1st and last position
    else{   
        temp = head;
        while(temp->data < insData->data){
            pre = temp;
            temp = temp->next;
        }
        insData->next = pre->next;
        pre->next = insData;
    }

    printList(head);
    return 0;
}