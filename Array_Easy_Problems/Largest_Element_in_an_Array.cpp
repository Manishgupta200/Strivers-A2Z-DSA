// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
#include<bits/stdc++.h>
using namespace std;

    int largest(vector<int> &arr, int n)
    {
        // Time Complexity: O(N*log(N))
        // Space Complexity: O(n)
        
        // sort(arr.begin(), arr.end());
        // return arr[n-1];
        
        // 2nd method
        // Time Complexity: O(N)
        // Space Complexity: O(1)
        
        int maxm = arr[0];
        for(int i = 0; i < n; i++){
            // maxm = max(maxm, arr[i]);
            if(maxm < arr[i]){
                maxm = arr[i];
            }
        }
        return maxm;
    }