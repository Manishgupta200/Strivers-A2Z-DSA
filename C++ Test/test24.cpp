#include<iostream>
using namespace std;

int main(void){
    int i = 0;
    int n = 3;
    int sum = 0;
    while(i < n){
        int j = 0;
        while(j < n){
            // cout << char('A' + i) << " ";
            // cout << char('A' + j) << " ";
            // cout << char('A' + sum++) << " ";
            cout << char('A' + i + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}