#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int n = 4;
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << char(('A' + n - 1) - (i - j)) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}