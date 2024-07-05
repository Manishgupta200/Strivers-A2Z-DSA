// https://www.codingninjas.com/codestudio/problems/4sum_5713771?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-four-sum-numbers
// https://leetcode.com/problems/4sum/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    // BRUTE
    // TC -> O(N^4)
    // SC -> O(no. of quards) * 2

    // BETTER
    // TC -> O(N^3 * log(size of hashSet)) + O(4) = O(N^3 * log(size of hashSet)), when using unordered_set log(...) changes to 1
    // size of hashSet is decreasing every time
    // SC -> O(n) + O(quards) * 2
    // int n = nums.size();
    // set<vector<int>> st;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         set<long long> hashSet;
    //         for(int k = j+1; k < n; k++){
    //             long long sum = nums[i] + nums[j];
    //             sum += nums[k];
    //             long long fourth = target - sum;
    //             if(hashSet.find(fourth) != hashSet.end()){
    //                 vector<int> temp = {nums[i], nums[j], nums[k], int(fourth)};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //             hashSet.insert(nums[k]);
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;


    // OPTIMAL
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){

        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j < n; j++){

            if(j > i+1 && nums[j] == nums[j-1]) continue;

            int k = j+1;
            int l = n-1;
            while(k < l){
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum < target){
                    k++;
                }
                else if(sum > target){
                    l--;
                }
                else{
                    // as already sorted so stored in ans in sorted way
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++, l--;
                    while(k < l && nums[k] == nums[k-1]) k++;
                    while(k < l && nums[l] == nums[l+1]) l--;
                }
            }
        }
    }
    return ans;
}