#include<iostream>
using namespace std;

// global and local scope variable
int main(){
    int a;
    cout << a << endl;  //a stores garbage value
    a = 3;
    cout << a << endl;
    if(true){
        a = 7; //not error and changes affected in main variable
        cout << a << endl;
    }
    cout << a << endl;
    return 0;
}