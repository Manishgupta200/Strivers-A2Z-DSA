#include<stdio.h>
using namespace std;

int main()
{
    int arr1[4]={1,4,8,9};
    int arr2[3]={1,14,18};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int ans[n+m];
    int i = 0;
    int left = 0, right = 0;
    while(left < n && right < m){
        if(arr1[left] <= arr2[right]){
            ans[i] = arr1[left];
            i++, left++;
        }
        else{
            ans[i] = arr2[right];
            i++, right++;
        }
    }
    while(left < n){
        ans[i] = arr1[left];
        i++, left++;
    }
    while(right < m){
        ans[i] = arr2[right];
        i++, right++;
    }
    
    for(int i = 0; i < m+n-1; i++){
        if(ans[i] != ans[i+1]){
            printf("%d ", ans[i]);
        }
    }
    if(ans[m+n-2] != ans[m+n-1]){
        printf("%d", ans[m+n-1]);
    }

    return 0;
}
