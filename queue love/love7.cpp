// Reverse First K elements of Queue
// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    int count = 0;
    stack<int> st;
    while(!q.empty() && count++ != k){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    int n = q.size();
    for(int i = 0; i < (n-k); i++){
        int num = q.front();
        q.pop();
        q.push(num);
    }
    return q;
}
