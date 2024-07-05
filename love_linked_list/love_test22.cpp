// https://www.codingninjas.com/codestudio/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&leftPanelTab=0
// https://leetcode.com/problems/linked-list-cycle/description/
#include <bits/stdc++.h> 
using namespace std;
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        };

bool isCircular(Node* head){
    // Write your code here.
    // TC -> O(N)
    // SC -> O(1)
    if(head == NULL){
        return true;
    }
    if(head->next == NULL){
        return false;
    }
    Node* slow = head, *fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            break;
        }
    }
    
    if(slow == fast && slow == head){
        return true;
    }

    return false; 
    
}

int main(){
    return 0;
}