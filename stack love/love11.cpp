// Next Smaller Element
// https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // TC -> O(n)
    // Write your code here.
    // stack<int> stack;
    // vector<int> ans(n, 0);
    // stack.push(-1);
    // for(int i = n-1; i >= 0; i--){
    //     if(arr[i] > stack.top()){
    //         ans[i] = stack.top();
    //         stack.push(arr[i]);
    //     }
    //     else{
    //         while(stack.top() >= arr[i]){
    //             stack.pop();
    //         }
    //         ans[i] = stack.top();
    //         stack.push(arr[i]);
    //     }
    // }
    // return ans;

    vector<int> ans(n, 0);
    stack<int> stk;
    stk.push(-1);
    for(int i = n-1; i >= 0; i--){
        while(stk.top() >= arr[i]){
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(arr[i]);
    }
    return ans;
}