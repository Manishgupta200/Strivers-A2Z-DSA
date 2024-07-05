#include<iostream>
using namespace std;

void updateVar(int *b){
    *b += 10;
    cout << *b << endl;
}

int main(){
    int a = 7;
    updateVar(&a);
    return 0;
}