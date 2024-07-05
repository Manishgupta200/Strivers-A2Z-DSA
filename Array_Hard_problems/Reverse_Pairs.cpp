// https://leetcode.com/problems/reverse-pairs/description/
// https://practice.geeksforgeeks.org/problems/count-reverse-pairs/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-reverse-pairs
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // int count = 0;
    void merge(vector<int> &arr, int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         int left = l;
         int right = m+1;

         while(left <= m && right <= r){
             if(arr[left] <= arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         while(left <= m){
             temp.push_back(arr[left]);
             left++;
         }
         while(right <= r){
             temp.push_back(arr[right]);
             right++;
         }
         for(int i = l; i <= r; i++){
             arr[i] = temp[i - l];
         }
    }
    
    int countPairs(vector<int> &arr, int low, int mid, int high){
        int count = 0;
        int right = mid + 1; 
        for(int i = low; i <= mid; i++){
             while(right <= high && arr[i] > 2*arr[right]){
                 right++;
             }
             count = count + (right - (mid + 1));
         }
         return count;
    }
    
    int mergeSort(vector<int> &arr, int l, int r)
    {
        //code here
        int count = 0;
        // base case
        if(l >= r) return count;
        
        int mid = (l + r) / 2;
        count += mergeSort(arr, l, mid);
        count += mergeSort(arr, mid+1, r);
        
        count += countPairs(arr, l, mid, r);
        
        merge(arr, l, mid, r);
        return count;
    }
    
    int countRevPairs(int n, vector<int> arr) {
        // Code here
        // BRUTE
        // int count = 0;
        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(arr[i] > 2*arr[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        return mergeSort(arr, 0, n-1);
        // return count;
    }
}; 

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends