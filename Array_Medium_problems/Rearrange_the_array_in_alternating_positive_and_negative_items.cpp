// https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=array-of-alternate-ve-and-ve-nos
// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	   // TC -> O(N) + O(min(pos, neg)) + O(leftovers) = O(2N) = O(N)   [since, O(min(pos, neg)) + O(leftovers) = O(N)]
	    vector<int> pos;
	    vector<int> neg;
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] >= 0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    
        if(pos.size() > neg.size()){
            for(int i = 0; i < neg.size(); i++){
                arr[2*i] = pos[i];
                arr[2*i + 1] = neg[i];
            }
            int index = neg.size() * 2;
            for(int i = neg.size(); i < pos.size(); i++){
                arr[index] = pos[i];
                index++;
            }
        }
        else{
            for(int i = 0; i < pos.size(); i++){
                arr[2*i] = pos[i];
                arr[2*i + 1] = neg[i];
            }
            int index = pos.size() * 2;
            for(int i = pos.size(); i < neg.size(); i++){
                arr[index] = neg[i];
                index++;
            }
        }
	   
	   
	   
	   
	   
	   //2nd Method
	   //int i = 0;
	   //int posIndex = 0;
	   //int negIndex = 0;
	   //while(i < n && posIndex < pos.size() && negIndex < neg.size()){
	   //    arr[i++] = pos[posIndex++];
	   //    arr[i++] = neg[negIndex++];
	   //}
	   
	   //while(negIndex < neg.size()){
	   //    arr[i++] = neg[negIndex++];
	   //}
	   //while(posIndex < pos.size()){
	   //    arr[i++] = pos[posIndex++];
	   //}
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends