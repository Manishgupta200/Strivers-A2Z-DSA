#include<bits/stdc++.h>
using namespace std;

int main(void){
    // NULL pointer

    // int *p;
    // int *p = NULL;
    int *p = 0;

    cout << p << endl;      // return 0
    // cout << *p << endl;     // rseg-fault

    // DOUBLE POINTER

    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    cout << a << " " << *ptr1 << " " << **ptr2 << endl;
    cout << &a << " " << ptr1 << " " << *ptr2 << endl;

    // VOID POINTER

    void *poi;
    int i = 10;

    poi = &i;
    cout << &i << " " << poi << endl;
    // cout << *poi << endl;    // Void pointer cannot be deferenced

    // WILD POINTERS
    // --> pointer behaves like a wild pointer when decleared but not initialized.

    int *m; // wild pointer
    int b = 10;
    m = &b; // m is not a wild pointer now
    *m = 12;
    cout << b << " " << *m << endl;

    // DANGLIND POINTERS
    
    return 0;
}