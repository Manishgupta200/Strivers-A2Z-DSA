// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        // sliding window method
        // TC -> O(N)
        // SC -> O(1)
        long long sum = 0;
        long long maxSum = 0;
        
        for(int i = 0; i < K; i++){
            sum += Arr[i];
        }
        
        maxSum = max(maxSum, sum);
        for(int i = 1; i <= N-K; i++){
            sum -= Arr[i-1];
            sum += Arr[i+K-1];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends