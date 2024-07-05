#include<iostream>
using namespace std;

int main(void){
    int a[100];

    const int size = 5;
    int b[size];
    cout << sizeof(a) << " " << sizeof(b) << endl;
    return 0;
}