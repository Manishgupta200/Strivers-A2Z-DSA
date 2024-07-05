// https://leetcode.com/problems/number-complement/description/
#include<bits/stdc++.h>
using namespace std;

    int findComplement(int num) {
        // int ans = 0;
        // int i = 0;
        // while(num != 0){
        //     int bit = num % 2 == 0;
        //     ans += bit * pow(2, i);
        //     i++;
        //     num /= 2;
        // }
        // return ans;

        // 2nd way
        int msb = (int)(log2(num));
        if(num == 0) return 1;
        int sum = 0;
        for(int i = msb; i >= 0; i--){
            if(num & (1 << i)) continue;
            else sum += pow(2, i);
        }
        return sum;
    }

int main(void){
    int n = 10;
    cout << findComplement(n);
}