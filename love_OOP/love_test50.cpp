// Exception handeling try, catch, throw
#include<bits/stdc++.h>
using namespace std;

int main(void){
    try{
        int age = 12;
        if(age >= 18){
            cout << "Yes\n";
        }
        else{
            throw (age);
        }
    }
    catch(int num){
        cout << "No " << num << endl;
    }
    return 0;
}