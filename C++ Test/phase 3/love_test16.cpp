#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char *name;

    Hero(){
        name = new char[100];
        cout << "constructor called\n";
    }

    // setter
    void setName(char name[]){
        this->name = name;
        // strcpy(this->name, name);
    }

    void print(){
        cout << "health: " << this->health << endl;
        cout << "name: " << this->name << endl;
    }

    // getter used for printing output
    string getName(){
        return this->name;
    }
};

int main(void){
    Hero h1;

    h1.health = 435;

    char name[7] = "Babbar";
    h1.setName(name);

    h1.print();

    cout << "Print name by getter method: " << h1.getName() << endl;
    return 0;
}