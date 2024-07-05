#include<iostream>
using namespace std;

int main(void){
    int a = 1;
    int b = 2;
    if(a-- > 0 && ++b > 2){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }
    cout << a << " " << b << endl;

    int number = 3;
    cout << (25 * (++number)) << endl;
    return 0;
}