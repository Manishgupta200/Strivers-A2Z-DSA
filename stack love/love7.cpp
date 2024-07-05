// Reverse Stack Using Recursion
// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
// TC -> O(n^2)
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& stk, int num){
    if(stk.empty()){
        stk.push(num);
        return;
    }

    int val = stk.top();
    stk.pop();

    insertAtBottom(stk, num);

    stk.push(val);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}