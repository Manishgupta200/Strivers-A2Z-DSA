#include<iostream>
using namespace std;
int main(){
    int n = 5;
        for(int i = n; i > 0; i--){
            for(int j = i; j <= n; j++){
                cout << (j + 1) - i  << " ";
            }
            
            for(int k = i - 1; 2 * k > 0; k--){
                cout << "@";
            }
        cout << endl;
        }
    return 0;
}