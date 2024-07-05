// Queue Reversal
// https://practice.geeksforgeeks.org/problems/queue-reversal/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    private:
    // TC -> O(n)
    // SC -> O(n)
    void solve(queue<int>& q){
        if(q.empty()){
            return;
        }
        int num = q.front();
        q.pop();
        
        solve(q);
        
        q.push(num);
    }
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        // stack<int> st;
        // while(!q.empty()){
        //     st.push(q.front());
        //     q.pop();
        // }
        // while(!st.empty()){
        //     q.push(st.top());
        //     st.pop();
        // }
        // return q;
        
        solve(q);
        return q;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends