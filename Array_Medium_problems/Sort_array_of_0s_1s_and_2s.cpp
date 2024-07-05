// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sort-an-array-of-0s-1s-and-2s
// https://leetcode.com/problems/sort-colors/description/
// https://www.codingninjas.com/codestudio/problems/sort-an-array-of-0s-1s-and-2s_892977?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 1st way
        // sort(nums.begin(), nums.end());

        // 2nd way
        // int count[3] = {0, 0, 0};
        // for(int i = 0; i < nums.size(); i++){
        //     count[nums[i]]++;
        // }
        // int i = 0;
        // while(count[0]--) nums[i++] = 0;
        // while(count[1]--) nums[i++] = 1;
        // while(count[2]--) nums[i++] = 2;

        // 3rd way. 3-pointer approach
        // Dutch National Flag Algorithm
        // TC -> O(N)
        // SC -> O(1)
        int zero = 0, curr = 0, two = nums.size()-1;
        while(curr <= two){
            if(nums[curr] == 0){
                swap(nums[curr], nums[zero]);
                curr++; zero++;
            }
            else if(nums[curr] == 1){
                curr++;
            }
            else{
                swap(nums[curr], nums[two]);
                two--;
            }
        }
    }
};