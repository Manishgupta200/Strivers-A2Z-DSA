#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n = 8;
    int arr[n] = {1, 1, 0, 0, 0, 0, 1, 0};
    int left = 0, right = n-1;
    while(left < right){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        while(arr[left] == 0 && left < right) left++;
        while(arr[right] == 1 && left < right) right--;

        if(left < right){
            swap(arr[left], arr[right]);
            left++; right--;
        }


    }
    return 0;
}