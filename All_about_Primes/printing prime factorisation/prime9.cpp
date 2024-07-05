// https://practice.geeksforgeeks.org/problems/prime-factors5052/1
#include<bits/stdc++.h>
using namespace std;

	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int> spf(N+1, 0);
	    for(int i = 2; i <= N; i++){
	        spf[i] = i;
	    }
	   // sieve
	   for(int i = 2; i*i <= N; i++){
	       if(spf[i] == i){
	           for(int j = i*i; j <= N; j += i){
	               if(spf[j] == j){
	                   spf[j] = i;
	               }
	           }
	       }
	   }
	   vector<int> ans;
	   while(N != 1){
	       ans.push_back(spf[N]);
	       N /= spf[N];
	   }
// 		ans.resize(unique(ans.begin(), ans.end()) - ans.begin());
       int n = ans.size();
	   for(int i = n-1; i >= 1; i--){
	       if(ans[i] ==  ans[i-1]){
	           ans.erase(ans.begin()+i, ans.begin()+(i+1));
	       }
	   }
		return ans;
	}

int main(void){
    int n = 24;
    vector<int> v = AllPrimeFactors(n);
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}