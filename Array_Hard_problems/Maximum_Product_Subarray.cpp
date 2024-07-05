// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/0?qa-rewrite=3336/print-all-valid-combinations-of-ip-address&show=3350&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-product-subarray
// https://leetcode.com/problems/maximum-product-subarray/description/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxm = INT_MIN;
	    long long prefixProd = 1;
	    long long suffixProd = 1;
	    for(int i = 0; i < n; i++){
	        if(prefixProd == 0) prefixProd = 1;
	        if(suffixProd == 0) suffixProd = 1;
	        
	        prefixProd *= arr[i];
	        suffixProd *= arr[n-i-1];
	        
	        maxm = max(maxm, max(prefixProd, suffixProd));
	    }
	    return maxm;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends