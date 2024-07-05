// https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
#include<iostream>
using namespace std;
// find unique
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

// XOR -> for same bit return 0 otherwise return 1;
int main(void){
    int n = 7;
    int arr[n] = {2, 3, 7, 6, 3, 6, 2};
    cout << findUnique(arr, n);
    cout << endl;
    cout << (3 ^ 4 ^ 3) << endl;
    cout << (-3 ^ 4 ^ -3) << endl;
    cout << (1 ^ 2) << endl;
    cout << (0 ^ 2) << endl;
    return 0;
}