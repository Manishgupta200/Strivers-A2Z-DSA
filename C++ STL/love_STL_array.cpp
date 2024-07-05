// #include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>


using namespace std;

int main(){

    int basic[3] = {1, 3, 5};

    // STL array
    array<int, 4> a = {1, 3, 2, 4};
    // sizeof() used to get the total of array in bytes
    int size = sizeof(a);
    // size() or max_size() used to get the maximum size of array
    size = a.size();
    cout << "size: " << size << endl;
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index: " << a.at(1) << endl;    // std::out_of_range in case of size outer from range
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;
    cout << "Array is empty or not: " << a.empty() << endl;
    
    // begin() print address of first element
    auto it = a.begin();
    cout << "Begin: " << *(it) << endl;

    // end() print address after the last element. So, need to decrement by one
    auto it2 = a.end();
    it2--;
    cout << "End: " << *(it2) << endl;

    // sorted array
    cout << "Sorted array: ";
    sort(a.begin(), a.end());
    for(auto it : a){
        cout << it << " ";
    }
    cout << endl;

    // filling whole array with a number
    a.fill(15);
    cout << "Fill: ";
    for(array<int, 4>::iterator it = a.begin() ; it < a.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // string array
    cout << "String: ";
    array<string, 2> strArray = {{string("a"), "b"}};
    for(auto s : strArray){
        cout  << s << " ";
    }
    cout << endl;

    // char array
    array<char, 4> charArray = {'A', 'G', 'A'};
    cout << "Char: " << charArray[0] << " " << charArray[1] << endl;
    
    // swap array   (condition size of bothe the array is same)
    array<char, 4> charArray2 = {'K', 'G', 'm', 'T'};
    charArray.swap(charArray2);

    cout << "charArray.front(): " << charArray.front() << " - " << "charArray2.front(): " << charArray2.front() << endl;

    // arrayName.data() returns the pointer the first element of the array object
    cout << "charArray2.data(): " << *(charArray2.data()) << "\n";
    return 0;
}