// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/0?problemType=functional&page=1&query=problemTypefunctionalpage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-consecutive-subsequence
// https://leetcode.com/problems/longest-consecutive-sequence/submissions/927806279/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // BETTER
        // TC -> O(n log n) + O(n)
        // SC -> O(1)
        // sort(nums.begin(), nums.end());

        // int curCount = 0;
        // int lastSmaller = INT_MIN;
        // int longest = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] - 1 == lastSmaller){
        //         curCount++;
        //         lastSmaller = nums[i];
        //     }
        //     else if(nums[i] != lastSmaller){
        //         curCount = 1;
        //         lastSmaller = nums[i];
        //     }
        //     longest = max(longest, curCount);
        // }
        // return longest;

        // BETTER
        // TC -> O(N)
        // SC -> O(N)
        unordered_set<int> st;
        for(auto it : nums){
            st.insert(it);
        }

        int longest = 0;
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int x = it;

                while(st.find(x + 1) != st.end()){
                    cnt++;
                    x++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};