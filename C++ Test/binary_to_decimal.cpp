#include<iostream>
#include<math.h>
using namespace std;

// binary to decimal
int main(void){
    int n = 1000;
    int ans = 0, i = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}