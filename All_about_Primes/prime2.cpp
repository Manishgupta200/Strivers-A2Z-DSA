// https://codeforces.com/problemset/problem/1294/C
#include<bits/stdc++.h>
using namespace std;
// TC -> O(sqrt(N));
void check(long long m){
    long long n = m;
    long long a,b,c;
    a = b = c = 1;
    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0){
            a = i;
            break;
        }
    }

    n =  n / a;
    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0){
            // nitish ne iss below if statement samjhaya h
            if(i != a && (n/i) != i){
                b = i;
                c = n/i;
                break;
            }
        }
    }

    if(a == 1 || b == 1 || c == 1 || (a*b*c) > m){
            cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << a << " " << b << " " << c << endl;
    }
}

int main(void){
    int t;
    cin >> t;
    long long n;
    for(int i = 1; i <= t; i++){
        cin >> n;
        check(n);
    }
    return 0;
}