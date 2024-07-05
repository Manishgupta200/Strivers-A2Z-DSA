// https://leetcode.com/problems/power-of-two/
#include<bits/stdc++.h>
using namespace std;

    bool isPowerOfTwo(int n) {
        // Brute forse approach
        // for(int i = 0; i < 31; i++){
        //     if(n == pow(2, i))  return true;
        // }
        // return false;

        // int ans = 1;
        // for(int i = 0; i < 31; i++){
        //     if(n == ans) return true;
        //     if(ans < INT_MAX/2) ans = ans * 2;
        // }
        // return false;

        return n > 0 && (n & (n - 1)) == 0;
    }


int main(void){
    cout << isPowerOfTwo(8) << endl;
    
    return 0;
}