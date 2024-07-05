// stack implimentation
#include<iostream>
using namespace std;

class Stack{
    public:
    // properties
    int size;
    int *arr;
    int top;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow\n";
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow\n";
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty\n";
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(void){
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.push(27);    // overflow

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << endl;

    cout << "stack is empty: " << st.isEmpty() << endl;
    return 0;
}