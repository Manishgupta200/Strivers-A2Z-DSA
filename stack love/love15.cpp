// N Stacks In An Array
// https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb

#include <bits/stdc++.h> 
using namespace std;

class NStack
{
public:
    // Initialize your data structure.
    int* arr;
    int* top;
    int* next;
    int size, no_of_stack;
    int freeSpot;
    NStack(int N, int S)
    {
        // Write your code here.
        this->size = S;
        this->no_of_stack = N;

        arr = new int[size];
        top = new int[no_of_stack];
        next = new int[size];

        // initialise top
        for(int i = 0; i < no_of_stack; i++){
            top[i] = -1;
        }

        // initialise next
        for(int i = 0; i < size; i++){
            next[i] = i+1;
            if(i == size-1) next[i] = -1;
        }

        // initialise freeSpot
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        // check for overflow
        if(freeSpot == -1){
            // overflow
            return false;
        }
        else{
            // find index
            int index = freeSpot;

            // freeSpot update
            freeSpot = next[index];

            // insert in arr
            arr[index] = x;

            // update next
            next[index] = top[m-1];

            // update top
            top[m-1] = index;

            return true;
        }
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        // check for underflow
        if(top[m-1] == -1){
            // underflow
            return -1;
        }
        else{
            int index = top[m-1];

            top[m-1] = next[index];

            next[index] = freeSpot;

            freeSpot = index;

            return arr[index];
        }
    }
};





// #include<bits/stdc++.h>
// using namespace std;

// int main(void){
//     int a[5];
//     // memset(a, -1, sizeof(a));
//     memset(a, -1, 20);
//     for(int i = 0; i < 5; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }