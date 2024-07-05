#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){

    int first[] = {1, 2, 5};
    printArray(first, 3);
    int second[3] = {1, 2, 5};
    printArray(second, 3);
    int third[15] = {1, 2, 5};
    printArray(third, 15);
    int fourth[15] = {0};
    printArray(fourth, 15);
    int fifth[15] = {1};
    printArray(fifth, 13);
    int sixth[15] = {1, 3, 7};
    printArray(sixth, sizeof(sixth) / sizeof(int));
    int seventh[] = {1, 3, 7};
    printArray(seventh, sizeof(seventh) / sizeof(int));
    int eight[15];
    printArray(eight, 15);
    char arrayChar[3] = {'a', 'k', 'g'};
    bool arrayBool[5] = {1, 0, 'j', "asdf", -5};
    for(int i = 0; i < 5; i++){
        cout << arrayBool[i] << " ";
    }
    float arrayFloat[3] = {2, 4.3, -0.4};
    double arrayDouble[3] = {1234.3, 342, -23.09};
    return 0;
}