#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n){
    int prime[100] = {0};
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i*i; j <= n; j = j + i){
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(void){
    int n = 31;

    primeSieve(n);
    return 0;
}