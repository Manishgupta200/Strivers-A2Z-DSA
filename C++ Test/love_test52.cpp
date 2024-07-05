#include<iostream>
#include<stdlib.h>
using namespace std;

// continue not works in switch statement
int main(void){
    char ch = '1';

    while(true){
        switch(ch){
            case 1: cout << "first" << endl;
            break;

            case '1': cout << "second" << endl;
            break;

            default: cout << "default case h ye\n";
        }
        exit(ch);
    }
    return 0;
}   