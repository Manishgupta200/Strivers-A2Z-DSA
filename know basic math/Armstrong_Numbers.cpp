// https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
#include<iostream>
using namespace std;

int main(void){
    int n = 153;
        int m = n;  //phasne wala line the biddu
        int res = 0;
        while(m != 0){
            int rem = m % 10;
            res = res + (rem*rem*rem);
            m = m / 10;
        }
        if(n == res)    cout << "Yes";
        else cout << "No";
    return 0;
}