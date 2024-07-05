#include<bits/stdc++.h>
using namespace std;

int main(void){
    cout << "Enter name: ";
    string name;
    getline(cin, name);     // implementing a getline() function  
    cout << name << endl;

    cout << "Enter name2: ";
    string name2;
    // When we do not want to read the character after space then we use the following code:
    getline(cin, name2, ' ');   // implementing getline() function with a delimiting character.  
    cout << name2 << endl;

    cout << "Your fav. fruit is: ";
    char fruit[50];
    cin.getline(fruit, 50); // implementing getline() function  
    cout << fruit << endl;
    return 0;
}