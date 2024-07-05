// Static function
// -> no need to create object
// -> no this keyword allowed
// -> static function sirf static member ko use kar sakta hai
#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    static int timeToComplete;

    static int random(){
        // return health;   //error because static function can access only static member
        return timeToComplete;
    }
    
};

int Hero::timeToComplete = 5;

int main(void){
    cout << Hero::random() << endl;
    return 0;
}