// The Celebrity Problem
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        // BRUTE FORCE
        // TC -> O(n^2)
        // SC -> O(1)
        // for(int i = 0; i < n; i++){
        //     bool rowCheck = true;
        //     bool colCheck = true;
            
        //     // check for row
        //     for(int j = 0; j < n; j++){
        //         if(M[i][j] != 0){
        //             rowCheck = false;
        //         }
        //         if(i != j){
        //             if(M[j][i] != 1){
        //                 colCheck = false;
        //             }
        //         }
        //     }
        //     if(rowCheck == true && colCheck == true){
        //         return i;
        //     }
        // }
        // return -1;
        
        
        stack<int> stack;
        for(int i = 0; i < n; i++){
            stack.push(i);
        }
        
        // Since 2 <= N <= 3000
        while(stack.size() > 1){
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            
            if(M[a][b] == 1){
                stack.push(b);
            }
            else{
                stack.push(a);
            }
        }
        int rowCheck = true;
        int colCheck = true;
        int el = stack.top();
        for(int i = 0; i < n; i++){
            if(M[el][i] == 1) rowCheck = false;
            if(el != i){
                if(M[i][el] == 0) colCheck = false;
            }
        }
        if(rowCheck == true && colCheck == true){
            return el;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends