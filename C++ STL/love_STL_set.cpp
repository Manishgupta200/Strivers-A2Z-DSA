// #include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;

void printSet(set<int> st){
    cout << "s: ";
    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    // set can take any data type
    // The set stores the element in sorted order
    // All the elements in a set have unique value
    // The value of the set cannot be modified when it is added to the set, though it is possible to remove and then add the modified value of that element. 
    // Thus, the values are immutable.
    // Sets follow Binary search tree implimentation
    // The value in a set are unindexed
    // Set is slower than unordered_set
    // Time complexity in insertion, deletion, find, erase, count, lower_bound, upper_bound -> O(log n)
    // Time complexity in size, begin, end, empty -> O(1)

    // Use multiset to print same different values
    // To store element in unsorted (random) order, unordered_set can be used.

    cout << "set\n";
    set<int> s;

    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(3);
    printSet(s);    //{0, 3, 4, 5, 6}

    set<int>::iterator it = s.begin();
    it++;               //it = it + 1 does not work
    it++;
    s.erase(it);
    printSet(s);    //{0, 3, 5, 6}
    s.erase(s.begin(), s.find(5));
    printSet(s);    //{5, 6}

    int erasedNum1 = s.erase(6);
    cout << "erasedNum1: " << erasedNum1 << endl;   //print 1 (true) because 6 was present in the set
    printSet(s);

    int erasedNum2 = s.erase(43);
    cout << "erasedNum2: " << erasedNum2 << endl;   //print 0 (false) because 43 was not present in the set
    printSet(s);

    cout << "5 is present or not: " << s.count(5) << endl;
    cout << "-5 is present or not: " << s.count(-5) << endl;

    set<int>::iterator it2 = s.find(5);
    cout << "Print set from 5: ";
    for(auto it = it2; it != s.end(); ++it){
        cout << *(it) << " ";
    }
    cout << endl;

    set<int> val1;   //defining an empty set
    val1 = {1, 4, 2, 5, 6, 5};   //defining a set with values

    cout << "val1: ";
    for(auto it : val1){
        cout << it << " ";
    }
    cout << endl;

    // set<int>::iterator itrr = val1.find(4);
    // for(auto it = itrr; it != val1.end(); it++){
    //     cout << *(it) << " ";
    // }

    // descending ordered set
    set<int, greater<int>> val2;
    val2 = {1, 4, 2, 5, 6, 5};

    cout << "val2: ";
    for(auto it : val2){
        cout << it << " ";
    }
    cout << endl;

    set<string, greater<string>> name = {"Munna", "Khan", "Pankaj"};
    // stored in alphabetical decreasing order.. traced by first digit
    cout << "name: ";
    for(auto it : name)
        cout << it << " ";
    cout << endl;

    set<string> copied_of_name(name.begin(), name.end());
    cout << "copied_of_name: ";
    for(auto it : copied_of_name){
        cout << it << " ";
    }
    cout << endl;


    // lower_bound & upper_bound
    set<int, greater<int>> s1 = {40, 30, 60, 20, 50, 50, 10};
    cout << "s1: ";     //print in descresing order
    set<int>::iterator itr;
    for(itr = s1.begin(); itr != s1.end(); itr++)
        cout << *(itr) << " ";
    cout << endl;
    cout << "s1.lower_bound(40): " << *s1.lower_bound(40) << " : " << "s1.upper_bound(40): " << *s1.upper_bound(40) << endl;

    set<int> s2(s1.begin(), s1.end());      //s2(s1) does not work
    cout << "s2: ";
    for(itr = s2.begin(); itr != s2.end(); itr++)
        cout << *(itr) << " ";
    cout << endl;

    cout << "s2.lower_bound(40): " << *s2.lower_bound(40) << " : " << "s2.upper_bound(40): " << *s2.upper_bound(40) << endl;
    // s2.erase(s2.begin(), s2.end());  //s2.(s2.begin(), s2.begin() + 2) does not work
    s2.erase(s2.begin(), s2.find(20));
    if(s2.size() == 0){
        cout << "s2 is empty\n";
    }
    else{
        cout << "s2: ";
        for(auto it : s2){
            cout << it << " ";
        }
        cout << endl;
    }
    cout << endl;

    s2.clear();
    cout << "After clear s2: ";
    for(auto it : s2){
        cout << it << " ";
    }
    return 0;
}