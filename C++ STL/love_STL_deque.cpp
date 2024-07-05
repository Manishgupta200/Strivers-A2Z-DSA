// #include<bits/stdc++.h>
#include<iostream>
#include<deque>
using namespace std;

void printDeque(auto d){
    cout << "d: ";
    for(auto it : d){
        cout << it << " ";
    }
    cout << endl;
}

int main(){

    // Accessing of element - O(1)
    // Insertion or removal of elements at start or end - O(1)
    // Insertion or removal of element - O(n)

    // queue allows insertion only at the end and deletion from the front (like line to get a movie ticket)
    // deque is same as vector, with an addition of push and pop operation for both front and back

    deque<int> d;

    d.push_back(1);     //{1}
    d.push_front(2);    //{2, 1}
    d.emplace_front(3); //{3, 2, 1}
    d.emplace_back(5);  //{3, 2, 1, 5}

    // print d
    printDeque(d);

    // size
    cout << "max_Size: " << d.max_size() << endl;

    cout << "d.front(): " << d.front() << ", " << "d.back(): " << d.back() << endl;
    cout << "First index element: " << d.at(0) << endl;
    d.pop_front();
    cout << "First index element after pop_front: " << d.at(0) << endl;
    d.pop_back();
    cout << "Last index element after pop_back: " << d.at(d.size() - 1) << endl;
    cout << "Empty or not: " << d.empty() << endl;

    cout << "Before erase:- " << "size:- " << d.size() << " & d: ";
    printDeque(d);
    // erase
    
    d.erase(d.begin(), d.begin() + 1);      // d.erase(d.begin()); use also in alternative
    cout << "After erase:- " << "size:- " << d.size() << " & d: ";
    printDeque(d);


    return 0;
}