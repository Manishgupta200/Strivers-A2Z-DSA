#include<bits/stdc++.h>
using namespace std;

int main(void){
    int arr[] = {5,1,15,20,25};
    int i,j,k;
    i = ++arr[1];
    j = arr[1]++;
    k = arr[i++];

    cout << i << " " << j << " " << k << endl;
    return 0;
}