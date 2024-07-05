// SIEVE OF ERATOSTHENES
#include<bits/stdc++.h>
using namespace std;

// bool checkPrime(int n){
//     int count = 0;
//     for(int i = 1; i*i <= n; i++){
//         if(n % i == 0){
//             count++;

//             if((n/i) != i){
//                 count++;
//             }
//         }
//     }
//     if(count == 2) return true;
//     else return false;
// }
int N = 1000000;
bool sieve[1000001];
void createSieve(){
    for(int i = 2; i <= N; i++){
        sieve[i] = true;
    }

    for(int i = 2; i*i <= N; i++){
        if(sieve[i] == true){
            for(int j = i*i; j <= N; j+=i){
                sieve[j] = false;
            }
        }
    }

    for(int i = 0; i <= N; i++){
        cout << sieve[i] << " ";
    }
}
int main(void){
    createSieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(sieve[n] == true){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}