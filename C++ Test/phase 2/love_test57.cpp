#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
    int n = 5;
    int *ptr = (int *)calloc(n, sizeof(int));

    // for(int i = 0; i < n; i++){
    //     ptr[i] = i*2;
    // }

    for(int i = 0; i < n; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;

    free(ptr);
    return 0;
}