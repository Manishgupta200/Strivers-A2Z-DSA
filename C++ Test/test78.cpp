// https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/3189127/problems/14804?leftPanelTab=1
#include<bits/stdc++.h>
using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    if(m > n) return -1;

    sort(arr.begin(), arr.end());
    int freeApple = arr[n - m];
    // cout << freeApple;

    long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return (sum - freeApple);
}

int main(void){
    vector<int> v = {2, 3, 1, 5};
    int m = 2;
    int n = v.size();
    cout << appleAndCoupon(n, m, v);
    return 0;
}