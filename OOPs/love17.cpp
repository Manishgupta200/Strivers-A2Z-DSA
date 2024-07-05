// Destructor - (memory de-allocate)
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char *name;
    char level;

    Hero(){
        cout << "Constructor called\n";
        name = new char[100];
    }
    
    // copy constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);

        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }

    string getName(){
        return name;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout << "Name: " << this->name << " " << "Health: " << this->health << " " << "Level: " << this->level << endl;
    }

    // Destructor
    ~Hero(){
        cout << "Destructor called\n";
    }
};

int main(void){
    // Static
    Hero a;     // static ke liye destructor automatically called ho gaya

    // Dynamic
    Hero *b = new Hero();   
    // Dynamic ke liye manually destructor call karne padega
    delete b;

    return 0;
}