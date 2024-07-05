#include<iostream>
using namespace std;

int main(void){
    for(int i = 0; i <= 5; i++){
        cout << i << " ";
        i++;
    }   // {0, 2, 4}
    cout << endl;

    // for(int i = 0; i <= 5; i--){
    //     cout << i << " ";
    //     i++;
    // }   // infinite times run

    for(int i = 0; i <= 15; i += 2){
        cout << i << " ";
        if(i&1){
            continue;
        }
        i++;

    }   //{0, 3, 5, 7, 9, 11, 13, 15}

       /*  0 & 1 -> 0 (if) x
        3 & 1 => (if) Yes
        5  ...
        7  ...
        9  ...
        11 ...
        13 ...
        15 & 1 => (if) Yes
    */
    cout << endl;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i; j <= 5; j++){
            cout << i << " " << j << endl;
            sum++;
        }
    }
    cout << "\n---------\n";

    int sum2 = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i; j <= 5; j++){
            if(i + j == 10){
                break;
            }
            cout << i << " " << j << endl;
            sum2++;
        }
    }
    cout << endl << (sum == sum2) << endl;
    return 0;
}