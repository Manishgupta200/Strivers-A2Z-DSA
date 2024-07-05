// IMPLEMENT QUEUE USING STACK
// https://leetcode.com/problems/implement-queue-using-stacks/description/
#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
stack<int> st;
stack<int> temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        // Since, All the calls to pop and peek are valid.
        // while(!st.empty()){
        //     temp.push(st.top());
        //     st.pop();
        // }
        // int num;
        // if(!temp.empty()){
        //     num = temp.top();
        //     temp.pop();
        // }
        // while(!temp.empty()){
        //     st.push(temp.top());
        //     temp.pop();
        // }
        // return num;

        int val = peek();
        temp.pop();
        return val;
    }
    
    int peek() {
        // Since, All the calls to pop and peek are valid.
        // while(!st.empty()){
        //     temp.push(st.top());
        //     st.pop();
        // }
        // int num;
        // if(!temp.empty()){
        //     num = temp.top();
        // }
        // while(!temp.empty()){
        //     st.push(temp.top());
        //     temp.pop();
        // }
        // return num;


        if(temp.empty()){
            while(!st.empty()){
                temp.push(st.top());
                st.pop();
            }
        }
        return temp.top();
    }
    
    bool empty() {
        return st.empty() && temp.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */