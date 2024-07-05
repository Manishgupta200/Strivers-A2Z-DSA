#include<iostream>
using namespace std;

class Hero{
    public:
    static int timeToComplete;
};

// :: -> scope resolution operator
int Hero::timeToComplete = 5;
// data type - className - scope resolution operator - fieldName = value
int main(void){
    // static member allocation class ko belong karta hai
    cout << Hero::timeToComplete << endl;

    // bad practice
    // Hero a;
    // cout << a.timeToComplete << endl;

    // Hero b = a;
    // b.timeToComplete++;
    // cout << b.timeToComplete << endl;

    
    return 0;
}