// https://www.codingninjas.com/codestudio/problems/majority-element_6783241?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://leetcode.com/problems/majority-element/description/
// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-element


// https://www.codingninjas.com/codestudio/problems/elements-occur-more-than-n-k-times_1113146?leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Brute -- TC -> O(N^2) and SC -> O(1)

        // Better
        // TC -> O(N log N) + O(N)
        // SC -> O(N) 
    //     unordered_map<int, int> mp;
    //     int n = nums.size();
    //     int times = n / 2;
    //     int ans = -1;
    //     for(int i = 0; i < n; i++){
    //         mp[nums[i]]++;
    //     }

    //     for(auto it : mp){
    //         if(it.second > times){
    //             ans = it.first;
    //             break;
    //         }
    //     }
    //     return ans;


        // 2nd method
        // Moore's voting Algorithm
        // TC -> O(N)
        // SC -> O(1)
        int el;
        int cnt = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        // verify el is majority or not
        int cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == el){
                cnt2++;
            }
        }
        if(cnt2 > (n / 2)) return el;
        return -1;

    }
};