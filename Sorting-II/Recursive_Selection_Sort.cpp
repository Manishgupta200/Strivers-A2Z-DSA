#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v, int startingIndex){

        if(startingIndex == v.size()-2) return;

        int mini = startingIndex;
        for(int j = startingIndex + 1; j <= v.size()-1; j++){
            if(v[j] < v[mini]){
                mini = j;
            }
        }
        swap(v[startingIndex], v[mini]);

    selectionSort(v, startingIndex+1);
}

int main(void){
    vector<int> v = {3, 6, 2, 4, 1};
    int n = v.size();
    selectionSort(v, 0);

    // print v
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}