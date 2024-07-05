#include<iostream>
using namespace std;
// sum of all even number
int main(){
    int n = 8;
    int sum = 0;
    int i = 2;
    while(i <= n){
        sum = sum + i;
        i += 2;
    }
    cout << sum << endl;
    return 0;
}