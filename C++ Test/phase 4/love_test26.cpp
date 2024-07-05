// https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTab=1
// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

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

Node *removeDuplicates(Node *head)
{
    // Write your code here
    // TC -> O(N^2)
    // SC -> O(1)
    // TLE occurs
    // if(head == NULL) return NULL;
    
    // Node* curr = head, *curr2 = head;
    // while(curr != NULL && curr->next != NULL){
    //     curr2 = curr;
        
    //     while(curr2->next != NULL){
    //         if(curr->data == curr2->next->data){
    //             Node* temp = curr2->next;
    //             curr2->next = curr2->next->next;
    //             temp->next = NULL;
    //             delete(temp);
    //         }
    //         else{
    //             curr2 = curr2->next;
    //         }
    //     }
    //     curr = curr->next;
    // }
    // return head;

    
    // 2nd method
    // TC -> O(N)
    // SC -> O(N)
    if(head == NULL) return NULL;
    
    unordered_map<int, int> mp;
    Node* curr = head;
    Node* prev = NULL;
    
    while(curr != NULL){
        mp[curr->data]++;
        if(mp[curr->data] > 1){
            prev->next = curr->next;
            Node* nodeToDelete = curr;
            curr = curr->next;
            nodeToDelete->next = NULL;
            delete(nodeToDelete);
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

int main(void){

    return 0;
}