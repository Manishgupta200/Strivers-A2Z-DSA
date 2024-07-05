// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
#include<iostream>
#include<math.h>
using namespace std;

// three operations simultaneously - decimal to binary to decimal
int main(){
    int X = 5;
        long long ans = 0;
        int i = 31;
        while(X != 0){
            int bit = X % 2;
            if(bit == 1){
                ans = ans + pow(2, i);
            }
            i--;
            X /= 2;
        }
        cout << ans;
    return 0;
}