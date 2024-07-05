#include<bits/stdc++.h>
using namespace std;

int main(void){
    // char str[50];
    // cin.get(str, 50);
    // cout << "String str is: " << str << endl;


    // string str;
    // getline(cin, str);
    // cout << "String str is: " << str << endl;

    char * a = "Hello\0World";
    cout << a << endl;
    cout << strlen(a) << endl;
    return 0;
}