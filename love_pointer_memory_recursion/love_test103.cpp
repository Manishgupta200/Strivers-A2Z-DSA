// https://leetcode.com/problems/permutations/description/
// https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254?leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
// https://leetcode.com/problems/next-permutation/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        // base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        int element = nums[index];
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            solve(nums, index+1, ans);
            // backtracking
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        // safe case
        if(nums.size() == 0){
            return ans;
        }

        vector<int> output;
        int index = 0;

        solve(nums, index, ans);
        return ans;
    }
};