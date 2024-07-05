// Online C++ compiler to run C++ program online
// TRUE LOGIC ONLINE COMPILER COMPILE SUCCESSFULLY
// VS CODE ERROR
#include <iostream>
#include<math.h>
using namespace std;

void reverseNum(int n, int rem, int res){
    while(n != 0){
        rem = n % 10;
        res = rem + (res * 10);
        n /= 10;
    }
    cout << "res: " << res << endl;
}

void sameNum(int n, int rem, int res){
    int i = 0;
    while(n != 0){
        rem = n % 10;
        res = res + (rem * pow(10, i));
        i++;
        n /= 10;
    }
    cout << "res: " << res << endl;
}

void binaryNum(int n, int rem, int res){
    int i = 0;
    while(n != 0){
        rem = n & 1;
        res = res + (rem * pow(10, i));
        i++;
        n /= 2;
    }
    cout << "res: " << res << endl;
}

void reverseBinaryNumber(int n, int rem, int res){
    int i = 0;
    while(n != 0){
        rem = n % 2;
        res = rem + (res * 10);
        i++;
        n /= 2;
    }
    cout << "res: " << res << endl;
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int n = 12;
    int rem;
    int res = 0;
    reverseNum(n, rem, res);
    sameNum(n, rem, res);
    
    binaryNum(n, rem, res);
    reverseBinaryNumber(n, rem, res);
    return 0;
}