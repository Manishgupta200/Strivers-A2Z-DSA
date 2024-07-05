#include<iostream>
using namespace std;
// extract the ith bit of number (0 - based indexing)
int main(void){
    int a = 13;
    int i = 3;
    int mask = (1 << i);

    cout << (bool)(a & mask) << endl;
    return 0;
}