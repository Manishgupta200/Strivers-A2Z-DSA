// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
// https://leetcode.com/problems/number-of-1-bits/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void){
        int n = 7;
        cout << "n: " << n << endl;
        int count = 0;
        while(n != 0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        cout << count;
    return 0;
}