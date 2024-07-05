// https://leetcode.com/problems/move-zeroes/description/
#include<bits/stdc++.h>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        // jo zero nahi h uske left shift kar de. Opposite way me bhi sochna chahiya kabhi kabhi
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }

int main(void){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}