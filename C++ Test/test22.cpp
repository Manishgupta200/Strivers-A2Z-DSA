#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int n = 4;
    int sum = 1;
    while(i < n){
        int sum2 = 1;
        int j = 0;
        while(j <= i){
            // cout << "* ";
            // cout << i+1 << " ";
            // cout << sum++ << " ";
            cout << i + sum2 << " ";
            sum2++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}