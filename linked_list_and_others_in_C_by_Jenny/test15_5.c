// Deletion at beginning, end and from specified position in unsorted linked list
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

    printList(head);

    if(head == 0){
        printf("LIST IS EMPTY: UNDER-FLOW OCCURED");
    }
    else{
        // delete from beginning
        printf("\nAfter deletion from beginning, linked list be like;\n");
        temp = head;
        head = temp->next;
        free(temp);
        
        printList(head);

        // delete from end
        printf("\nAfter deletion from end, linked list be like;\n");
        struct Node* prevNode;
        temp = head;
        while(temp->next != 0){
            prevNode = temp;
            temp = temp->next;
        }
        if(temp == head){
            head = 0;
        }
        else{
            prevNode->next = 0;
        }
        free(temp);

        // printList(head);
        temp = head;
        while(temp != 0){
            printf("%d -> ", temp->data);
            count++;
            temp = temp->next;
        }
        printf("NULL");
        printf("\nTotal number of element in the linked list: %d", count);

        // delete from specified position
        struct Node *nextnode;
        int pos, i = 1;
        printf("\nEnter position from where you want to delete item: ");
        scanf("%d", &pos);
        
        if(pos <=0 || pos > count){
            printf("INVALID POSITION YOU ENTERED");
        }
        else{
            if(pos == 1){
                nextnode = head;
                head = head->next;
            }
            else{
                temp = head;
                while(i < pos - 1){
                    temp = temp->next;
                    i++;
                }
                nextnode = temp->next;
                temp->next = nextnode->next;
            }
            free(nextnode);
            
            printList(head);
        }
    }

    return 0;
}