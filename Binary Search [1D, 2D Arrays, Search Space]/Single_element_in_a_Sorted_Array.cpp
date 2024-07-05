// https://www.codingninjas.com/studio/problems/unique-element-in-sorted-array_1112654?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // TC -> O(n)
        // unordered_map<int, int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 1) return it.first;
        // }
        // return -1;



        // TC -> O(n)
        // int ans = 0;
        // for(auto it : nums){
        //     ans ^= it;
        // }
        // return ans;



        // TC -> O(n)
        // if(nums.size() ==1) return nums[0];
        // for(int i = 0; i < nums.size(); i++){
        //     if(i == 0){
        //         if(nums[i] != nums[i+1]) return nums[i];
        //     }
        //     else if(i == nums.size()-1){
        //         if(nums[i] != nums[i-1]) return nums[i];
        //     }
        //     else{
        //         if(nums[i] != nums[i+1] && nums[i] != nums[i-1]) return nums[i];
        //     }
        // }
        // return -1;

        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1, high = n-2;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            // eliminate left (element on right side)
            if((mid % 2 == 1 && nums[mid] == nums[mid-1]) || (mid % 2 == 0 && nums[mid] == nums[mid+1])){
                low = mid + 1;
            }
            else if((mid % 2 == 0 && nums[mid] == nums[mid-1]) || (mid % 2 == 1 && nums[mid] == nums[mid+1])){
                high = mid - 1;
            }
        }
        // dummy statement
        return -1;
    }
};