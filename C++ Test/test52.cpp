#include<iostream>
using namespace std;

int main(){
    int n = 153;
        int res = 0;
        while(n != 0){
            int rem = n % 10;
            res = res + (rem*rem*rem);
            n = n / 10;
        }
    cout << (res == n);
    return 0;
}