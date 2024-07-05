#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(void){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    // name[2] = '\0'; // null character
    cout << name << endl;

    cout << "Length: " << getLength(name) << endl;
    return 0;
}