#include<iostream>
using namespace std;

int main(void){
    int i = 1;
    int n = 3;
    int sum = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << sum++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}