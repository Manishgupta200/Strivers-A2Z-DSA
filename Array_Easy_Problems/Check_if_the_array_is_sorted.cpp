// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-if-an-array-is-sorted
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
#include<bits/stdc++.h>
using namespace std;

    bool arraySortedOrNot(int arr[], int n) {
        // code here
        // Time Complexity: O(N)
        // Space Complexity: O(1)
        
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
        
    }