// https://leetcode.com/problems/find-pivot-index/description/
#include<bits/stdc++.h>
using namespace std;

    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0;
        for(int x : nums){
            sum += x;
        }
        for(int i = 0; i < nums.size(); i++){
            if(sum - nums[i] - leftSum == leftSum) return i;    // jabardast thinking
            leftSum += nums[i];
        }
        return -1;
    }
int main(void){
    vector<int> v = {1,7,3,6,5,6};
    cout << pivotIndex(v);
    return 0;
}