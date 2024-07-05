#include<iostream>
using namespace std;

int main(void){
    int n = 5;
    int arr[n] = {1, 2, 4, 5, 6};
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout << "sum: " << sum << endl;
    return 0;
}