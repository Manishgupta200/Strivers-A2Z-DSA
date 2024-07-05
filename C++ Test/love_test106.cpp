#include<bits/stdc++.h>
using namespace std;

int main(void){
    int x = 4;
    int n = 4;

    int res = 1;
    while(n > 0){
        if(n&1){
            // odd
            res = res * x;
            cout << "res: " << res;
        }
        x = x * x;
        cout << " x: " << x;
        n = n >> 1;
        cout << " n: " << n << endl;
    }
    // cout << res << endl;
    return 0;
}