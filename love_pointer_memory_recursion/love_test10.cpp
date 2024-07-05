#include<bits/stdc++.h>
using namespace std;

// CHAR ARRAY

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};   // decleare size of 5 and add total 5 element
    char ch[6] = "abcde";   // Needed to decleare size of 6 because to include null character. If not declearing the size then also worked properly

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;  // starting from starting location of ch and when encounter null cherecter, suddenly stops. and print "abcde"

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    char ch[6] = "abcde";
    cout << ch << endl;
    
    // char *k = "abcde";  // BAD PRACTICE (RISKY)
    // cout << k << endl;
    return 0;
}