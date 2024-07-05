// PRINTING PRIME FACTORISATION
#include<bits/stdc++.h>
using namespace std;

// TC -> O(N) in worst.. where n is a prime number
void primeFact1(int n){
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    cout << endl;
}

// TC -> O(sqrt(n))
void primeFact2(int n){
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    if(n > 1) cout << n;
    cout << endl;
}

int main(void){
    int n = 48;
    primeFact1(n);
    primeFact2(n);
    return 0;
}