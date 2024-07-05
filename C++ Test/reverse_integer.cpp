#include<bits/stdc++.h>
using namespace std;

int reverseInt(int n){
    int ans = 0;
    while(n){
        int digit = n % 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
        ans = ans * 10 + digit;
        n /= 10;
    }
    return ans;
}

int reverseInt2(int x){
    long long ans = 0;
    while(x){
        int digit = x % 10;
        ans = ans * 10 + digit;
        if(ans > INT_MAX || ans < INT_MIN) return 0;
        x /= 10;
    }
    ans = x < 0 ? -ans : ans;
    return ans;
}

int main(void){
    int n = 132;
    cout << reverseInt(n);
    cout << endl;
    cout << reverseInt2(n);
    return 0;
}