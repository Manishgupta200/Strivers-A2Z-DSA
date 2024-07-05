// Operator Overloading
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    // constructor
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }
    public:
    // oparator overloading
    Complex operator+ (Complex const &obj){
        Complex a;
        a.real = real + obj.real;
        a.img = img + obj.img;
        return a;
    }

    // print
    void print(){
        cout << this->real << " + i" << this->img << endl;
    }

};

int main(void){
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}