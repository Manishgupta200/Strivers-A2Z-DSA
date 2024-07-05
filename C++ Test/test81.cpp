// https://leetcode.com/problems/search-insert-position/description/
#include<bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;
        int mid = s + (e - s) / 2;
        cout << s << " " << e << " " << mid << endl;
        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
            cout << s << " " << e << " " << mid << endl;
        }
        return mid;
    }

int main(void){
    vector<int> nums = {1,3,5,7};
    int target = 8;
    cout << searchInsert(nums, target) << endl;
    return 0;
}