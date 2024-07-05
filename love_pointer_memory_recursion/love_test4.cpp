#include<iostream>
using namespace std;

int main(void){
    int num = 5;
    int a = num;
    cout << "Before: " << a << " " << num << endl;
    a++;
    cout << "After: " << a << " " << num << endl << endl;

    int num2 = 5;
    int *p = &num2;
    int b = *p;
    cout << "Before: " << b << " " << num2 << endl;
    b++;
    cout << "After: " << b << " " << num2 << endl << endl;

    int num3 = 5;
    int *q = &num3;
    cout << "Before: " << *q << " " << num3 << endl;
    (*q)++;
    cout << "Before: " << *q << " " << num3 << endl << endl;

    // copying a pointer
    int *ptr = q;
    cout << *q << " " << *ptr << endl;
    cout << q << " " << ptr << endl << endl;

    // Pointer arithmetic
    double i = 3;
    double *poi = &i;
    (*poi)++;
    cout << *poi << " " << i << endl;
    (*poi) = (*poi) + 1;
    cout << *poi << " " << i << endl;
    *poi = *poi + 1;
    cout << *poi << " " << i << endl;
    cout << "poi before: " << poi << endl;
    poi = poi + 1;  // increase 8 bit every time
    cout << "poi after: " << poi << endl;

    return 0;
}