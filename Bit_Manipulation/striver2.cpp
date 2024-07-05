#include<iostream>
using namespace std;
// find unique element in array (array contain every element in even no. of times and one unique number is present)
int main(void){
    int arr[7] = {2, 2, 1, 5, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = 0;
    for(int i = 0; i < n; i++){
        unique = unique ^ arr[i];
    }
    cout << unique;
    return 0;
}