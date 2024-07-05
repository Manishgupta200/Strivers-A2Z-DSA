#include<iostream>
#include<math.h>
using namespace std;

// decimal to binary
int main(void){
    int n = 100;
    int res = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        res = res + (bit * pow(10, i));
        i++;
        // n /= 2;
        n = n >> 1;
    }
    cout << res;
    return 0;
}