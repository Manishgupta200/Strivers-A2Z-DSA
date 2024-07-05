// Deletion at any position perfectly in unsorted linked list 2nd method
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* temp){
    int count = 0;
    while(temp != 0){
        count++;
        printf("%d -> ", temp->data);
        temp = temp->next;
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

    // printList(head);

    temp = head;
    while(temp != 0){
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL");
    printf("\nTotal number of element in the linked list: %d", count);

    // deletion
    struct Node* nextNode, *prevNode;
    int pos, i = 1;
    printf("\nEnter position from where you want to delete item from that particular position: ");
    scanf("%d", &pos);
    temp = head;
    nextNode = head->next;
    if(pos <= 0 || pos > count){
        printf("INVALID POSITION YOU ENTERED");
    }
    else{
        if(pos == 1){
            head = nextNode;
        }
        else{
            while(i < pos){
                prevNode = temp;
                temp = nextNode;
                nextNode = nextNode->next;
                i++;
            }
            prevNode->next = nextNode;
        }
        temp->next = 0;
        free(temp);

        printList(head);
    }

    return 0;
}