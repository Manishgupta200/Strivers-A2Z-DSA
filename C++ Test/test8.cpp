#include<iostream>
using namespace std;

int main(){
    int num = 6;
    int n = 2;
    // n <= num (inclusive) {2, 4, 6}
    // n < num (exclusive)  {2, 4}
    while(n <= num){
        cout << n << " ";
        n += 2;
    }
    return 0;
}