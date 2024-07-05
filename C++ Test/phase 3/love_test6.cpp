// PADDING, GREEDY ALIGNMENT CONCEPT
#include<iostream>
using namespace std;

class Padding{
    int number;     // 4 byte (int) + 4 byte (padding)
    double salary;  // 8 byte (int)
    char value;     // 1 byte (char) + 7 byte (padding)
};

int main(void){
    Padding h1;
    // Total 24 byte
    cout << "size: " << sizeof(h1) << endl;
    return 0;
}