#include<bits/stdc++.h>
using namespace std;

// ----------------OUTPUT
// temp: 40
// *temp: 4
// &temp: 8
// temp[0]: 4
// &temp[0]: 8
// ptr: 8
// *ptr: 4
// &ptr: 8

int main(void){
    int temp[10];
    int *ptr = &temp[0];
    cout << "temp: " << sizeof(temp) << endl;
    cout << "*temp: " << sizeof(*temp) << endl;
    cout << "&temp: " << sizeof(&temp) << endl;
    cout << "temp[0]: " << sizeof(temp[0]) << endl;
    // cout << "*temp[0]: " << sizeof(*temp[0]) << endl;    //ERROR
    cout << "&temp[0]: " << sizeof(&temp[0]) << endl;
    cout << "ptr: " << sizeof(ptr) << endl;
    cout << "*ptr: " << sizeof(*ptr) << endl;
    cout << "&ptr: " << sizeof(&ptr) << endl;
    return 0;
}