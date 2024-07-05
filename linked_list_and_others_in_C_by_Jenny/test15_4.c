// Insertion at any position perfectly in unsorted linked list
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
    printf("\nTotal number of element in the linked list: %d", count);
}

int main(){
    struct Node* head, *newnode, *temp;
    head = 0;
    int choice;
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
    int count = 0;
    while(temp != 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);

    struct Node* insAll, *prevNode;
    int pos, i = 1;
    printf("\nEnter position where you want to insert element: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > count + 1){
        printf("\nINVALID POSITION");
    }
    else{
        temp = head;
        insAll = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter element: ");
        scanf("%d", &insAll->data);
        insAll->next = 0;

        // insert at beginning case
        if(pos == 1){
            insAll->next = head;
            head = insAll;
        }
        // insert at specific position case
        else{
            while(i < pos){
                prevNode = temp;
                temp = temp->next;
                i++;
            }
            insAll->next = prevNode->next;
            prevNode->next = insAll;
        }

        printList(head);
    }
    return 0;
}