// Friend Function
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    public:
    Rectangle(){
        length = 10;
    }
    // friend function
    friend int printLength(Rectangle);
};

int printLength(Rectangle b){
    b.length += 10;
    return b.length;
}

int main(void){
    Rectangle obj;
    cout << printLength(obj) << endl;
    return 0;
}