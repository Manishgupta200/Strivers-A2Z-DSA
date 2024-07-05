#include<iostream>
using namespace std;
// print 1 to N without the help of loop
    void printTillN(int N)
    {
        // Write Your Code here
        if(N >= 1){
            printTillN(N-1);
            cout << N << " ";
        }
    }

int main(void){

    printTillN(10);
    return 0;
}