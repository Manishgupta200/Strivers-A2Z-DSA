// https://leetcode.com/problems/complement-of-base-10-integer/description/
#include<bits/stdc++.h>
using namespace std;

    int bitwiseComplement(int n) {
        // int res = 0;
        // int i = 0;
        // // ooh aab zero ke liye alag se likhe h
        // if(n == 0)  res = 1;

        // while(n != 0){
        //     int bit = n & 1;    // main khela yahi par ho raha h fliping ka
        //     int flip = 1 - bit;
            
        //     // agar fliped number ko binery me dekhna chahate h
        //     // res = res + (flip * pow(10, i));
            
        //     // agar fliped number ko decimal me dekhna chahate h
        //     res = res + (flip * pow(2, i));
        //     i++;
        //     n = n >> 1;
        // }
        // return res;

//2nd
        // Love Babber approach
        // if(n == 0)  return 1;
        // int m = n;  // yaha n ko new variable me rekhna jaruri h.. n me direct changes naa aaye
        // int mask = 0;
        // while(m != 0){
        //     mask = (mask << 1) | 1;
        //     m = m >> 1;
        // }
        // int ans = (~n) & mask;
        // return ans;

//3rd
        // if(n == 0) return 1;
        // int ans = 0, fac = 1;
        // while(n != 0){
        //     int bit = n % 2 == 0;
        //     ans += fac*bit;
        //     fac *= 2;
        //     n /= 2;
        // }
        // return ans;

//4th
        if(n == 0) return 1;
        int x = 1;
        while(x <= n){
            n = n ^ x;
            x = x << 1;
        }
        return n;
    }

    int main(){
        cout << bitwiseComplement(10) << endl;
        return 0;
    }