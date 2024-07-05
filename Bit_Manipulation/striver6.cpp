#include<iostream>
using namespace std;
// check if the ith bit is set or not
int main(void){
    // Never ever alter the data that is given to you
    // int a = 13;
    // int x = 2;
    // if(((a >> x) & 1) == 0){
    //     cout << "not set\n";
    // }
    // else{
    //     cout << "set\n";
    // }

    int a = 13;
    int x = 2;
    int mask = (1 << x);
    bool check = (mask & a);
    cout << check << endl;
    return 0;
}