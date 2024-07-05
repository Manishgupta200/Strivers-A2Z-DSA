// Reverse list in K groups
// https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
// https://leetcode.com/problems/reverse-nodes-in-k-group/
#include <bits/stdc++.h> 
using namespace std;

// /****************************************************************
    // Following is the Linked List node structure

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


Node* kReverse(Node* head, int k) {
    // Write your code here.
    // TC -> O(N)
    // SC -> O(N)
    // base case
    if(head == NULL){
        return NULL;
    }

    // reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // aage ka recursion dekh lega
    if(next != NULL){
        head->next = kReverse(next, k);
    }

    // return head of the reversed list
    return prev;
}

int main(void){
    return 0;
}