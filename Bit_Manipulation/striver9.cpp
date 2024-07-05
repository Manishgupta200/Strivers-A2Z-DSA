#include<iostream>
using namespace std;
// ~ nagation operator
// clear the ith bit of number (0 - based indexing)
int main(void){
    int a = 50;
    int i = 4;
    int mask = ~(1 << i);
    cout << (a & mask) << endl;
    cout << (bool)(a & mask) << endl;
    return 0;
}