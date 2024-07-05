// Interleave the First Half of the Queue with Second Half
// https://practice.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
private:
    // void pushIntoSt(queue<int>& q, int n, stack<int>& st){
    //     int i = 0;
    //     while(i++ != (n/2)){
    //         st.push(q.front());
    //         q.pop();
    //     }
    // }    
public:
    vector<int> rearrangeQueue(queue<int> &q){
        // Since 2 <= N <= 105, queue Q of N integers of even length
        // stack<int> st;
        // int n = q.size();
        
        // // step-1 : first half element from q to st
        // pushIntoSt(q, n, st);
        
        // // st to q
        // while(!st.empty()){
        //     q.push(st.top());
        //     st.pop();
        // }
        
        // // dequeue first half element and enqueue them
        // int i = 0;
        // while(i++ != (n/2)){
        //     int num = q.front();
        //     q.pop();
        //     q.push(num);
        // }
        
        // // push first half element from q to st
        // pushIntoSt(q, n, st);
        
        // vector<int> ans;
        // // Interleave the elements of queue and stack. 
        // while(!st.empty() && !q.empty()){
        //     ans.push_back(st.top());
        //     st.pop();
        //     ans.push_back(q.front());
        //     q.pop();
        // }
        // return ans;
        
        
        
        // Another approach
        int n = q.size();
        queue<int> temp;
        
        int i = 0;
        while(i++ != (n/2)){
            temp.push(q.front());
            q.pop();
        }
 
        
        while(!temp.empty()){
            q.push(temp.front());
            q.push(q.front());
            q.pop();
            
            temp.pop();
        }
        
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends