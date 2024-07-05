// https://leetcode.com/problems/sort-list/description/
// https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1
// https://www.codingninjas.com/codestudio/problems/mergesort-linked-list_630514?leftPanelTab=0&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb
#include<bits/stdc++.h>
using namespace std;
// /**
//  * Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//  */

class Solution {
private:
    //MergeSort Function O(n*logn)
    ListNode* mergeList(ListNode* head1, ListNode* head2){
        ListNode* ptr = new ListNode(-1);
        ListNode* curr = ptr;
        ListNode* left = head1;
        ListNode* right = head2;

        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                curr->next = left;
                left = left->next;
            }
            else{
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }
        //for unqual length linked list
        while(left != NULL){
            curr->next = left;
            left = left->next;
            curr = curr->next;
        }
        while(right != NULL){
            curr->next = right;
            right = right->next;
            curr = curr->next;
        }
        return ptr->next;
    }

public:
    ListNode* sortList(ListNode* head) {
        // base case, if list is empty or contain only one node
        if(head == NULL || head->next == NULL){
            return head;
        }

        // 2 pointer approach
        ListNode* temp = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = NULL;

        ListNode* head1 = sortList(head);
        ListNode* head2 = sortList(slow);

        //mergelist Function call
        return mergeList(head1, head2);
    }
};