// Default is Shallow Constructor (copy)
// Default copy constructor Shallow copy karta hai
#include<iostream>
using namespace std;

class Hero{
    public:
    char *name;

    Hero(){
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     this->name = temp.name;
    //     cout << "this copy constructor called\n";
    // }

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

   // use default (in-built) copy constructor
    Hero h2(h1);
    h2.print();

    h2.name[0] = 'G';
    h2.print();
    h1.print();
    return 0;
}