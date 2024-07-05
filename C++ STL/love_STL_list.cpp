// #include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;

int main(){
    // list STL is created by using doubly linked list
    // list are sequence containers that allow non-contiguous memory allocation
    // begin(), end(), empty(), back(),.. etc. -> O(1)
    // erase() -> O(n)

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    cout << "l: ";
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;
    // erase
    l.erase(l.begin());
    // l.pop_front();       //we can use this in alternative
    cout << "After erase first element in list, l: ";
    for(auto it : l){
        cout << it << " ";
    }
    cout << endl;
    
    // size of list
    cout << "Size of l: " << l.size() << endl;

    cout << "l2: ";
    list<int> l2(5, 100);
    for(int i : l2)
        cout << i << " ";    
    cout << endl;

    // swap
    list<int> l3, l4;
    for(int i = 0; i < 10; i++){
        l3.push_back(i * 2);
        l4.push_front(i * 3);
    }
    l3.swap(l4);
    cout << "l3: ";
    for(auto it : l3)
        cout << it << " ";
    cout << endl;
    cout << "l4: ";
    for(auto it : l4)
        cout << it << " ";
    cout << endl;
    
    // sort
    l3.sort();
    cout << "After sorting, l3: ";
    for(list<int>::iterator it = l3.begin(); it != l3.end(); ++it){
        cout << *(it) << " ";
    }
    cout << endl;

    // reverse
    l3.reverse();
    cout << "After reverse, l3: ";
    for(int i:l3)
        cout << i << " ";
    cout << endl;

    return 0;
}