// INHERITANCE
// public - public
#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

// Male class inherit properties of Human class
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout << "male is sleeping\n";
    }
};

int main(void){
    Male first;
    cout << first.age << endl;
    first.sleep();
    first.setWeight(321);
    cout << first.weight << endl;
    return 0;
}