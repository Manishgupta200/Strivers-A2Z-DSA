// https://leetcode.com/problems/merge-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int left = 0;
        int right = 0;
        while(left <= m-1 && right <= n-1){
            if(nums1[left] <= nums2[right]){
                temp.push_back(nums1[left]);
                left++;
            }
            else{
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while(left <= m-1){
            temp.push_back(nums1[left]);
            left++;
        }
        while(right <= n-1){
            temp.push_back(nums2[right]);
            right++;
        }
        for(int i = 0; i < m+n; i++){
            nums1[i] = temp[i];
        }
    }

int main(void){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    merge(nums1, m, nums2, n);

    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
    return 0;
}