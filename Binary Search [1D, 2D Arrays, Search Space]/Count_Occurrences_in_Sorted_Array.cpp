// https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<bits/stdc++.h>
using namespace std;

	int firstOcc(vector<int> nums, int target){
        int s = 0, e = nums.size()-1, mid = s + (e-s)/2, ans = -1;
        while(s <= e){
            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }
            else if(target > nums[mid]) s = mid + 1;
            else e = mid - 1;
            mid = s + (e-s)/2;
        }
        return ans;
    }

    int lastOcc(vector<int> nums, int target){
        int s = 0, e = nums.size()-1, mid = s + (e-s)/2, ans = -1;
        while(s <= e){
            if(nums[mid] == target){
                ans = mid;
                // s = s + 1;
                s = mid + 1;
            }
            else if(target > nums[mid]) s = mid + 1;
            else e = mid - 1;
            mid = s + (e-s)/2;
        }
        return ans;
    }

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	if(firstOcc(arr, x) == -1) return 0;
	return (lastOcc(arr, x) - firstOcc(arr, x) + 1);
}