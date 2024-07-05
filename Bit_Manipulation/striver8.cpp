#include<iostream>
using namespace std;
// set the ith bit of number (0 - based indexing)
int main(void){
    int a = 13;
    int i = 1;
    int mask = (1 << i);
    cout << (a | mask) << endl;
    cout << (bool)(a | mask) << endl;
    return 0;
}