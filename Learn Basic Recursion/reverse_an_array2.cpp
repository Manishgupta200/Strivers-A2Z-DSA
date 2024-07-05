#include <iostream>
#include<algorithm>
using namespace std;
//Function to print array
void printArray(int ans[], int n) {
  cout << "The reversed array is:- ";
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
//Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
    // TC -> O(n) single-pass for reversing array
    // SC -> O(n) for the extra array used
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}

void reverseArray2(int arr[], int n){
    // TC -> O(n), single passed involved
    // SC -> O(1)
    int p1 = 0, p2 = n-1;
    while(p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++; p2--;
    }
    printArray(arr, n);
}

void reverseArray3(int arr[], int n){
    reverse(arr, arr + n);
    printArray(arr, n);
}

int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   printArray(arr, n);
   cout << endl;
   reverseArray(arr, n);
   cout << endl;
   reverseArray2(arr, n);
   cout << endl;
   printArray(arr, n);
   cout << endl;
   reverseArray3(arr, n);   //Affect on the value in the real array
   cout << endl;
   printArray(arr, n);
   return 0;
}

