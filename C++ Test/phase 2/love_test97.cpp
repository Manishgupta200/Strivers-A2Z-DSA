// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long inv_count = 0;
    
    void merge(long long arr[], long long low, long long mid, long long high){
        vector<long long> temp;
        // low...mid
        // mid+1...high
        long long left = low;
        long long right = mid+1;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
                inv_count = inv_count + (mid - left + 1);
            }
        }
    
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
    
        for(int i = low; i <= high; i++){
            arr[i] = temp[i - low];
        }
        
    }
    
    void mS(long long arr[], long long low, long long high){
        // Base case
        // if(low >= high) return;
        
        long long mid = (low + high) / 2;
        if(high > low){
            mS(arr, low, mid);
            mS(arr, mid+1, high);
            merge(arr, low, mid, high);
        }
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mS(arr, 0, N-1);
        return inv_count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends