#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
bool sieve[1000000 + 1];
void createSieve(){
    for(int i = 2; i <= N; i++){
        sieve[i] = true;
    }

    for(int i = 2; i*i <= N; i++){
        if(sieve[i] == true){
            for(int j = i*i; j <= N; j += i){
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrime(int n){
    vector<int> ds;
    for(int i = 2; i <= n; i++){
        if(sieve[i] == true){
            ds.push_back(i);
        }
    }
    // for(auto it : ds) cout << it << " ";
    return ds;
}

int main(void){
    createSieve();
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        // step 1:  generate all primes till sqrt(R)
        vector<int> prime = generatePrime(sqrt(r));

        // step 2: create a dummy array of size r -l + 1 and mark everyone as 1
        int dummy[r-l+1];
        for(int i = 0; i <= r-l; i++){
            dummy[i] = 1;
        }

        // step 3: for all prime numbers, marks its multiples as false
        for(auto pr : prime){
            int firstMultiple =  (l / pr) * pr;
            for(int j = max(firstMultiple, pr*pr); j <= r; j += pr){
                dummy[j-l] = 0;
            }
        }

        // step 4: get all the primes
        for(int i = l; i <= r; i++){
            if(dummy[i-l] == 1){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}