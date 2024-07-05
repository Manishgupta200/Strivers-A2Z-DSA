#include<iostream>
using namespace std;
// UNCOMPLETE
int main(void){
    int n = 3;
    int a[n] = {2, 3, 2};
    int size = n;
        int b[n];
        int i = 0;
        cout << size << endl;
        while(size > 2){
            b[i] = a[n-i-1];
            i++;
            size--;
        }   
        for(auto it : b){
            cout << it << " ";
        }
        cout << endl;
        cout << (a == b) << endl;
    return 0;
}