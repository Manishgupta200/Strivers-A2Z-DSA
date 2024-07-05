// Why arr[0] cahnged in the main function?
// Because array send it's first address. So, when any changes occures in outer function affects the value of array in main function also.
#include<iostream>
using namespace std;

void updateFun(int arr[], int n){
    // update arr[0]
    arr[0] = 120;
    cout << "In updateFun: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){
    int n = 3;
    int arr[n] = {1, 2, 3};

    cout << "In main(): ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    updateFun(arr, n);

    cout << "In main(): ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}