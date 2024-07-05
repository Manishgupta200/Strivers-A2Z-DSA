// Lecture 45: Linked List Questions: Reverse LL and find Middle of LL
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0
// https://leetcode.com/problems/reverse-linked-list/description/
//{ Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    private:
    // function return head of the reversed ll
    Node* recursive1(Node* head){
        // base case
        // if ll is empty or contain only one node
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        Node* chotaHead = recursive1(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return chotaHead;
    }
    
    // void reverse(Node* &head, Node* curr, Node* prev){
    //     // base case
    //     if(curr == NULL){
    //         head = prev;
    //         return;
    //     }
        
    //     Node* forward = curr->next;
    //     reverse(head, forward, curr);
    //     curr->next = prev;
    // }
    
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // iterative way
        // TC -> O(N)
        // SC -> O(1)
        // if list is empty of contains only one node
        // if(head == NULL || head->next == NULL){
        //     return head;
        // }
        
        // Node* prev = NULL;
        // Node* curr = head;
        // Node* forward = NULL;
        
        // while(curr != NULL){
        //     forward = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = forward;
        // }
        // // return head of reversed list
        // return prev;
        
        
        // 2nd method recursive way
        // TC -> O(N)
        // SC ->O(N), using recursive stack space
        // Node* prev = NULL;
        // Node* curr = head;
        // reverse(head, curr, prev);
        // return head;
        
        
        // 3rd method recursive way
        // TC -> O(N)
        // SC ->O(N), using recursive stack space
        return recursive1(head);
    }
    
};
    


//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends