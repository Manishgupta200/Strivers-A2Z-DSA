// https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTab=1&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    // Write your code here.
    // TC -> O(N)
    // SC -> O(1)
    // int ans = -1;
    // for(int i = 0; i <= n; i++){
    //     if(i*i <= n){
    //         ans = i;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // return ans;


    // 2nd method
    // TC -> O(log n) base 2
    // SC -> O(1)
    int s = 0, e = n;
    int ans = -1;
    while(s <= e){
        long long mid = s + (e - s) / 2;
        long long square = mid * mid;
        if(square <= (long long)n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    // return ans;
    return e;
}