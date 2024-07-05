#include<iostream>
#include<algorithm>
using namespace std;

// Largest element in array
int main(void){
    int n = 6;
    int arr[n] = {12, 35, 1, 10, 34, 1};
    	int maxm;
        int maxm2 = min(arr[0], arr[n-1]);
	    int res = 0;
        for(int i = 0; i < n/2; i++){
            maxm = max(arr[i], arr[n-i-1]);
            if(res < maxm){
                res = maxm;
            }
        }
        if(n % 2 != 0) res = max(res, arr[n/2]);
        cout << res;
    return 0;
}