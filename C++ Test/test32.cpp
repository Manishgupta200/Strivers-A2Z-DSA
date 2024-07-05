#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i = 1;
    int sum = 0;
    while(i <= n){
        // number
        int j = 1;
        while(j <= (n-i+1)){
            cout << j;
            j++;
        }
        // star
        j = 1;
        while(j < (2*i - 1)){
            cout << "*";
            j++;
        }
        // number
        j = 1;
        while(j <= (n-i+1)){
            cout << (n-i-j+2);
            j++;
        }
        cout << endl;
        i++;
    }

    // for(int i = 1; i <= n; i++){
    //     // number
    //     for(int j = n; j >= i; j--){
    //         cout << n-j+1;
    //     }
    //     // star
    //     int star = 2*i - 1;
    //     for(int j = 1; j < star; j++){
    //         cout << "*";
    //     }
    //     // number
    //     for(int j = n; j >= i; j--){
    //         cout << j-i+1;
    //     }
    //     cout << endl;
    // }
    return 0;
}