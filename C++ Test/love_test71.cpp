// Max and Min element from array
#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){
    // int max = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     if(num[i] > max) max = num[i];
    // }
    // return max;

    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int getMin(int num[], int n){
    // int min = INT_MAX;
    // for(int i = 0; i < n; i++){
    //     if(num[i] < min) min = num[i];
    // }
    // return min;

    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        mini = min(mini, num[i]);
    }
    return mini;
}

int main(void){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int num[100];
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    cout << "Maximum of array: " << getMax(num, size) << endl;
    cout << "Minimum of array: " << getMin(num, size) << endl;
    return 0;
}