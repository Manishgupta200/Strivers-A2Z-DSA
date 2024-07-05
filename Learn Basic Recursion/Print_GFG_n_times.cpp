#include<iostream>
using namespace std;

    int count = 0;
    void printGfg(int N) {
        // Code here
        if(count == N) return;
        cout << "GFG ";
        count++;
        printGfg(N);
    }

    void printGfg2(int i, int n){
        if(i > n) return;
        cout << "GFG ";

        printGfg2(i+1, n);
    }

int main(void){
    printGfg(5);
    cout << endl;
    printGfg2(1, 5);
    return 0;
}