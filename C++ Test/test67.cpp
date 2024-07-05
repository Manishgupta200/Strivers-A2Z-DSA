#include<iostream>
using namespace std;

    int remove_duplicate(int a[],int n){
        // code here
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] != a[i+1]){
                a[count] = a[i];
                count++;
            }
        }
        a[count++] = a[n-1];
        cout << count << endl;
    }

int main(void){
    int n = 5;
    int arr[n] = {2, 2, 2, 2, 2};
    remove_duplicate(arr, n);
    return 0;
}