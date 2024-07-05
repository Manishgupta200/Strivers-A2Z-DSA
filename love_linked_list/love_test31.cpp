// https://leetcode.com/problems/split-linked-list-in-parts/
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
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int size = len / k;
        int rem = len % k;
        
        temp = head;

        for(int i = 0; i < k; i++){
            ListNode* end = temp;
            if(rem > 0){
                int count = size;
                while(count--){
                    end = end->next;
                }
                ListNode* x = end->next;
                end->next = NULL;
                ans.push_back(temp);
                temp = x;
                rem--;
            }
            else{
                if(size == 0){
                    ans.push_back(NULL);
                }
                else{
                    int count = size - 1;
                    while(count--){
                        end = end->next;
                    }
                    ListNode* x = end->next;
                    end->next = NULL;
                    ans.push_back(temp);
                    temp = x;
                }
            }
        }
        return ans;
    }
};