// #include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

/*void printName(string name){
    cout << "hey " << name << endl;
}*/
/*int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}*/

/*int maxx(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    return num2;
}*/

// pass by value (as a copy of the original element)---------------
/*void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}*/

/*void doSomething(string s){
    s[0] = 't';
    cout << s << endl;
}*/

// pass by reference (took the original element)----------------------
/*void doSomething(string &s){
    s[0] = 't';
    cout << s << endl;
}*/

// array always goes as reference----------------------------********
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " <<arr[0] << endl;
}

int main(){
    // cout << pow(2, 4) << "\n";
    // remberber - 1
    // int, long, long long
    // unsigned short - 2 byte, long - 4 byte, unsigned long - 4 byte, long long - 8 byte
    // float - 4 byte, double - 8 byte, long double - 12 bytes
    // string and getline
    /*string str;
    getline(cin, str);
    cout << str << endl;*/
    // char
    /*char ch;
    cin >> ch;
    cout << "character: " << ch;*/
    // if statement----------
    // int age;
    // cin >> age;
    // if(age < 18){
    //     cout << "not eligible for job";
    // }
    // else if(age <= 57){
    //     cout << "eligible for job";
    //     if(age >= 55){
    //         cout << ", but retirement soon";
    //     }
    // }
    // else{
    //     cout << "retirement time";
    // }
    // switch statement----------
    /*int day;
    cin >> day;
    switch(day){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
        default:
        cout << "Invalid";
    }*/
    // array---------------
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // arr[3] = 10;
    // cout << arr[3];
    // string--------------
    /*string s = "Striver";
    int len = s.size();
    s[len - 1] = 'w';     // always on single quote.. as character
    cout << s[len - 1];*/
    // for loop--------------
    /*int i;
    for(i = 1; i <= 25; i = i + 5){
        cout << "Striver " << i << endl;
    }
    cout << "Final i: "<< i;*/
    // while loop--------------
    /*int i = 1;
    while(i <= 5){
        cout << "Striver " << i << endl;
        i = i + 1;
    }
    cout << "Final value of i: " << i;*/
    /*int i = 6;
    do{
        cout << "Striver " << i << endl;
        i = i + 1; 
    }while(i <= 5);
    cout << "Final i: " << i;*/
    // function-------------------
    /*string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);*/

    /*int num1, num2;
    cin >> num1 >> num2;
    int res;
    res = sum(num1, num2);
    cout << res;*/

    /*int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    cout << minimum;*/

    /*int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2);
    cout << maximum;*/

    /*int num;
    cin >> num;
    doSomething(num);
    cout << num;*/

    /*string s = "raj";
    doSomething(s);
    cout << s << endl;*/

    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}