// Search item in unordered linked list
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

void searchList(struct Node* n){
    int cnt = 1;
    int item;
    printf("\nEnter item to search on linked list that item exist or not: ");
    scanf("%d", &item);
    while(n != 0){
        if(item == n->data){
            printf("\nItem \"%d\" found on node number \"%d\"", item, cnt);
        }
        cnt++;
        n = n->next;
    }
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
        printf("\nDo you want to continue (1, 0): ");
        scanf("%d", &choice);
    }

    printList(head);

    searchList(head);
    return 0;
}