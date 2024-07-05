#include<iostream>
using namespace std;

int count = 0;
void printNos(int n){
    if(n-count == 0)
    return;
    cout << (n-count) << " ";
    count++;
    printNos(n);
}

void printNos2(int i, int n){
    if(i > n) return;
    cout << (n-i+1) << " ";

    printNos2(i+1, n);
}

void printNos3(int i, int n){
    if(i < 1) return;
    cout << i << " ";

    printNos3(i-1, n);
}

// print 1 to N by using Backtracking
void printNos4(int i, int n){
    if(i < 1) return;

    printNos4(i-1, n);
    cout << i << " ";
}

int j = 1;
void printNos5(int n){
    if(j == n) return;
    j++;
    printNos5(n);
    cout << j << " ";
    j--;
}

int main(void){
    printNos(5);
    cout << endl;
    printNos2(1, 4);
    cout << endl;
    printNos3(4, 4);
    cout << endl;
    cout << "By using backtracking: ";
    printNos4(4, 4);
    cout << endl;
    printNos5(4);
    return 0;
}