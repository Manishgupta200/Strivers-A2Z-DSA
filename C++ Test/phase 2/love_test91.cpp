#include<bits/stdc++.h>
using namespace std;

int powerNikal(int a, int b){
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }

    // recursive call
    int ans = powerNikal(a, b/2);

    if(b % 2 == 0){
        // even
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

int main(void){
    int a, b;
    cin >> a >> b;
    cout << powerNikal(a, b);
    return 0;
}