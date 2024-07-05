// INHERITANCE
// public - protected
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
class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout << "male is sleeping\n";
    }

    // getter
    int getHeight(){
        return height;
    }
};

int main(void){
    Male first;
    first.sleep();
    cout << first.getHeight() << endl;
    return 0;
}