// Insert An Element At Its Bottom In A Given Stack
// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
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

int main(void){
    stack<int> stk;
    stk.push(3);
    // stk.push(4);
    // stk.push(5);
    // stk.push(6);
    reverseStack(stk);

    // while(!stk.empty()){
    //     cout << stk.top() << " ";
    //     stk.pop();
    // }
    return 0;
}