#include<bits/stdc++.h>
using namespace std;

inline int getMAx(int &a, int &b){
    return ((a > b) ? a : b);
}

int main(void){
    int a = 4, b = 5;
    int ans = 0;

    ans = getMAx(a, b);
    cout << ans << endl;

    a += 2;
    
    ans = getMAx(a, b);
    cout << ans << endl;
    return 0;
}