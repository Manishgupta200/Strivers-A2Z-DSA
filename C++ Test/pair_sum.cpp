// https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> v;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                v.push_back(temp);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;


    // 2nd way (Run Time error occured on Code studio platform)
    // vector<vector<int>> v;
    // sort(arr.begin(), arr.end());
    // int n = arr.size();
    // for(int left = 0; left < n; left++){
    //     int right = n-1;

    //         int sum = arr[left] + arr[right];

    //         while(sum > s){
    //             right--;
    //             sum = arr[left] + arr[right];
    //         }
    //         // if(sum == s && left < right) v.push_back({arr[left], arr[right]});
    //         int y = arr[right];
    //         int x = arr[left];
    //         while(left < right && arr[right] == y){

    //             if(sum == s && left < right) v.push_back({arr[left], arr[right]});
    //             right--;
    //         }
    //     // while(left+1 < n && arr[left] == arr[left+1]) left++;
    // }
    // sort(v.begin(), v.end());
    // return v;
}

int main(void){
    int s = 5;
    vector<int> v = {1, 2, 3, -1, 4, 2, 6, 6};

    s = 0;
    v = {2, -3, -3, 3, -2};
    vector<vector<int>> v2 = pairSum(v, s);

    // for(int i = 0; i < v2.size(); i++){
    //     for(int j = 0; j < v2.size(); j++){
    //         cout << v2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(vector<int> it : v2){
        for(int x : it){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << "size test kar rahe h: " << v2[1].size() << endl;
    return 0;
}