// Detect and remove loop from ll
// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0&campaign=YouTube_codestudio_lovebabbar28thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_codestudio_lovebabbar28thjan
#include<bits/stdc++.h>
using namespace std;
// /*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

// *************************************************/
Node* isCircular(Node* head){
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        Node* slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return slow;
        }
        return NULL;

}

Node* findFirstNode(Node* head){
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        Node* slow = head;
        Node* intersection = isCircular(head);
        
        if(intersection == NULL){
            return NULL;
        }
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
}

Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL || head->next == NULL){
            return NULL;
    }
    Node* startOfNode = findFirstNode(head);
        
    if(startOfNode == NULL){
        return head;
    }

    Node* temp = startOfNode;
        
    while(temp->next != startOfNode){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

int main(void){

    return 0;
}