#include<iostream>
using namespace std;

// COUNT NUMBE OF NOTES
int main(void){
    int n = 1330;
    int count1, count2, count3, count4;
    count1 = count2 = count3 = count4 = 0;
    switch(n >= 100){
        case 1:
            count1 = n / 100;
            n = n - (count1 * 100);          
    }
    switch(n >= 50){
        case 1:
            count2 = n / 50;
            n = n - (count2 * 50);          
    }
    switch(n >= 20){
        case 1:
            count3 = n / 20;
            n = n - (count3 * 20);          
    }
    switch(n >= 1){
        case 1:
            count4 = n / 1;
            n = n - (count4 * 1);          
    }

    cout << "Number of 100 note require: " << count1 << endl;
    cout << "Number of 50 note require: " << count2 << endl;
    cout << "Number of 20 note require: " << count3 << endl;
    cout << "Number of 1 note require: " << count4 << endl;
}