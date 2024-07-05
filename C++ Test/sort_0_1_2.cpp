#include<iostream>
#include<algorithm>
using namespace std;

void printArr(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort012(int *arr, int n)
{
    //   Write your code here
    // 1st approach
    // sort(arr, arr+n);
    // printArr(arr, n);

    // 2nd approach
    // int count[3] = {0, 0, 0};
    // for(int i = 0; i < n; i++){
    //     count[arr[i]]++;
    // }
    // int i = 0;
    // while(count[0]--) arr[i++] = 0;
    // while(count[1]--) arr[i++] = 1;
    // while(count[2]--) arr[i++] = 2;
    // printArr(arr, n);

    // 3rd 3-pointer approach
    int zero = 0, curr = 0, two = n-1;
    while(curr <= two){
        if(arr[curr] == 0){
            swap(arr[curr], arr[zero]);
            curr++; zero++;
        }
        else if(arr[curr] == 1){
            curr++;
        }
        else if(arr[curr] == 2){
            swap(arr[curr], arr[two]);
            two--;
        }
    }
    printArr(arr, n);
}

int main(void){
    int n = 9;
    int arr[n] = {0, 2, 2, 1, 0, 1, 1, 0, 2};

    // int n = 10;
    // int arr[n] = {0, 0, 0, 0, 0, 1, 0, 0, 0, 1};
    sort012(arr, n);
    return 0;
}