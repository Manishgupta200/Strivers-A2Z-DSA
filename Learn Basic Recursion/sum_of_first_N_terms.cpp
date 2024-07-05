#include<iostream>
using namespace std;

// Parameterised
void sum_of_n_terms(int i, int sum){
    if(i < 1){
        cout << "sum: " << sum;
        return;
    }
    sum_of_n_terms(i-1, sum + i);
}

int sum = 0;
void sum_of_n_terms2(int N){
            if(N < 1){
            cout << "sum: " << sum;
            return;
        }
        sum = sum + N;
        sum_of_n_terms2(N-1);
}

// Functional
int sum_of_first_n_terms3(int n){
    if(n == 0) return 0;
    return n + sum_of_first_n_terms3(n - 1);
}

int main(void){
    sum_of_n_terms(3, 0);
    cout << endl;
    sum_of_n_terms2(3);
    cout << endl << "sum: " << sum_of_first_n_terms3(3) << endl;
    return 0;
}