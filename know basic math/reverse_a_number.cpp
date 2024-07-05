#include<iostream>
#include<vector>
using namespace std;

void reverseNum(long long int n){
    vector<int> v;
    int rem = 0;
    long long int res = 0;

    while(n != 0){
        rem = n % 10;
        v.push_back(rem);
        n /= 10;
    }
    for(int i = 0; i < v.size(); i++){
        res = res * 10 + v[i];
    }

    cout << res << endl;
}

void reverseNum2(long long int n){
    // time complexity = O(n)
    // space complexity = O(1)
    int rem = 0;
    long long int res = 0;
    while(n != 0){
        rem = n % 10;
        res = res * 10 + rem;
        n /= 10;
    }
    cout << res << endl;
}

int main(){
    // long long int n = 1534236469;
    // long long int n = 1230;
    long long int n = -1230;
    reverseNum(n);
    reverseNum2(n);
    return 0;
}

// similar problem leetcode - https://leetcode.com/problems/reverse-integer/description/
