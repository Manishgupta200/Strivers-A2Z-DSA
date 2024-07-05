#include<bits/stdc++.h>
using namespace std;

int main(){
    // lower_bound and upper_bound in array and vector
    // lower_bound and upper_bound function in case of array return pointer and in case of vector return iterator
    // sorting of element is compulsory before finding upper or lower bound
    // lower_bound return iterator of the first matching value. if 5 5 5 6 5  then name.lower_bound(5) return iterator of first value i.e, iterator of '5'
    // upper_bound return iterator of the just first greater of the last matching value. So, need one decrement to go to the last matching value.
    // time complexity -> O(log n)
    int n, val;
    cout << "Enter size of array: ";
    cin >> n;
    // int arr[n];
    vector<int> arr(n);
    cout << "Enter values of " << n << " size array: "; 
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    // sort(arr, arr + n);
    sort(arr.begin(), arr.end());
    cout << "(in sorted arder) arr: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Value likho jiska tum lower_bound aur upper_bound nikalna chahate ho: ";
    cin >> val;
    // int *ptr1 = lower_bound(arr, arr + n, val);
    auto ptr1 = lower_bound(arr.begin(), arr.end(), val);
    // int *ptr2 = upper_bound(arr, arr + n, val);
    auto ptr2 = upper_bound(arr.begin(), arr.end(), val);
    // if(ptr1 == (arr + n)){
    //     cout << "Not found. You entered value upper from range";
    // }
    if(ptr1 == arr.end()){
        cout << "Not found. You entered value upper from range";
    }
    else{
            cout << "value " << val << " ka lower_bound value h: " << *(ptr1) << endl;
            cout << "value " << val << " ka upper_bound value h: " << *(ptr2) << endl;
    }
    // return index
    int ind = upper_bound(arr.begin(), arr.end(), val) - arr.begin();
    cout << "Index of upper _bound: " << ind << endl;
    return 0;
}