#include<iostream>
using namespace std;

int setbit_of_a(int a){
    int count = 0;
    while(a != 0){
        if(a & 1){
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int setbit_of_b(int b){
    int count2 = 0;
    while(b != 0){
        if(b & 1){
            count2++;
        }
        b = b >> 1;
    }
    return count2;
}

int main(void){
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Total set bit of a and b is: " << (setbit_of_a(a) + setbit_of_b(b)) << endl;
    return 0;
}