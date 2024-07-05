// https://leetcode.com/problems/sqrtx/description/
// https://practice.geeksforgeeks.org/problems/square-root/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

    long long int binarySearch(int n){
        int s = 0, e = n;
        long long int mid = s + (e - s) / 2;
        long long int ans = -1;
        while(s <= e){
            long long int square = mid * mid;
            if(square == n) return mid;
            else if(square < n){
                ans = mid;      //important
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int mySqrt(int x) {
        // return sqrt(x);

        return binarySearch(x);
    }

int main(void){
    cout << mySqrt(26);
    return 0;
}