// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops
#include<iostream>
using namespace std;

    int count = 1;
    void printNos(int N)
    {
        //Your code here
        if(count == N+1) return;
        cout << count << " ";
        count++;
        printNos(N);
    }

    void printNos2(int i, int n){
        if(i > n) return;
        cout << i << " ";

        printNos2(i+1, n);
    }

    // by Backtracking
    void printNos3(int i, int n){
        if(i > n) return;
        
        printNos3(i+1, n);
        cout << i << " ";
    }
int main(void){
    printNos(5);
    cout << endl;
    printNos2(1, 10);
    cout << endl << "By using Backtracking: ";
    printNos3(1, 4);
    return 0;
}

// also by using formula --> (n * (n + 1)) / 2