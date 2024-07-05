// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-first-n-fibonacci-numbers
#include<iostream>
#include<vector>
using namespace std;
    // TC -> O(N)
    // SC -> O(1)
    vector<long long> printFibb(int  n) 
    {
        //code here
        vector<long long> v;
        
        long long a = 0;
        long long b = 1;
        // v.push_back(a);
        v.push_back(b);
        
        for(int i = 2; i <= n; i++){
            long long sum = a + b;
            a = b;
            b = sum;
            v.push_back(sum);
        }
        return v;
    }

int main(void){
    // fibonacci starting from 1
    vector<long long> v = printFibb(5);
    for(auto it : v) cout << it << " ";
    return 0;
}