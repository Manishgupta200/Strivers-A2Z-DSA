#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

int main(){
    // LIFO - (last in first out)   plates in container
    stack<string> stk;
    stk.push("love");
    stk.push("kumar");
    stk.emplace("babbar");
    
    cout << "Top: " << stk.top() << endl;
    stk.pop();
    cout << "Top: " << stk.top() << endl;
    cout << "Size of the stack: " << stk.size() << endl;
    cout << "Stk is empty or not: " << stk.empty() << endl;

    stk.push("Farhan");
    // print stk
    cout << "stk: ";
    // ! is not operator
    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}