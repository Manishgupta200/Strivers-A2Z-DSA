#include<iostream>
using namespace std;

int main(void){
    int n = 5;;
    // cout << "Enter the value of n: ";
    // cin >> n;

    int i = 1;
    for(; ;){
        if(i <= n){
            cout << i << " ";
        }
        else{
            break;
        }

        i++;
    }
    cout << endl;

    for(int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--){
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}