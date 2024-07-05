#include<iostream>
using namespace std;

int main(){
    int i = 0;
    for(; i < 5; i++){
        continue;
    }
    cout << i << endl;

    return 0;
}