// Design a stack that supports getMin() in O(1) time and O(1) extra space
// https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems%3Fsource%3Dyoutube&campaign=Codestudio_Lovebabbar&utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Lovebabbar&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://leetcode.com/problems/min-stack/description/
#include<bits/stdc++.h>
using namespace std;

class SpecialStack {
    public:
    // // TC -> O(1)
    // // SC -> O(n)
    // stack<int> st, min_st;
    // void push(int data) {
    //     // Implement the push() function.
    //     if(st.empty() || data <= min_st.top()){
    //         min_st.push(data);
    //     }
    //     st.push(data);
    // }

    // void pop() {
    //     // Implement the pop() function.
    //     if(!st.empty()){
    //         if(st.top() == min_st.top()){
    //             min_st.pop();
    //         }
    //         st.pop();
    //     }
    // }

    // int top() {
    //     // Implement the top() function.
    //     if(!st.empty()){
    //         return st.top();
    //     }
    // }

    // int getMin() {
    //     // Implement the getMin() function.
    //     if(!min_st.empty()){
    //         return min_st.top();
    //     }
    // }  



    // TC -> O(1)
    // SC -> O(1)
    stack<int> s;
    int mini;
    void push(int data) {
        // Implement the push() function.
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data < mini){
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    void pop() {
        // Implement the pop() function.
        if(s.empty()){
            // underflow
        }
        else{
            int curr = s.top();
            if(curr > mini){
                s.pop();
            }
            else{
                int val = 2*mini - curr;
                s.pop();
                mini = val;
            }
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        else{
            int curr = s.top();
            if(curr < mini){
                return mini;
            }
            else{
                return curr;
            }
        }
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        else{
            return mini;
        }
    }
};