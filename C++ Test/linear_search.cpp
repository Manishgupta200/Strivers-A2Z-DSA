#include<iostream>
using namespace std;

int checkNum(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num) return 1;
    }
    return 0;
}

int main(void){
    int n = 6;
    int arr[n] = {3, -11, 3, 5, 0, 5};
    cout << "Enter num to find in array: ";
    int num;
    cin >> num;
    bool findNum = checkNum(arr, n, num);
    if(findNum) cout << "Num found in Array\n";
    else cout << "Num not found\n";
    return 0;
}