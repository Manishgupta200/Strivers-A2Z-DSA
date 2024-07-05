#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1004;
    int rem;
    vector<int> v;
    
    int res = 0;
    while(n != 0){
        rem = n % 10;
        if(rem == 0){
            rem = 5;
        }
        v.push_back(rem);
        n /= 10;
    }
    int size = v.size();
    for(int i = 0; i < size; i++){
        res += v[i] * pow(10, i);
    }
    cout << res;
    return 0;
}