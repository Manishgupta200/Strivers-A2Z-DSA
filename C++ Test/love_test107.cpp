// https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res = 1;

	while(n){
		if(n&1){
			// odd
			res = (1LL * (res)%m * (x)%m)%m;
		}
		x = (1LL * (x)%m * (x)%m)%m;
		n = n >> 1;
	}
	return res;
}

int main(void){

    int x = 3;
    int n = 1;
    int m = 2;
    cout << modularExponentiation(x, n, m);

    return 0;
}