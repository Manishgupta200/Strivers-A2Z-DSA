// https://www.codingninjas.com/codestudio/problems/next-greater-permutation_6929564?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://leetcode.com/problems/next-permutation/description/
// https://practice.geeksforgeeks.org/problems/next-permutation5226/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=next-permutation

#include<bits/stdc++.h>
using namespace std;
// TC -> O(3N)
// SC -> O(1), as not using any extra space
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(), nums.end());

        int n = nums.size();
        int index = -1;
        // longer prefix match
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        // if permut is already the last permutation then return the lowest possible order array. i.e, first array
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // find someone > 1 but the smallest one
        for(int i = n-1; i > index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        reverse(nums.begin() + index + 1, nums.end());
    }
};