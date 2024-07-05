// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once
// https://leetcode.com/problems/single-number/description/
#include<bits/stdc++.h>
using namespace std;

    int singleNumber(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }