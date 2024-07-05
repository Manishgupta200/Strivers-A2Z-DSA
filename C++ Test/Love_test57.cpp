#include<iostream>
using namespace std;

// Prime Number
bool isPrime(int n){
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    if(count == 2)  return 1;
    else    return 0;
}

int main(void){
    cout << "Enter number: ";
    int num;
    cin >> num;
    cout << isPrime(num) << endl;
    return 0;
}