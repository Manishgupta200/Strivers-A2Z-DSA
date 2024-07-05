#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    char *name;

    Hero(){
        name = new char[100];
    }

    Hero(Hero &temp){
        cout << "---";
        this->name = temp.name;
    }

    // getter
    string getName(){
        return name;
    }

    // setter
    void setName(char name[]){
        // this->name = name;
        strcpy(this->name, name);
    }

    void print(){
        cout << this->name << endl;
    }

};

int main(void){
    Hero hero1;
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    cout << endl;
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
    return 0;
}