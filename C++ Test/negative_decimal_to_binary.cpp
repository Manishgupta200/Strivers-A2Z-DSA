
#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int n = -6;
    unsigned long long int i = 0, ans = 0;
    // Assume we have 2 byte i.e. 16 bit integer
    if(n < 0){
        n = pow(2, 16) + n;
    }
    cout << n << endl;
    while(n){
        int lastBit = n & 1;
        ans = ans + (lastBit * pow(10, i));
        i++;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}