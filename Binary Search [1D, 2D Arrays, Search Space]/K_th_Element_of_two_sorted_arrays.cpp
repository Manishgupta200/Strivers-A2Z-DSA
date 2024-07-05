// https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1
// https://www.codingninjas.com/studio/problems/k-th-element-of-2-sorted-array_1164159?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    // TC -> O(n)
        // SC -> O(1)
        // int i = 0, j = 0, count = 0;
        
        // while(i < n && j < m){
        //     if(arr1[i] < arr2[j]){
        //         count++;
        //         if(count == k) return arr1[i];
        //         i++;
        //     }
        //     else{
        //         count++;
        //         if(count == k) return arr2[j];
        //         j++;
        //     }
        // }
        // while(i < n){
        //     count++;
        //     if(count == k) return arr1[i];
        //     i++;
        // }
        // while(j < m){
        //     count++;
        //     if(count == k) return arr2[j];
        //     j++;
        // }
        
        // return 0;


        // OPTIMAL APPROACH
        // TC -> O(log(min(n, m)))
        // SC -> O(1)
        if(n > m){
            return kthElement(arr2, arr1, m, n, k);
        }
        int low = max(0, k-m);
        int high = min(n, k);
        
        while(low <= high){
            int cut1 = (low + high) / 2;
            int cut2 = k - cut1;
            
            int l1 = (cut1 == 0) ? INT_MIN : arr1[cut1-1];
            int l2 = (cut2 == 0) ? INT_MIN : arr2[cut2-1];
            int r1 = (cut1 == n) ? INT_MAX : arr1[cut1];
            int r2 = (cut2 == m) ? INT_MAX : arr2[cut2];
            
            if(l1 <= r2 && l2 <= r1){
                return max(l1, l2);
            }
            else if(l1 > r2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
        }
        return 0;
}