// Detect cycle in a linked list
// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1
// https://leetcode.com/problems/linked-list-cycle-ii/description/
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
//User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    private:
    Node* isCircular(Node* head){
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow) return slow;
        }
        return NULL;
    }
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        if(head == NULL){
            return -1;
        }
        Node*slow = head;
        Node* intersection = isCircular(head);
        
        if(intersection == NULL) return -1;
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow->data;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends