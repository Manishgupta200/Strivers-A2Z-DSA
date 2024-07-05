#include<iostream>
using namespace std;

int main(void){
    int a;
    cout << a << endl;
    a = 3;
    cout << a << endl;
    if(true){
        int a = 5;
        cout << a << endl;
    }
    cout << a << endl;

    int b;
    if(1){
        int b;
        if(1){
            int b;
            if(1){
                int b;
                if(1){
                    int b;
                }
            }
        }
    }
    return 0;
}