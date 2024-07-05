#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long GCD;
        long long LCM;

        vector<long long> v;

        if(A < B)   swap(A, B);

        while(A % B != 0){
            long long rem = A % B;
            A = B;
            B = rem;
        }
        GCD = B;
        LCM = (6 * 8) / GCD;

        v = {LCM, GCD};
        return v;
    }

    // striver approach

// Traverse from 1 to min(a,b).
// And check if i is divisible by both a and b.If yes store it in the answer.
// Find the maximum value of i which divides both a and b.

    // BRUTE FORCE APPROACH
    // Worst case time complexity is O(min(num1, num2))
    void gcdOfNum(int num1, int num2){
        int ans;
        for(int i = 1; i <= min(num1, num2); i++){
            if(num1 % i == 0 && num2 % i == 0){
                ans = i;
            }
        }
        cout << "GCD: " << ans << endl;
    }
    // Worst case time complexity is O(min(num1, num2))
    void gcdOfNum2(int num1, int num2){
        for(int i = min(num1, num2); i >= 1; i--){
            if(num1 % i == 0 && num2 % i == 0){
                cout << "GCD: " << i;
                break;
            }
        }
        cout << endl;
    }

    // TC -> O(log(min(a, b))) -> base of log is fii
    void gcdOfNum3(int a, int b){
        while(a > 0 && b > 0){
            if(a > b) a = a % b;
            else      b = b % a;
        }
        if(a == 0) cout << "gcd: " << b << endl;
        else       cout << "gcd: " << a << endl;
    }

int main(void){
    vector<long long> v = lcmAndGcd(6, 8);
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    gcdOfNum(48, 18);
    gcdOfNum2(48, 18);
    gcdOfNum3(48, 18);
    return 0;
}