#include<iostream>
using namespace std;

// default private
class Hero{
    private:
    int health;

    public:
    char level;

    // getter
    int getHealth(){
        return health;
    }
    // setter
    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }
    void setSevel(char ch){
        level = ch;
    }
};

int main(void){
    Hero shazam;
    // first int health takes 4 byte
    // second char takes 1 byte and 3 byte padding
    // So, total size is 8 byte
    cout << "size: " << sizeof(shazam) << endl;
    
    shazam.setHealth(70);
    shazam.level = 'A';
    cout << "Health is: " << shazam.getHealth() << endl;
    cout << "Level is: " << shazam.level << endl;
    return 0;
}