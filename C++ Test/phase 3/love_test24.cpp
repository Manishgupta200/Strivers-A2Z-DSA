// Const Keyword
#include<iostream>
using namespace std;

class Hero{
    public:
    int value;

    Hero(int value = 0){
        this->value = value;
    }

    int getValue() const{
        return value;
    }

    // setter
    void setValue(int value){
        this->value = value;
    }
};

int main(void){
    // non-const object invoking const function, no error
    Hero h1(10);
    cout << h1.getValue() << endl;

    // const object invoking const function, no error
    const Hero h2(20);
    cout << h2.getValue() << endl;

    // const object invoking non-const function, CTE
    // const Hero h3(30);
    // h2.setValue(435);

    // non-const object invoking non-const function, no error
    Hero h4;
    h4.setValue(98);
    return 0;
}