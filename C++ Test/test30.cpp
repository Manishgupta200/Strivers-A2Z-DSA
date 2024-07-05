#include<iostream>
using namespace std;

int main(void){
    int n = 4;
    int i = 1;
    while(i <= n){
        // space
        int j = 1;
        while(j <= (n-i)){
            cout << " ";
            j++;
        }
        // number
        j = 1;
        int sum = 0;
        while(j <= (2*i - 1)){
            if(j <= i)   sum++;
            else        sum--;
            cout << sum;
            j++;
        }
        // space
        j = 1;
        while(j <= (n-i)){
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}