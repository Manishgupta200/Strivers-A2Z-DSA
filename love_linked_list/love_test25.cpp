// Remove duplicate from sorted linked list
// https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=1&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan
// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
#include<bits/stdc++.h>
using namespace std;

// /************************************************************

    // Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
// ************************************************************/
// TC -> O(N)
// SC -> O(1)
Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head == NULL) return NULL;

    Node* curr = head;
    while(curr != NULL){
        if(curr->next != NULL && curr->data == curr->next->data){
            Node* nodeToDelete = curr->next;
            curr->next = curr->next->next;

            nodeToDelete->next = NULL;
            delete(nodeToDelete);
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

int main(void){
    return 0;
}