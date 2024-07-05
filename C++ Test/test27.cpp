#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 0;
    int sum = 1;
    while(i < n){
        int j = 0;
        while((i+j) < (n-1)){
            cout << " ";
            j++;
        }
        j = 0;
        while(j <= i){
            // cout << "*";
            // cout << i+1;
            cout << sum++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}