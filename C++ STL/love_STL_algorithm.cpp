#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printV(vector<int> v){
    cout << "v: ";
    for(auto it : v)
        cout << it << " ";
    cout << endl;
}

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(0);
    v.push_back(9);

    printV(v);

    cout << "After sorted\n";
    sort(v.begin(), v.end());       //based on intro sort (intro sort is made up of a combination of quick sort, heap sort and insertion sort.)
    printV(v);

    cout << "Finding 6 in v: " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Finding 5 in v: " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "lower_bound of 6: " << *lower_bound(v.begin(), v.end(), 6) << " (index: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << ")" << endl;
    vector<int>::iterator it = upper_bound(v.begin(), v.end(), 3);
    cout << "upper_bound of 3: " << *(it) << " (index: " << it - v.begin() << ")" << endl;

    int a = 10;
    int b = 9;
    cout << "a: " << a << ", b: " << b << endl; 
    cout << "max: " << max(a, b) << endl;
    cout << "min: " << min(a, b) << endl;
    swap(a, b);
    cout << "a: " << a << ", b: " << b << endl; 

    string abcd = "abcd";       
    reverse(abcd.begin(), abcd.end());
    cout << "After reverse abcd: " << abcd << endl;

    cout << "Before rotation v: ";
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate v: ";
    for(int i : v){
        cout << i << " ";
    }
    // {3, 5, 9, 0, 1}
    cout << endl;
    return 0;
}