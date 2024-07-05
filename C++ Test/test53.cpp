#include<iostream>
using namespace std;
// UNCOMPLETED
int main(void){
    int n = 73;
        long long res = 0;
        long long m = n;  // ye karna important h bhai
        while(m != 0){
            int rem = m % 10;
            res = rem + (res * 10);
            m /= 10;
        }
        // cout << res << endl;
        long long sum = n + res;
        // cout << sum << endl;
        long long m2 = sum;
        long long res2 = 0;
        while(m2 != 0){
            int rem = m2 % 10;
            res2 = rem + (res2 * 10);
            m2 /= 10;
        }
        cout << res2 << endl;
        if(sum == res2) cout << sum << endl;
        else            cout << -1 << endl;
    return 0;
}