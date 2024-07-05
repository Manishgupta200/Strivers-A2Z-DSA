// Static function
// -> no need to create object
// -> no this keyword allowed
// -> static function sirf static member ko use kar sakta hai
#include<iostream>
using namespace std;

class Hero{
    public:
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main(void){
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    return 0;
}