#include<iostream>
using namespace std;
// xor from l to r
int main(void){
    int l = 2, r = 4;
    if(r % 4 == 0){
    }
    else if(r % 4 == 1){
        r = 1;
    }
    else if(r % 4 == 2){
        r = r+1;
    }
    else if(r % 4 == 3){
        r = 0;
    }

    l = l-1;
    if(l % 4 == 0){
    }
    else if(l % 4 == 1){
        l = 1;
    }
    else if(l % 4 == 2){
        l = l+1;
    }
    else if(l % 4 == 3){
        l = 0;
    }

    cout << (l ^ r) << endl;
    return 0;
}