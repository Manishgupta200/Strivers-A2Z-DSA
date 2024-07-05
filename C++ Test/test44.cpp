#include<iostream>
#include<vector>
using namespace std;

// binary to decimal
int main(void){
    int num = 10;
    vector<int> v;
    while(num != 0){
        v.push_back(num % 2);
        num /= 2;
    }
    for(int i = v.size(); i > 0; i--){
        cout << v[i-1] << " ";
    }
    return 0;
}