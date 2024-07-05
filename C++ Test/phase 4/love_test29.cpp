// https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=0&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
// https://leetcode.com/problems/merge-two-sorted-lists/description/
//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* solve(Node* head1, Node* head2){
    // head1 - small
    // if head1 list have only one node, point its next to entire second list
    if(head1->next == NULL){
        head1->next = head2;
        return head1;
    }
    
    Node* curr1 = head1;
    Node* next1 = head1->next;
    
    Node* curr2 = head2;
    Node* next2 = NULL;
    
    while(next1 != NULL && curr2 != NULL){
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            // add node in-between the node of first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // updating pointer
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            // go one step ahead in linked list
            curr1 = next1;
            next1 = next1->next;
            
            if(next1 == NULL){
                curr1->next = curr2;
                return head1;
            }
        }
    }
    return head1;
}

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    // TC -> O(N + M)
    // SC -> O(1)
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    
    if(head1->data <= head2->data){
        return solve(head1, head2);
    }
    else{
        return solve(head2, head1);
    }
    

}  