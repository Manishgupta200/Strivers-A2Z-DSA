// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++
int dp[101][100001];
class Solution{   
private:
//     bool helper(int n, vector<int>arr, int sum){
//         // base case
//         if(sum == 0) return true;
//         if(n == 0) return false;
//         if(dp[n][sum] != -1) return dp[n][sum];
        
        
//         if(arr[n-1] <= sum){
//             dp[n][sum] =  (helper(n-1, arr, sum - arr[n-1]) || helper(n-1, arr, sum));
//             return dp[n][sum];
//         }
//         else{
//             dp[n][sum] =  helper(n-1, arr, sum);
//             return dp[n][sum];
//         }
//         return dp[n][sum];
//     }

    bool helper(vector<int>arr, int sum, int tempSum, int i){
        // base case
        if(sum == tempSum) return true;
        if(i >= arr.size()) return false;
        if(dp[i][tempSum] != -1) return dp[i][tempSum];
        
        
        if(arr[i] <= sum){
            dp[i][tempSum] = (helper(arr, sum, tempSum + arr[i], i+1) || helper(arr, sum, tempSum, i+1));
            return dp[i][tempSum];
        }
        else{
            dp[i][tempSum] = helper(arr, sum, tempSum, i+1);
            return dp[i][tempSum];
        }
        return dp[i][tempSum];
    }
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        // int n = arr.size();
        // memset(dp, -1, sizeof(dp));
        // return helper(n, arr, sum);
        
        memset(dp, -1, sizeof(dp));
        return helper(arr, sum, 0, 0);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends