// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
#include<bits/stdc++.h>
using namespace std;

    bool check(vector<int>& nums) {
        // if more than one pair exist return false
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]) count++;
        }
        if(nums[n-1] > nums[0]) count++;

        return (count <= 1);
    }

int main(void){
    vector<int> nums = {3,4,5,1,2};
    cout << check(nums);
    return 0;
}