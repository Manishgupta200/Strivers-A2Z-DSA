#include<iostream>
using namespace std;

int main(void){
    long long X = 10;
        long long ans = 0;
        for(int i = 0 ; i < 32 ; i++){
            if((X&1) == 0) ans = ans << 1;
            else{
                ans = ans << 1;
                ans = ans + 1;
            }
            X = X >> 1;
        }
        cout << ans;
    return 0;
}