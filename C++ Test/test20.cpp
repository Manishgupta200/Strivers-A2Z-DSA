#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 4;
    while(i <= n){
        int j = 1;
        while(j <= n){
            // cout << j << " ";
            cout << n - j + 1 << " ";   //opposite
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}