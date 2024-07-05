#include<iostream>
using namespace std;

int count = 0;

void f(){
    // Base Condition
    if(count == 3)  return;
    cout << count << endl;
    count++;
    f();
}

int main(void){
    f();
    return 0;
}