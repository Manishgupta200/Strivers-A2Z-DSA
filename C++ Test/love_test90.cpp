#include<bits/stdc++.h>
using namespace std;

int main(void){
    cout << "Fruit name: ";
    char fruitName[50];
    cin.getline(fruitName, 50);
    cout << fruitName << endl;

    int len = strlen(fruitName);
    cout << "Length: " << len << endl;

    cout << endl;

    cout << "Vegitable name: ";
    char vegitableName[50];
    cin.getline(vegitableName, 50);
    cout << vegitableName << endl;

    int len2 = strlen(vegitableName);
    cout << "Length: " << len2 << endl;

    // compare fruitName and vegitableName
    cout << strcmp(fruitName, vegitableName) << endl;   // if true return '0' else reture garbage int. value

    // copy element
    char nonVeg[50];
    strcpy(nonVeg, fruitName);    // strcpy(destination, source);
    cout << "nonVeg: " << nonVeg << endl;
    return 0;
}