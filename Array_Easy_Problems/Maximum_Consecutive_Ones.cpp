// https://leetcode.com/problems/max-consecutive-ones/description/
// https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximize-number-of-1s
// https://practice.geeksforgeeks.org/problems/maximum-consecutive-ones/1
// https://www.codingninjas.com/codestudio/problems/maximum-consecutive-ones_3843993?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
#include<bits/stdc++.h>
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& nums) {
        // TC -> O(N)
        // SC -> O(1)

        // int maxm = 0;
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == 0){
        //         count = 0;
        //         continue;
        //     }
        //     count++;
        //     maxm = max(maxm, count);
        // }
        // return maxm;


        int maxm = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                count = 0;
            }
            maxm = max(maxm, count);
        }
        return maxm;
    }

int main(void){
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}