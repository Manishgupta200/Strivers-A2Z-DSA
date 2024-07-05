// https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;
// /****************************************************************

    // Following is the class structure of the Node class:

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

// *****************************************************************/
Node* middleNode(Node* head){
    // if list is empty or contain only one node
    if(head == NULL || head->next == NULL){
        return head;
    }

    // if list contain >= 2 node
    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;
    }
    return slow;
}

// int getLength(Node* head){
//     Node* temp = head;
//     int length = 0;
//     while(temp != NULL){
//         length++;
//         temp = temp->next;
//     }
//     return length;
// }

Node *findMiddle(Node *head) {
    // Write your code here
    // TC -> O(N) + O(N / 2)
    // int len = getLength(head);
    // int mid = len / 2;
    // int cnt = 0;
    // Node* temp = head;
    // while(mid--){
    //     temp = temp->next;
    // }
    // return temp;


    // 2nd method
    // TC -> O(N / 2)
    // SC -> O(1)
    return middleNode(head);
}

int main(){
    return 0;
}