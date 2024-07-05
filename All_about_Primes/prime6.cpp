// How many number in the range (1 - 10^6) have minimum prime factor
#include<bits/stdc++.h>
using namespace std;

int N = 25;
int sieve[25 + 1];
// int N = 25;
// int sieve[25 + 1];
void createSieve(){
    for(int i = 2; i <= N; i++){
        sieve[i] = 1;
    }

    for(int i = 2; i*i <= N; i++){
        if(sieve[i] == 1){
            for(int j = i*i; j <= N; j+=i){
                if(sieve[j] != 0){
                    sieve[i]++;
                    sieve[j] = 0;
                }
            }
        }
    }
}

int main(void){
    // O(N log(log N))
    createSieve();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // O(1)
        cout << sieve[n] << endl;
    }
    return 0;
}