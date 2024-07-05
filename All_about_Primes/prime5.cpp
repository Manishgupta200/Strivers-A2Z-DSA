// https://www.spoj.com/problems/TDKPRIME/
#include<bits/stdc++.h>
using namespace std;
// MUST WATCH prime4.cpp
int N = 86028121;
bool sieve[86028121 + 1];
vector<int> ds;
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

    for(int i = 2; i <= N; i++){
        if(sieve[i] == true){
            ds.push_back(i);
        }
    }

}

int main(void){
	createSieve();
	int t;
    cin >> t;
    while(t--){
    	int k;
    	cin >> k;
    	cout << ds[k-1] << endl;
    }
    return 0;
}