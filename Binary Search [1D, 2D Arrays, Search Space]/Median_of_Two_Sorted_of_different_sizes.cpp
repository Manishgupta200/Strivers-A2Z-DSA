// https://leetcode.com/problems/median-of-two-sorted-arrays/description/
// https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_985294?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    // vector<int> merge(vector<int>& nums1, vector<int>& nums2){
    //     vector<int> temp;
    //     int left = 0;
    //     int right = 0;
    //     int m = nums1.size()-1;
    //     int n = nums2.size()-1;
    //     while(left <= m && right <= n){
    //         if(nums1[left] <= nums2[right]){
    //             temp.push_back(nums1[left]);
    //             left++;
    //         }
    //         else{
    //             temp.push_back(nums2[right]);
    //             right++;
    //         }
    //     }
    //     while(left <= m){
    //         temp.push_back(nums1[left]);
    //         left++;
    //     }
    //     while(right <= n){
    //         temp.push_back(nums2[right]);
    //         right++;
    //     }
    //     return temp;
    // }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // BRUTE FORCE APPROACH
        // TC -> O(m+n), Reason – We traverse through both the arrays linearly.
        // SC -> O(m+n), Reason – We store the final array whose size is m+n.
        // vector<int> v = merge(nums1, nums2);
        // double median = 0.00;
        // int n = v.size();
        // if(n % 2 == 0){
        //     // even
        //     median = double(v[n/2] + v[n/2 - 1]) / 2;
        // }
        // else{
        //     median = double(v[n/2]);
        // }
        // return median;



        // OPTIMAL
        // TC -> O(log(min(n1, n2)))
        // SC -> O(1)
        // safe case
        if(nums2.size() < nums1.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        int n1 = nums1.size();
        int n2 = nums2.size();

        int low = 0, high = n1;

        while(low <= high){
            int cut1 = (low + high) >> 1;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
            int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1];
            int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
            int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

            if(left1 <= right2 && left2 <= right1){
                if((n1 + n2) % 2 == 0){
                    // even
                    int a = max(left1, left2);
                    int b = min(right1, right2);
                    return (a + b) / 2.0;
                }
                else{
                    return (double)max(left1, left2);
                }
            }
            else if(left1 > right2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};