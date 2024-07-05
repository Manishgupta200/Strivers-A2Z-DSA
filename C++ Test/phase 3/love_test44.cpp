// Default arguments
#include<iostream>
using namespace std;

int add(int x, int y, int z = 0, int w = 0){
    return x + y + z + w;
}

int main(void){
    cout << add(1, 2, 3, 4) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add(1, 2) << endl;
    return 0;
}