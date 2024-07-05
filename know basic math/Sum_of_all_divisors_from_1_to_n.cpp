// https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
#include<iostream>
using namespace std;

int main(void){
    int N = 4;
    int sum = 0;
    for(int i = 1; i <= N; i++){
        sum = sum + (N / i) * i;    //formula h. Lekin logic pehele aata h.
    }
    cout << sum << endl;
    return 0;
}