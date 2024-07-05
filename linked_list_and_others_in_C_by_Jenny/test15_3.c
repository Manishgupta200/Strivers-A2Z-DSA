// Insertion at beginning, end and after that given position in unsorted linked list
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
    int count = 0;
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

    // insertion at beginning
    struct Node* insBeg;
    printf("\nEnter data that you want to insert at beginning of the linked list: ");
    insBeg = (struct Node* )malloc(sizeof(struct Node));
    insBeg->next = 0;
    scanf("%d", &insBeg->data);
    insBeg->next = head;
    head = insBeg;

    printList(head);

    // insertion at end
    struct Node* insEnd;
    printf("\nEnter data that you want to insert at the end of the linked list: ");
    insEnd = (struct Node* )malloc(sizeof(struct Node));
    // insEnd->next = 0;
    scanf("%d", &insEnd->data);

    temp = head;
    while(temp->next != 0){
        temp = temp->next;
    }
    temp->next = insEnd;
    insEnd->next = 0;

    // printList(head);
    temp = head;
    while(temp != 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);

    // insert after the given position
    struct Node* insInbtwn;
    int pos, i = 1;
    printf("\nEnter position where you want to insert element just after that element: ");
    scanf("%d", &pos);
    if(pos > count){
        printf("\nINVALID POSITION YOU ENTERED");
    }
    else{
        temp = head;
        while(i < pos){
            temp = temp->next;
            i++;
        }
        insInbtwn = (struct Node* )malloc(sizeof(struct Node));
        printf("\nEnter data that you want to insert in linked list just after position \"%d\" is: ", pos);
        scanf("%d", &insInbtwn->data);
        insInbtwn->next = temp->next;
        temp->next = insInbtwn;
    }

    printList(head);
    return 0;
}