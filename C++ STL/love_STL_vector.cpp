// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // inserting or deleting in beginning takes linear time
    // inserting at end takes constant time
    // vector is same as array but memory in vector is dynamic.
    vector<int> v;
    // capacity - alloated default storage
    cout << "Capacity: " << v.capacity() << endl;   //0
    // push_back add element in vector
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;   //1
    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;   //2
    v.emplace_back(2);
    cout << "Capacity: " << v.capacity() << endl;   //4

    cout << "v: ";
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // vectorName.size() - define the size of the vector
    cout << "Size if vector: " << v.size() << endl;
    // vectorName.resize(4) - resizes the vector size to 4
    v.resize(4);
    cout << "After resizing v.size(): " << v.size() << endl;

    cout << "v after resizing: ";
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // max_size
    cout << "max_size(): " << v.max_size() << endl;
    cout << "Element at 2nd index: " << v.at(1) << endl;
    cout << "Element at 4nd index: " << v.at(3) << endl;
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // vectorName.data() - return the address of first element. Need to add star (dereference operator) at printing time to get the value 
    int *pos = v.data();
    cout << "v.data(): " << *pos << endl;

    // pop_back() - delete element from last
    v.pop_back();
    cout << "After poped-up: ";
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // clear() - clear all element from vector i.e. size is zero but capacity of vector is not equal to zero
    v.clear();
    cout << "Size: " << v.size() << " " << "Capacity: " << v.capacity() << endl;

    if(v.empty() == false)
        cout << "v is not empty\n";
    cout << "v is empty\n";

    // fill the vector "10" five times
    v.assign(5, 10);
    cout << "v.assign(5, 10): ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // insert 5 at beginning
    v.insert(v.begin(), 5);     // v.emplace(v.begin(), 5); also used
    cout <<"v.insert(v.begin(), 5): ";
        for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // remove first element
    v.erase(v.begin());
    cout << "First element of v: " << v[0] << endl;

    // define the size of vector as 5 and initialize it with 1. i.e. all five elements of vector is 1
    // if we don't want to initialize it with 1 then the default initialization is 0.
    // cout << "Value of a: ";
    vector<int> a(5, 1);
    auto it = a.end();
    it--;
    cout << "Begin: " << *(it) << endl;
    vector<int>::iterator it2 = a.begin();
    cout << "End: " << *(it2) << endl; 

    cout << "a: ";
    for(auto it = a.begin(); it != a.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // copy element from one vector to another
    vector<int> b(a);
    cout << "b: ";
    for(auto it : b){
        cout << it << " ";
    }
    cout << endl;
    
    cout << "b.capacity(): " << b.capacity() << endl;
    b.push_back(4);

    // print all b
    cout << "After push_back element '4', value of b: ";
    for(auto it : b){
        cout << it << " ";
    }
    cout << endl;
    cout << "After push_back an extra element \"4\" at last in b, b.capacity():- " << b.capacity() << endl;

    // vectorName.shrink_to_fit() - reduces the capacity of container to fit its size and destroy all elements
    b.shrink_to_fit();
    cout << "b.capacity():- " << "after shrink_to_fit: " << b.capacity() << endl;

    // print all b
    cout << "After shrink_to_fit b: ";
    for(auto it : b){
        cout << it << " ";
    }
    cout << endl;

    // vector<int> v1, v2;  

    return 0;
}