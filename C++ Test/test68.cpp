#include<iostream>
#include<algorithm>
using namespace std;

    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        
        long long int min = 0;
        for(int i = 0; i < n; i++){
            min = min + (a[i] * b[i]);
        }
        return min;
    }

int main(void){
    int n = 3;
    int a[n] = {3, 1, 1};
    int b[n] = {6, 5, 4};
    cout << minValue(a, b, n);
    return 0;
}