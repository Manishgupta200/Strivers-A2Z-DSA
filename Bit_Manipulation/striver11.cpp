// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
#include<iostream>
using namespace std;
// check number is a power of 2 or not
int main(void){
    int n = 8;
    if((n & (n-1)) == 0){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}