// Pointers in C++ || Part-2 || DSA Placement Course - Love Babbar
#include<bits/stdc++.h>
using namespace std;

int main(void){
    char ch[] = "manish";
    cout << *ch << endl;
    cout << char(*ch + 1) << endl;
    cout << *(ch + 1) << endl;
    cout << char(*(ch) + 1) << endl;
    cout << ch[3] << " " << *(ch + 3) << endl;
    cout << 3[ch] << " " << *(3 + ch) << endl;

    int a = 10;
    // cout << *a << endl;  //ERROR

    int arr[10] = {0};
    cout << "Address of 1st memory block: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of 1st memory block: " << &arr[0] << endl;
    return 0;
}