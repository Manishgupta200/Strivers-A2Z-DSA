// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int ans;
    int mountain(vector<int> &arr, int s, int e){
        if(s >= e){
            return -1;
        }
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]){
            ans = mid + 1;
            mountain(arr, mid + 1, e);
        }
        else{
            mountain(arr, s, mid);
        }
        return ans;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int s = 0, e = arr.size()-1;
        // int mid = s + (e-s)/2;
        // while(s < e){
        //     if(arr[mid] < arr[mid + 1]){
        //         s = mid + 1;
        //     }
        //     else{
        //         e = mid;    // important
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return mid;

        // 2nd method
        return mountain(arr, 0, arr.size()-1);
    }
};