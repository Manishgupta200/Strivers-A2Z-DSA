// https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021
// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

#include<bits/stdc++.h>
using namespace std;
// /********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

// ********************************/
void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    // TC -> O(N)
    // TC -> O(1)
    // Node* temp = head;
    // int zeroCount = 0;
    // int oneCount = 0;
    // int twoCount = 0;

    // while(temp != NULL){
    //     if(temp->data == 0) zeroCount++;
    //     else if(temp->data == 1) oneCount++;
    //     else if(temp->data == 2) twoCount++;
    //     temp = temp->next;
    // }

    // temp = head;
    // while(temp != NULL){
    //     if(zeroCount != 0){
    //         temp->data = 0;
    //         zeroCount--;
    //     }
    //     else if(oneCount != 0){
    //         temp->data = 1;
    //         oneCount--;
    //     }
    //     else if(twoCount != 0){
    //         temp->data = 2;
    //         twoCount--;
    //     }
    //     temp = temp->next;
    // }
    // return head;


    // 2nd method
    // data replacement is not allowed
    // TC -> O(N)
    // SC -> O(1)
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // create seperate list 0s, 1s, 2s
    Node* curr = head;
    while(curr != NULL){
        int val = curr->data;

        if(val == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(val == 1){
            insertAtTail(oneTail, curr);
        }
        else if(val == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // merge three sublist
    // is list not empty
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        // is list empty
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
