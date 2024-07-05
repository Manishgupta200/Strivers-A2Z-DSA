#include<iostream>
using namespace std;

// default private
class Hero{
    public:
    int health;
    char level;
};

int main(void){
    Hero shazam;    // Static allocation
    shazam.health = 70;
    shazam.level = 'A';
    cout << "Health is: " << shazam.health << endl;
    cout << "Level is: " << shazam.level << endl;
    return 0;
}