// https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
// TC -> O(log n)

#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr){
    // Write your code here.   
    //  int s = 0, e = arr.size()-1;
    // if(arr[s] <= arr[e]) return 0;
    //  int mid = s + (e - 2) / 2;
    //  while(s < e){
    //      if(arr[mid] >= arr[0]){
    //          s = mid + 1;
    //      }
    //      else{
    //          e = mid;
    //      }
    //      mid = s + (e - s) / 2;
    //  }
    //  return mid;




     // 2nd method (striver)
        // TC -> O(log n) base 2
        // SC -> O(1)
        int low = 0, high = arr.size()-1;
        int ans = INT_MAX;
        int index = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;

            // optimise case
            if(arr[low] <= arr[high]){
                if(ans > arr[low]){
                    index = low;
                    ans = arr[low];
                }
                // ans = min(ans, arr[low]);
                break;
            }
            // left sorted
            if(arr[low] <= arr[mid]){
                if(ans > arr[low]){
                    index = low;
                    ans = arr[low];
                }
                // ans = min(ans, arr[low]);
                low = mid + 1;
            }
            else{
                if(ans > arr[mid]){
                    index = mid;
                    ans = arr[mid];
                }
                // ans = min(ans, arr[mid]);
                high = mid - 1;
            }
        }
        return index;
}