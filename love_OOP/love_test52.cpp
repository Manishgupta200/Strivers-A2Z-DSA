// Exception handeling try, catch, throw
#include<bits/stdc++.h>
using namespace std;

int main(void){
    try{
        throw 100;
    }
    catch(int param){
        cout << "Exception";
    }
    catch(...){
        cout << "Default";
    }

    return 0;
}