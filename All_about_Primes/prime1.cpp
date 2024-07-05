// https://practice.geeksforgeeks.org/problems/number-of-factors1435/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

// TC -> O(n)
// SC -> O(1)
int primeCheck(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2) return 1;
    else    return 0;
}

// TC -> O(sqrt(n))
// SC -> O(1)
int primeCheck2(int n){
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            count++;
            if(i != n/i){
                count++;
            }
        }
    }
    if(count == 2) return 1;
    else    return 0;
}

int main(void){
    int n = 3;
    // cout << primeCheck(n);

    cout << primeCheck2(n);
    return 0;
}