#include<iostream>
using namespace std;
// remove the last set bit (i.e. remove last 1 if exist)
int main(void){
    int a = 12;
    cout << (a & (a-1)) << endl;
    return 0;
}