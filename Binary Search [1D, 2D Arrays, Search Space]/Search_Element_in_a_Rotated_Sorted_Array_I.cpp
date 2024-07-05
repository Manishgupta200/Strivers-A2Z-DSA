// https://leetcode.com/problems/search-in-rotated-sorted-array/description/?source=submission-ac
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Without duplicates
// TC -> O(log n)
// SC -> O(1)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    // int getPivot(vector<int>& arr, int k){
    //     int s = 0, e = arr.size()-1;
    //     int mid = s + (e - s) / 2;
    //     while(s < e){
    //         if(arr[mid] >= arr[0]){
    //             s = mid + 1;
    //         }
    //         else{
    //             e = mid;
    //         }
    //         mid = s + (e - s) / 2;
    //     }
    //     return s;
    // }

    // int binarySearch(vector<int>& arr, int s, int e, int k){
    //     int mid = s + (e - s) / 2;
    //     while(s <= e){
    //         if(arr[mid] == k) return mid;
    //         else if(k > arr[mid]) s = mid + 1;
    //         else e = mid - 1;
    //         mid = s + (e - s) / 2;
    //     }
    //     return -1;
    // }

    int search(vector<int>& nums, int target) {
        // int n = nums.size();
        // int pivot = getPivot(nums, target);
        // if(target >= nums[pivot] && target <= nums[n-1]){
        //     return binarySearch(nums, pivot, n-1, target);
        // }
        // else{
        //     return binarySearch(nums, 0, pivot-1, target);
        // }


        // 2nd method
        // TC -> O(log n)
        // SC -> O(1)
        int n = nums.size();
        int s = 0, e = n-1;
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(nums[mid] == target){
                return mid;
            }
            
            // left sorted
            if(nums[s] <= nums[mid]){
                if(target >= nums[s] && target <= nums[mid]) e = mid - 1;
                else s = mid + 1;
            }
            else{
            // right sorted
                if(target >= nums[mid] && target <= nums[e]) s = mid + 1;
                else e = mid - 1;
            }
        }
        return -1;
    }
};