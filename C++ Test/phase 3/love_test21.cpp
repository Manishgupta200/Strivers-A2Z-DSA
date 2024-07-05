// Deep Constructor (copy)
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char *name;
    char level;

    Hero(){
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
};

int main(void){
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    cout << "Name: " <<  hero1.getName() << endl;
    cout << "Health: " <<  hero1.getHealth() << endl;
    cout << "Level: " <<  hero1.getLevel() << endl;
    hero1.print();

    // use default copy constructor

    // Hero hero2(hero1);
    Hero hero2 = hero1;
    hero2.print();
    cout << endl;
    
    // after changing the value
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
    return 0;
}