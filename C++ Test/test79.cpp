#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str = "Geeks";
    int n = str.length();
    for(int i = 0; i < n/2; i++){
        swap(str[i], str[n-1-i]);

    }
    cout << str << endl;
    return 0;
}