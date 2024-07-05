#include<iostream>
#include<vector>
using namespace std;

    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> v;
        long long res = 1;
        for(int i = 1; i <= N; i++){
            
            res *= i;
            
            if(res <= N){
                v.push_back(res);
            }
            else break;
        }
        return v;
    }

int main(void){
    vector<long long> v = factorialNumbers(6);
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}