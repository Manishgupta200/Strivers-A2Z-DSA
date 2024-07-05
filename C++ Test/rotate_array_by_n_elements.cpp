// https://leetcode.com/problems/rotate-array/description/
// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        // shift array value in right direction
        int n = nums.size();
        vector<int> temp(n);    // creating temp of size n

        for(int i = 0; i < n; i++){
            temp[(i+k) % n] = nums[i];
        }

        // copy nums into temp
        nums = temp;

        for(auto it : nums) cout << it << " ";
    }

int main(void){
    vector<int> v = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(v, k);
    return 0;
}