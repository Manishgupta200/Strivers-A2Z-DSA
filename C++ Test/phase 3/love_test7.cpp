// PADDING, GREEDY ALIGNMENT CONCEPT
#include<iostream>
using namespace std;

class Padding{
    double salary;  // 8 byte (int)
    int number;     // 4 byte (int) + 1 byte (char) + 3 byte (padding)
    char value;
};

int main(void){
    Padding h1;
    // Total 16 byte
    cout << "size: " << sizeof(h1) << endl;
    return 0;
}