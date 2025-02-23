// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
// https://leetcode.com/problems/palindrome-linked-list/description/
//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>
class Solution{
  private:
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverseList(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        // TC -> O(N)
        // SC -> O(N)
        // vector<int> v;
        // Node* temp = head;
        // while(temp != NULL){
        //     v.push_back(temp->data);
        //     temp = temp->next;
        // }
        
        // int i = 0;
        // int j = v.size()-1;
        // while(i < j){
        //     if(v[i] != v[j]){
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        // return true;
        
        
        
        // 2nd method
        // TC -> O(N)
        // SC -> O(1)
        // base case
        if(head->next == NULL){
            return true;
        }
        
        // get mid of ll
        Node* middle = getMid(head);
        
        // reverse ll after mid
        Node* temp = middle->next;
        middle->next = reverseList(temp);
        
        // compare both halves
        Node* head1 = head;
        Node* head2 = middle->next;
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        // don't want to allow changes in original ll
        temp = middle->next;
        middle->next = reverseList(temp);
        
        return true;

    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends