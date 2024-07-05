#include<iostream>
using namespace std;

int main(void){
    int n = 4;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j < i){
            cout << " ";
            j++;
        }
        j = 1;
        while(j <= (n-i+1)){
            // cout << "*";
            // cout << i;
            cout << (i + j - 1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}