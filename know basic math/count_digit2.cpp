// https://practice.geeksforgeeks.org/problems/count-digits5716/1
#include<iostream>
using namespace std;

void countEvenly(int N){
    string S = to_string(N);
    int count = 0;

    for(int i = 0; i < S.size(); i++){
        if(S[i] - '0' != 0){
            if(N % (S[i] - '0') == 0) count++;
        }
    }
    cout << count << endl;
}

int main(){
    int N = 23;
    countEvenly(N);
    return 0;
}