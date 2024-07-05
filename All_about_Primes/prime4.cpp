// https://www.spoj.com/problems/TDKPRIME/
#include<bits/stdc++.h>
using namespace std;
// MUST WATCH prime5.cpp
int N = 100000000;
bool sieve[100000000 + 1];
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

// what is the range in which 5 * 10^6 guy is
// just doing to figure out which is the last position where you find the actual kth prime
    int limit = 5 * 1000000;
    int count = 0;
    int size = 1;
    for(int i = 2;;i++){
        if(sieve[i] == true){
            count++;
        }
        if(count == limit){
            size = i;
            break;
        }
    }
    cout << size << endl;   // 86028121 (UPDATE SIZE OF N IN "prime5.cpp")
}

int main(void){
    createSieve();
    return 0;
}