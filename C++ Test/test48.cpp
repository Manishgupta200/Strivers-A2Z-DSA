#include<iostream>
#include<vector>
using namespace std;

int main(){
        int num = 10;
        int flip;
        int ans = 0;
        vector<int> v;
        while(num != 0){
            int bit = num & 1;
            flip = 1 - bit;
            v.push_back(flip);
            num = num >> 1;
        }
        for(auto it : v){
            cout << it << " ";
        }
    return 0;
}