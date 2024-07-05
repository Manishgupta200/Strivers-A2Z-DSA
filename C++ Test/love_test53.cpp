#include<iostream>
using namespace std;

// Basic calculator using switch statement
int main(void){
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;

    char ch;
    cout << "Enter operation symbol: ";
    cin >> ch;
    switch(ch){
        case '+': {cout << (a+b);}
        break;

        case '-': cout << (a-b);
        break;

        case '*': cout << (a*b);
        break;

        case '/': cout << (a/b);
        break;

        case '%': cout << (a%b);
        break;

        default: cout << "INVALID OPERATION YOU ENTERED\n";
    }
    return 0;
}