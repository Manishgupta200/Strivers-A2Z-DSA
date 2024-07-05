// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    
    long long int merge(long long arr[], long long low, long long mid, long long high){
        vector<long long> temp;
        // low...mid
        // mid+1...high
        long long left = low;
        long long right = mid+1;
        long long inv_count = 0;
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
        
        return inv_count;
    }
    
    long long int mS(long long arr[], long long low, long long high){
        // Base case
        // if(low >= high) return;
        
        long long mid = (low + high) / 2;
        long long inv_count = 0;
        if(high > low){
            inv_count += mS(arr, low, mid);
            inv_count += mS(arr, mid+1, high);
            inv_count += merge(arr, low, mid, high);
        }
        return inv_count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long ans = mS(arr, 0, N-1);
        return ans;
    }

};