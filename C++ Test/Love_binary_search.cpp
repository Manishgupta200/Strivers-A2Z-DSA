#include<iostream>
using namespace std;

// Condition - array should be in inc. or dec. order. i.e. monotonic
// TC -> O(log n)
int binarySearch(int arr[], int size, int key){
    int start = 0, end = size-1;
    // int mid = (start + end) / 2;     //not a good way because for larger int number sum is out of range for int data type
    int mid = start + (end - start) / 2;    //better way

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(void){
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    cout << binarySearch(even, 6, 5) << endl;
    cout << binarySearch(odd, 5, 14) << endl;
    return 0;
}