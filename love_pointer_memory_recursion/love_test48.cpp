#include<bits/stdc++.h>
using namespace std;

int main(void){
    char ch = 'q';

    char *c = &ch;
    cout << sizeof(c) << endl;  // return 8 byte
    return 0;
}