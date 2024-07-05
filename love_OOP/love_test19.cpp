// Deep copy
#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    char *name;

    Hero(){
        name = new char[100];
    }

    // copy constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    // setter
    void setName(char name[]){
        this->name = name;
    }

    void print(){
        cout << "name: " << this->name << endl;
    }
};

int main(void){
    Hero h1;
    char name[7] = "Babbar";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h2.name[0] = 'G';
    h2.print();
    h1.print();
    return 0;
}