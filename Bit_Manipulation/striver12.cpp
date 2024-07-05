// https://practice.geeksforgeeks.org/problems/set-bits0143/1
// https://leetcode.com/problems/number-of-1-bits/description/
#include<iostream>
using namespace std;
// count the number of set bit in a number
int main(void){
    int n = 14;
    int count = 0;

    // TC -> O(MSB) most significant bit
    while(n != 0){
        if((n & 1) == 1){
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;


    // 2nd method
    // TC -> O(set bit)
    int m = 14;
    count = 0;
    while(m != 0){
        m = (m & (m-1));
        count++;
    }
    cout << count << endl;
    return 0;
}