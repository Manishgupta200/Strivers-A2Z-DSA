// SCOPING OF VARIABLES
#include<iostream>
using namespace std;

int i = 30;     // GLOBAL VARIABLES 

int main(void){
    {
        int i = 5;
        {
            int i = 2;
            cout << i << " ";
        }
        cout << i << " ";
    }
    cout << i << endl;
    return 0;
}