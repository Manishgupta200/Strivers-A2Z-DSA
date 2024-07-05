// PRINTING PRIME FACTORISATION
#include<bits/stdc++.h>
using namespace std;

int N = 100;
int spf[100 + 1];
void createSieve(){
    for(int i = 2; i <= N; i++){
        spf[i] = i;
    }

    for(int i = 2; i*i <= N; i++){
        if(spf[i] == i){
            for(int j = i*i; j <= N; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    // for(int i = 0; i <= N; i++){
    //     cout << spf[i] << " ";
    // }
}

int main(void){
    // O(n log(log n))
    createSieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        // O(log n)
        while(n != 1){
            cout << spf[n] << " ";
            n = n / spf[n];
        }
        cout << endl;
    }
    return 0;
}