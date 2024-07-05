// https://leetcode.com/problems/kth-missing-positive-number/description/
https://www.codingninjas.com/studio/problems/kth-missing-element_893215?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // TC -> O(N)
        // SC -> O(1)
        // for(int i = 0; i < arr.size(); i++){
        //     if(arr[i] <= k){
        //         k++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // return k;


        // 2nd method
        // TC -> O(log n)
        // SC -> O(1)
        // int n = arr.size();
        // int low = 0;
        // int high = n-1;

        // while(low <= high){
        //     int mid = low + (high - low) / 2;

        //     int missing = arr[mid] - (mid + 1);
        //     if(missing < k){
        //         low = mid + 1;
        //     }
        //     else{
        //         high = mid - 1;
        //     }
        // }
        // // int more = k - (arr[high] - (high + 1));
        // // return (arr[high] + more);   // overflow error
        // return high + k + 1;   
        // // return low + k;  // sinec; high + 1 == low



        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int missing  = arr[mid] - (mid + 1);

            if(missing >= k) high = mid - 1;
            else low = mid + 1;
        }
        if(high == -1) return k;
        int more = k - (arr[high] - (high + 1));
        return (arr[high] + more);
    }
};