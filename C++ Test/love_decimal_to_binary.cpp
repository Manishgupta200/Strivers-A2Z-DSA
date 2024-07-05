#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int num = 10;
    vector<int> b_num;
    while(num != 0){
        b_num.push_back(num % 2);
        num /= 2;
    }
    reverse(b_num.begin(), b_num.end());
    for(auto it : b_num){
        cout << it << " ";
    }

    return 0;
}