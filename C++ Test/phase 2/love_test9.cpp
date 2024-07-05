#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[10] = {2, 5, 1, 4};
    // arr = arr + 1;  // ERROR
    *arr = *arr + 1;    
    cout << arr[0] << endl; // return 3

    int *ptr = &arr[0];
    ptr = ptr + 1;
    cout << *ptr << endl;   // return 5
    ptr = arr;      // ptr suru se start kar liya
    cout <<"kkk " << *ptr << endl;  // return 3
    *ptr = *ptr + 1;    // aab arr[0] ka value ek increment ho gaya 
    cout << *ptr << endl;   // return 4
    
    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";  // {4, 5, 1, 4}
    }
    cout << endl;

    int x = 7;
    int *c = &x;
    c = c + 1;
    cout << *c << endl;     // GARBAGE VALUE RETURN
    cout << x << endl;      // return 7

    int *p = &x;
    *p = *p + 1;
    cout << *p << endl;     // return 8
    cout << x << endl;      // return 8
    return 0;
}