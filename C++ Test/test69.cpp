#include<iostream>
#include<algorithm>
using namespace std;

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        long long arr2[N];
        for(int i = 0; i < N; i++){
            arr2[i] = arr[i];
        }
        sort(arr2, arr2+N);
        if(arr2 == arr) return 0;


        long long count = 0;
        for(int i = 0; i < N-1; i++){
            for(int j = i+1; j < N; j++){
                if(arr[i] > arr[j]) count++;
            }
        }
        return count;
    }

int main(void){
    long long n = 4;
    long long arr[n] = {2, 4, 1, 3, 5};
    cout << inversionCount(arr, n);
    return 0;
}