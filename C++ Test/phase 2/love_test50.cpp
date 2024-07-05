#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i = 65;
    int *p = &i;
    // TYPE CASTING
    char *pc = (char*) p;
    cout << *pc << endl;
    return 0;
}