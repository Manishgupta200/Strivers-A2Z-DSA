#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

// Brute Force Approach
// Time Complexity: O(n), because the loop has to run from 1 to n always.
// Space Complexity: O(1), we are not using any extra space.
void printDivisorsBruteForce(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}

// Optimized approach
void printDivisors2(int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";
            if(n / i != i){
                cout << (n/i) << " ";
            }
        }
    }
}

// optimized approach
void printDivisors3(int n){
    vector<int> v;
    // TC of this for loop-> O(sqrt(n)) ----    i
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if((n/i) != i){
                v.push_back(n/i);
            }
        }
    }

    // TC of sorting -> O(no. of factor * log(no. of factor)) ---- ii
    sort(v.begin(), v.end());

    // TC of this for loop -> O(no. of factor) ---- iii
    for(auto it : v){
        cout << it << " ";
    }

    // So, overall TC is (i + ii + iii)
}

int main(void){
    printDivisorsBruteForce(36);
    cout << endl;
    printDivisors2(36);
    cout << endl;
    printDivisors3(36);
    return 0;
}