#include<iostream>
using namespace std;

int main(void){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int p = (arr + 1)[5];
    cout << p << endl;
    return 0;
}