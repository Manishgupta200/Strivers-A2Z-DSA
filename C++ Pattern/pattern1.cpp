// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << "* ";
    }
    cout << endl;
    }
    cout << "\n\n";
}

void pattern2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern5(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern5_alternate(int n){
    for(int i = n; i > 0; i--){
	    for(int j = i; j > 0; j--){
	        cout << "* ";
	    }
	cout << "\n";
    }
    cout << endl << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern6(int n){
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern6_alternate(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern7(int n){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 1; j--){
            cout << "  ";
        }
        for(int k = i; k <= n - i + n; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern7_alternate(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern8(int n){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        for(int k = i; k < n + n - (i + 1); k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern8_alternate(int n){
    for(int i = n; i > 0; i--){
	    for(int j = i; j < n; j++){
	        cout << " ";
	    }
	    for(int k = (n - i); k < (n + i) - 1; k++){
	        cout << "*";
	    }
	    cout << endl;
	}
    cout << "\n\n";

    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern9(int n){
        // for(int i = n; i > 0; i--){
        //     for(int j = 0; j <= n - i; j++){
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
        for(int i = n; i > 0; i--){
            for(int j = i-1; j > 0; j--){
                cout << " ";
            }
            for(int k = 0; k <= n - i; k++){
                cout << "* ";
            }
            cout << endl;
        }
        
        // reverse
        for(int i = n; i > 0; i--){
            for(int j = i; j < n; j++){
                cout << " ";
            }
            for(int k = n - i; k < n; k++){
                cout << "* ";
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern10(int n){
        for(int i = n; i > 1; i--){
            for(int j = i; j <= n; j++){
                cout << "* ";
            }
            cout << endl;
        }
        
        for(int i = 0; i < n; i++){
            cout << "* ";
        }
        
        for(int i = n; i > 0; i--){
            cout << endl;
            for(int j = i; j > 1; j--){
                cout << "* ";
            }
            
        }
        cout << "\n\n";
}

// important
void pattern10_alternate(int n){
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n){
            stars = 2*n - i;
        }
        for(int j = 1; j <= stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern11(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                if(i % 2 == 0 && j % 2 == 0){
                    cout << "1 ";
                }
                else if(i % 2 != 0 && j % 2 != 0){
                    cout << "1 ";
                }
                else{
                    cout << "0 ";
                }
            }
            cout << endl;
        }
        cout << "\n\n";
}

// important
void pattern11_alternate(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout << start << " ";
            // flip the number
            start = 1 - start;
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern12(int n){
        for(int i = n; i > 0; i--){
            for(int j = i; j <= n; j++){
                cout << (j + 1) - i  << " ";
            }
            
            for(int j = i * 2; j > 2; j--){
                cout << "  ";
            }
            
            for(int j = i; j <= n; j++){
                cout << (n + 1) - j << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
}

// important
void pattern12_alternate(int n){
    int space = 2*(n - 1);
    for(int i = 1; i <= n; i++){
        // number
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        // space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        // number
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
    cout << "\n\n";
}

void pattern13(int n){
        int num = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                // first pring number then increment
                cout << num++ << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern14(int n){
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int arr[26];
        for(int i = 0; i < 26; i++){
            arr[i] = str[i];
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << char(arr[j]);
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern14_alternate(int n){
    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A' + i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << "\n\n";

    for(int i = 0; i < n; i++){
        char character = 'A';
        for(int j = 0; j <= i; j++){
            cout << character;
            character++;
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern15(int n){
            for(int i = 0; i < n; i++){
            for(int j = 'A'; j < ('A' + n - i); j++){
                cout << char(j);
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern16(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << char('A' + i);
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern17(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << char('A' + n-i+j-1) << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
}

// but not for universal case
void pattern17_alternate(int n){
    for(int i = 0; i < n; i++){
        for(char j = 'E' - i; j <= 'E'; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern18(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << char('A' + n - j - 1) << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern19(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "*";
        }

        for(int k = n-i; k < n+i; k++){
            cout << " ";
        }

        for(int j = i; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){
            cout << "*";
        }

        for(int k = i; k+1 < 2*n-i-1; k++){
            cout << " ";
        }

        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

// important
void pattern19_alternate(int n){
    int space = 0;
    for(int i = 0; i < n; i++){
        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
        space += 2;
    }
    space -= 2;;
    for(int i = 1; i <= n; i++){
        // star
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        // star
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
    cout << "\n\n";
}

void pattern20(int n){
    for(int i = 0; i < n-1 ; i++){

        for(int j = 0; j <= i; j++){
            cout << "*";
        }

        for(int k = i; k+1 < 2*n-i-1; k++){
            cout << " ";
        }

        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "*";
        }

        for(int k = n-i; k < n+i; k++){
            cout << " ";
        }

        for(int j = i; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n";
}

// important
void pattern20_alternate(int n){
    int space = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++){

        int star = i;
        if(i > n) star = 2*n - i;

        // star
        for(int j = 1; j <= star; j++){
            cout << "*";
        }

        // space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        // star
        for(int j = 1; j <= star; j++){
            cout << "*";
        }

        cout << endl;
        if(i < n) space -= 2;
        else space += 2;
    }
    cout << "\n\n";
}

void pattern21(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i > 0 && i < n-1 && j > 0 && j < n-1){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }
            cout << endl;
        }
        cout << "\n\n";
}

void pattern22(int n){
    for(int i = 0; i < 2*n - 1; i++){
        for(int j = 0; j < 2*n - 1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void pattern23(int n){
        char character = 'A';
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - (i + 1); j++){
                cout << " ";
            }
            for(int j = 0; j < i; j++){
                cout << char('A' + j);
            }
            cout << character;
            character++;
            
            for(int j = i; j > 0; j--){
                cout << char('A' + j - 1);
            }
            cout << endl;
        }
        cout << "\n\n";
}

// important
void pattern23_alternate(int n){

    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakingPoint = (2*i + 1) / 2;
        for(int j = 1; j <= 2*i + 1; j++){
            cout << ch;
            if(j <= breakingPoint) ch++;
            else ch--;
        }
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

int main(){
    int n = 5;
    cout << "Pattern 1:\n";
    pattern1(n);
    cout << "Pattern 2:\n";
    pattern2(n);
    cout << "Pattern 3:\n";
    pattern3(n);
    cout << "Pattern 4:\n";
    pattern4(n);
    cout << "Pattern 5:\n";
    pattern5(n);
    cout << "Pattern 5.2:\n";
    pattern5_alternate(n);
    cout << "Pattern 6:\n";
    pattern6(n);
    cout << "Pattern 6.2:\n";
    pattern6(n);
    cout << "Pattern 7:\n";
    pattern7(n);
    cout << "Pattern 7.2:\n";
    pattern7_alternate(n);
    cout << "Pattern 8:\n";
    pattern8(n);
    cout << "Pattern 8.2:\n";
    pattern8_alternate(n);
    cout << "Pattern 9:\n";
    pattern9(n);
    cout << "Pattern 10:\n";
    pattern10(n);
    cout << "Pattern 10.2:\n";
    pattern10_alternate(n);
    cout << "Pattern 11:\n";
    pattern11(n);
    cout << "Pattern 11.2:\n";
    pattern11_alternate(n);
    cout << "Pattern 12:\n";
    pattern12(n);
    cout << "Pattern 12.2:\n";
    pattern12_alternate(n);
    cout << "Pattern 13:\n";
    pattern13(n);
    cout << "Pattern 14:\n";
    pattern14(n);
    cout << "Pattern 14.2:\n";
    pattern14_alternate(n);
    cout << "Pattern 15:\n";
    pattern15(n);
    cout << "Pattern 16:\n";
    pattern16(n);
    cout << "Pattern 17:\n";
    pattern17(n);
    cout << "Pattern 17.2:\n";
    pattern17_alternate(n);
    cout << "Pattern 18:\n";
    pattern18(n);
    cout << "Pattern 19:\n";
    pattern19(n);
    cout << "Pattern 19.2:\n";
    pattern19_alternate(n);
    cout << "Pattern 20:\n";
    pattern20(n);
    cout << "Pattern 20.2:\n";
    pattern20_alternate(n);
    cout << "Pattern 21:\n";
    pattern21(n);
    cout << "Pattern 22:\n";
    pattern22(n);
    cout << "Pattern 23:\n";
    pattern23(n);
    cout << "Pattern 23.2:\n";
    pattern23_alternate(n);

    return 0;
}